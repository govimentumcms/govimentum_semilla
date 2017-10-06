<?php
/**
 * @file
 * govi_pie_de_pagina_institucional.features.inc
 */

/**
 * Implements hook_views_api().
 */
function govi_pie_de_pagina_institucional_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function govi_pie_de_pagina_institucional_node_info() {
  $items = array(
    'enlaces_pie_de_pagina' => array(
      'name' => t('Enlaces pie de página institucional'),
      'base' => 'node_content',
      'description' => t('Utilice este tipo de contenido para gestionar enlaces que se presentan en el pie de página institucional, de acuerdo a la categorización: Alcaldía, Entidades de Control, Vinculos de interés y Gobierno en Línea'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
