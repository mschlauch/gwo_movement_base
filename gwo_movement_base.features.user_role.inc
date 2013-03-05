<?php
/**
 * @file
 * gwo_movement_base.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function gwo_movement_base_user_default_roles() {
  $roles = array();

  // Exported role: networker.
  $roles['networker'] = array(
    'name' => 'networker',
    'weight' => '4',
  );

  return $roles;
}
