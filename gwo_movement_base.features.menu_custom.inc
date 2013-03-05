<?php
/**
 * @file
 * gwo_movement_base.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function gwo_movement_base_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-network.
  $menus['menu-network'] = array(
    'menu_name' => 'menu-network',
    'title' => 'NETWORK',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => '5',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('NETWORK');


  return $menus;
}
