<?php
/**
 * @file
 * ana_pricing.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function ana_pricing_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'pro_from_900_acc';
  $quicktabs->ajax = 1;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'packages';
  $quicktabs->tabs = array(
    0 => array(
      'nid' => '44',
      'teaser' => 1,
      'hide_title' => 1,
      'title' => 'starter',
      'weight' => '-100',
      'type' => 'node',
    ),
    1 => array(
      'nid' => '45',
      'teaser' => 1,
      'hide_title' => 1,
      'title' => 'intermediate',
      'weight' => '-99',
      'type' => 'node',
    ),
    2 => array(
      'nid' => '46',
      'teaser' => 1,
      'hide_title' => 1,
      'title' => 'pro',
      'weight' => '-98',
      'type' => 'node',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Basic';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('intermediate');
  t('packages');
  t('pro');
  t('starter');

  $export['pro_from_900_acc'] = $quicktabs;

  return $export;
}
