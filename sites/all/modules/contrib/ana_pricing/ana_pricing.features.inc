<?php
/**
 * @file
 * ana_pricing.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ana_pricing_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "delta" && $api == "delta") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ana_pricing_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function ana_pricing_node_info() {
  $items = array(
    'new_packages' => array(
      'name' => t('packages'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('package'),
      'help' => '',
    ),
  );
  return $items;
}
