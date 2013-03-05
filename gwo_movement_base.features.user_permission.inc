<?php
/**
 * @file
 * gwo_movement_base.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function gwo_movement_base_user_default_permissions() {
  $permissions = array();

  // Exported permission: create gwo_business content.
  $permissions['create gwo_business content'] = array(
    'name' => 'create gwo_business content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: create gwo_institution content.
  $permissions['create gwo_institution content'] = array(
    'name' => 'create gwo_institution content',
    'roles' => array(
      'networker' => 'networker',
    ),
    'module' => 'node',
  );

  // Exported permission: create gwo_supporter content.
  $permissions['create gwo_supporter content'] = array(
    'name' => 'create gwo_supporter content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any gwo_business content.
  $permissions['delete any gwo_business content'] = array(
    'name' => 'delete any gwo_business content',
    'roles' => array(
      'networker' => 'networker',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any gwo_institution content.
  $permissions['delete any gwo_institution content'] = array(
    'name' => 'delete any gwo_institution content',
    'roles' => array(
      'networker' => 'networker',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any gwo_supporter content.
  $permissions['delete any gwo_supporter content'] = array(
    'name' => 'delete any gwo_supporter content',
    'roles' => array(
      'networker' => 'networker',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own gwo_business content.
  $permissions['delete own gwo_business content'] = array(
    'name' => 'delete own gwo_business content',
    'roles' => array(
      'networker' => 'networker',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own gwo_institution content.
  $permissions['delete own gwo_institution content'] = array(
    'name' => 'delete own gwo_institution content',
    'roles' => array(
      'networker' => 'networker',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own gwo_supporter content.
  $permissions['delete own gwo_supporter content'] = array(
    'name' => 'delete own gwo_supporter content',
    'roles' => array(
      'networker' => 'networker',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any gwo_business content.
  $permissions['edit any gwo_business content'] = array(
    'name' => 'edit any gwo_business content',
    'roles' => array(
      'networker' => 'networker',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any gwo_institution content.
  $permissions['edit any gwo_institution content'] = array(
    'name' => 'edit any gwo_institution content',
    'roles' => array(
      'networker' => 'networker',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any gwo_supporter content.
  $permissions['edit any gwo_supporter content'] = array(
    'name' => 'edit any gwo_supporter content',
    'roles' => array(
      'networker' => 'networker',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own gwo_business content.
  $permissions['edit own gwo_business content'] = array(
    'name' => 'edit own gwo_business content',
    'roles' => array(
      'networker' => 'networker',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own gwo_institution content.
  $permissions['edit own gwo_institution content'] = array(
    'name' => 'edit own gwo_institution content',
    'roles' => array(
      'networker' => 'networker',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own gwo_supporter content.
  $permissions['edit own gwo_supporter content'] = array(
    'name' => 'edit own gwo_supporter content',
    'roles' => array(
      'networker' => 'networker',
    ),
    'module' => 'node',
  );

  return $permissions;
}
