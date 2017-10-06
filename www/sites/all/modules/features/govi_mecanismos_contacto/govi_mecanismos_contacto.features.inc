<?php
/**
 * @file
 * govi_mecanismos_contacto.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function govi_mecanismos_contacto_ctools_plugin_api($module = NULL, $api = NULL) {
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
function govi_mecanismos_contacto_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function govi_mecanismos_contacto_node_info() {
  $items = array(
    'mecanismos_atencion_ciudadano' => array(
      'name' => t('Mecanismos de atención al ciudadano'),
      'base' => 'node_content',
      'description' => t('Utilice este tipo de contenido para gestionar información de los mecanismos de atención al ciudadano.'),
      'has_title' => '1',
      'title_label' => t('Nombre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
