<?php
/**
 * @file
 * ana_pricing.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ana_pricing_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'packages';
  $context->description = '';
  $context->tag = 'page-sections';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'pricing' => 'pricing',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-new_pricing-block' => array(
          'module' => 'views',
          'delta' => 'new_pricing-block',
          'region' => 'preface_first',
          'weight' => '-9',
        ),
        'views-new_pricing-block_1' => array(
          'module' => 'views',
          'delta' => 'new_pricing-block_1',
          'region' => 'preface_second',
          'weight' => '-9',
        ),
        'views-new_pricing-block_2' => array(
          'module' => 'views',
          'delta' => 'new_pricing-block_2',
          'region' => 'preface_third',
          'weight' => '-9',
        ),
        'nodeblock-47' => array(
          'module' => 'nodeblock',
          'delta' => '47',
          'region' => 'dashboard_sidebar',
          'weight' => '-10',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'pricing',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('page-sections');
  $export['packages'] = $context;

  return $export;
}
