<?php
/**
 * @file
 * ana_pricing.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ana_pricing_user_default_permissions() {
  $permissions = array();

  // Exported permission: create new_packages content
  $permissions['create new_packages content'] = array(
    'name' => 'create new_packages content',
    'roles' => array(),
  );

  // Exported permission: delete any new_packages content
  $permissions['delete any new_packages content'] = array(
    'name' => 'delete any new_packages content',
    'roles' => array(),
  );

  // Exported permission: delete own new_packages content
  $permissions['delete own new_packages content'] = array(
    'name' => 'delete own new_packages content',
    'roles' => array(),
  );

  // Exported permission: edit any new_packages content
  $permissions['edit any new_packages content'] = array(
    'name' => 'edit any new_packages content',
    'roles' => array(),
  );

  // Exported permission: edit own new_packages content
  $permissions['edit own new_packages content'] = array(
    'name' => 'edit own new_packages content',
    'roles' => array(),
  );

  return $permissions;
}
