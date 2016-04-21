<?php
/**
 * @file
 * govi_presupuesto.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function govi_presupuesto_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "path_breadcrumbs" && $api == "path_breadcrumbs") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function govi_presupuesto_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function govi_presupuesto_node_info() {
  $items = array(
    'presupuesto' => array(
      'name' => t('Presupuesto'),
      'base' => 'node_content',
      'description' => t('Utilize este tipo de contenido para gestionar la información presupuestal de su entidad'),
      'has_title' => '1',
      'title_label' => t('Nombre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
