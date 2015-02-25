<?php
/**
 * @file
 * ana_pricing.delta.inc
 */

/**
 * Implements hook_delta_default_templates().
 */
function ana_pricing_delta_default_templates() {
  $export = array();

  $delta = new stdClass();
  $delta->disabled = FALSE; /* Edit this to true to make a default delta disabled initially */
  $delta->api_version = 3;
  $delta->machine_name = 'pricing';
  $delta->name = 'pricing';
  $delta->description = 'thirds-region below content';
  $delta->theme = 'smartsitesomega';
  $delta->mode = 'preserve';
  $delta->parent = '';
  $delta->settings = array(
    'theme_smartsitesomega_settings' => array(
      'alpha_zone_content_weight' => '1',
      'alpha_zone_content_primary' => NULL,
      'alpha_region_dashboard_inactive_zone' => 'content',
      'alpha_region_dashboard_inactive_columns' => '12',
      'alpha_region_dashboard_inactive_equal_height_element' => 0,
      'alpha_region_content_columns' => '12',
      'alpha_zone_preface_weight' => '2',
      'alpha_region_preface_first_equal_height_container' => 1,
      'alpha_region_preface_second_equal_height_container' => 1,
      'alpha_region_preface_third_equal_height_container' => 1,
      'alpha_region_dashboard_sidebar_zone' => 'footer',
      'alpha_region_dashboard_sidebar_columns' => '12',
      'alpha_region_dashboard_sidebar_weight' => '5',
      'alpha_region_dashboard_sidebar_equal_height_element' => 0,
    ),
  );
  $export['pricing'] = $delta;

  return $export;
}
