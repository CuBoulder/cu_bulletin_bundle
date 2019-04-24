<?php

/**
 * @file
 * cu_bulletin_bundle.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cu_bulletin_bundle_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function cu_bulletin_bundle_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function cu_bulletin_bundle_node_info() {
  $items = array(
    'bulletin' => array(
      'name' => t('Bulletin'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
