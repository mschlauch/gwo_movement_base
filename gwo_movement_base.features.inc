<?php
/**
 * @file
 * gwo_movement_base.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gwo_movement_base_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function gwo_movement_base_node_info() {
  $items = array(
    'gwo_business' => array(
      'name' => t('GWO business'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'gwo_institution' => array(
      'name' => t('GWO institution'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'gwo_supporter' => array(
      'name' => t('GWO supporter'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
