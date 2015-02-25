<?php

/**
 * @file
 * This file is empty by default because the base theme chain (Alpha & Omega) provides
 * all the basic functionality. However, in case you wish to customize the output that Drupal
 * generates through Alpha & Omega this file is a good place to do so.
 * 
 * Alpha comes with a neat solution for keeping this file as clean as possible while the code
 * for your subtheme grows. Please read the README.txt in the /preprocess and /process subfolders
 * for more information on this topic.
 */
 

//breadcrumb fix
function startersite_menu_breadcrumb_alter(&$active_trail, $item) {
    global $language ;
    $lang_name = $language->language;
    foreach (array_keys($active_trail) as $key) {
    if(array_key_exists('mlid',$active_trail[$key]) ){
        $translatedValue = i18n_string_translate(array('menu', 'item', $active_trail[$key]['mlid'], 'title'), $active_trail[$key]['title'],      array('langcode' => $lang_name, 'sanitize' => FALSE));
        $active_trail[$key]['title'] = $translatedValue;
      }
     }
}
