<?php
/**
 * @file
 * ana_pricing.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ana_pricing_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'new_pricing';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'new_pricing';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'views_accordion';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['collapsible'] = 1;
  $handler->display->display_options['style_options']['row-start-open'] = '0';
  $handler->display->display_options['style_options']['autoheight'] = 0;
  $handler->display->display_options['style_options']['clearstyle'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: package_cost_new */
  $handler->display->display_options['fields']['field_package_cost_new']['id'] = 'field_package_cost_new';
  $handler->display->display_options['fields']['field_package_cost_new']['table'] = 'field_data_field_package_cost_new';
  $handler->display->display_options['fields']['field_package_cost_new']['field'] = 'field_package_cost_new';
  $handler->display->display_options['fields']['field_package_cost_new']['label'] = '';
  $handler->display->display_options['fields']['field_package_cost_new']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_package_cost_new']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_package_cost_new']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] [field_package_cost_new]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: package description */
  $handler->display->display_options['fields']['field_package_description']['id'] = 'field_package_description';
  $handler->display->display_options['fields']['field_package_description']['table'] = 'field_data_field_package_description';
  $handler->display->display_options['fields']['field_package_description']['field'] = 'field_package_description';
  $handler->display->display_options['fields']['field_package_description']['label'] = '';
  $handler->display->display_options['fields']['field_package_description']['element_label_colon'] = FALSE;
  /* Field: Content: hosting cost */
  $handler->display->display_options['fields']['field_cost']['id'] = 'field_cost';
  $handler->display->display_options['fields']['field_cost']['table'] = 'field_data_field_cost';
  $handler->display->display_options['fields']['field_cost']['field'] = 'field_cost';
  $handler->display->display_options['fields']['field_cost']['label'] = '';
  $handler->display->display_options['fields']['field_cost']['element_label_colon'] = FALSE;
  /* Field: Content: Website cost */
  $handler->display->display_options['fields']['field_website_cost']['id'] = 'field_website_cost';
  $handler->display->display_options['fields']['field_website_cost']['table'] = 'field_data_field_website_cost';
  $handler->display->display_options['fields']['field_website_cost']['field'] = 'field_website_cost';
  $handler->display->display_options['fields']['field_website_cost']['label'] = '';
  $handler->display->display_options['fields']['field_website_cost']['element_label_colon'] = FALSE;
  /* Field: Content: package details */
  $handler->display->display_options['fields']['field_package_details']['id'] = 'field_package_details';
  $handler->display->display_options['fields']['field_package_details']['table'] = 'field_data_field_package_details';
  $handler->display->display_options['fields']['field_package_details']['field'] = 'field_package_details';
  $handler->display->display_options['fields']['field_package_details']['label'] = '';
  $handler->display->display_options['fields']['field_package_details']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['argument'] = '44';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'new_packages' => 'new_packages',
  );

  /* Display: Starter */
  $handler = $view->new_display('block', 'Starter', 'block');

  /* Display: Intermediate */
  $handler = $view->new_display('block', 'Intermediate', 'block_1');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['argument'] = '45';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Pro */
  $handler = $view->new_display('block', 'Pro', 'block_2');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['argument'] = '46';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $export['new_pricing'] = $view;

  return $export;
}
