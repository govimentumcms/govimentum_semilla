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
    'enlaces_pie_de_pagina' => array(
      'name' => t('Enlaces pie de página institucional'),
      'base' => 'node_content',
      'description' => t('Utilice este tipo de contenido para gestionar enlaces que se presentan en el pie de página institucional, de acuerdo a la categorización: Alcaldía, Entidades de Control, Vinculos de interés y Gobierno en Línea'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'mecanismos_atencion_ciudadano' => array(
      'name' => t('Mecanismos de atención al ciudadano'),
      'base' => 'node_content',
      'description' => t('Utilice este tipo de contenido para gestionar información de los mecanismos de atención al ciudadano.'),
      'has_title' => '1',
      'title_label' => t('Nombre'),
      'help' => '',
    ),
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
