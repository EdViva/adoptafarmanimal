<?php
/**
 * @file
 * ana_pricing.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ana_pricing_user_default_roles() {
  $roles = array();

  // Exported role: administrator
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => '4',
  );

  // Exported role: advanced site admin
  $roles['advanced site admin'] = array(
    'name' => 'advanced site admin',
    'weight' => '3',
  );

  // Exported role: site editor
  $roles['site editor'] = array(
    'name' => 'site editor',
    'weight' => '2',
  );

  return $roles;
}
