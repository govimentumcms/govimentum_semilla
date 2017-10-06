<?php
/**
 * @file
 * govi_pie_de_pagina_institucional.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function govi_pie_de_pagina_institucional_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'informacion_pie_de_pagina';
  $view->description = 'Presenta la información de contacto, enlaces relacionados y ubicacion y horarios en el pie de pagina';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Información pie de página';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Sede principal';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Contiene la información relacionada con los datos básicos de la entidad (sujeto obligado), en donde se especifican los canales de comunicación para la ciudadanía, usuarios y grupos de interés disponibles. Esta información también puede ser encontrada en el pie de página del sitio web de la entidad';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  /* Field: Content: Dirección */
  $handler->display->display_options['fields']['field_atencion_direccion']['id'] = 'field_atencion_direccion';
  $handler->display->display_options['fields']['field_atencion_direccion']['table'] = 'field_data_field_atencion_direccion';
  $handler->display->display_options['fields']['field_atencion_direccion']['field'] = 'field_atencion_direccion';
  $handler->display->display_options['fields']['field_atencion_direccion']['type'] = 'text_plain';
  /* Field: Content: Teléfonos */
  $handler->display->display_options['fields']['field_atencion_telefono']['id'] = 'field_atencion_telefono';
  $handler->display->display_options['fields']['field_atencion_telefono']['table'] = 'field_data_field_atencion_telefono';
  $handler->display->display_options['fields']['field_atencion_telefono']['field'] = 'field_atencion_telefono';
  $handler->display->display_options['fields']['field_atencion_telefono']['label'] = 'Teléfono';
  $handler->display->display_options['fields']['field_atencion_telefono']['delta_offset'] = '0';
  /* Field: Content: Fax */
  $handler->display->display_options['fields']['field_atencion_fax']['id'] = 'field_atencion_fax';
  $handler->display->display_options['fields']['field_atencion_fax']['table'] = 'field_data_field_atencion_fax';
  $handler->display->display_options['fields']['field_atencion_fax']['field'] = 'field_atencion_fax';
  $handler->display->display_options['fields']['field_atencion_fax']['delta_offset'] = '0';
  /* Field: Content: Linea Gratuita */
  $handler->display->display_options['fields']['field_atencion_linea_gratuita']['id'] = 'field_atencion_linea_gratuita';
  $handler->display->display_options['fields']['field_atencion_linea_gratuita']['table'] = 'field_data_field_atencion_linea_gratuita';
  $handler->display->display_options['fields']['field_atencion_linea_gratuita']['field'] = 'field_atencion_linea_gratuita';
  $handler->display->display_options['fields']['field_atencion_linea_gratuita']['delta_offset'] = '0';
  /* Field: Content: Correo electrónico institucional */
  $handler->display->display_options['fields']['field_atencion_correo']['id'] = 'field_atencion_correo';
  $handler->display->display_options['fields']['field_atencion_correo']['table'] = 'field_data_field_atencion_correo';
  $handler->display->display_options['fields']['field_atencion_correo']['field'] = 'field_atencion_correo';
  $handler->display->display_options['fields']['field_atencion_correo']['click_sort_column'] = 'url';
  /* Field: Content: Correo electrónico notificaciones judiciales */
  $handler->display->display_options['fields']['field_correo_judicial']['id'] = 'field_correo_judicial';
  $handler->display->display_options['fields']['field_correo_judicial']['table'] = 'field_data_field_correo_judicial';
  $handler->display->display_options['fields']['field_correo_judicial']['field'] = 'field_correo_judicial';
  /* Field: Content: Horario de Atención */
  $handler->display->display_options['fields']['field_atencion_horario']['id'] = 'field_atencion_horario';
  $handler->display->display_options['fields']['field_atencion_horario']['table'] = 'field_data_field_atencion_horario';
  $handler->display->display_options['fields']['field_atencion_horario']['field'] = 'field_atencion_horario';
  /* Field: Content: Ciudad */
  $handler->display->display_options['fields']['field_atencion_ciudad']['id'] = 'field_atencion_ciudad';
  $handler->display->display_options['fields']['field_atencion_ciudad']['table'] = 'field_data_field_atencion_ciudad';
  $handler->display->display_options['fields']['field_atencion_ciudad']['field'] = 'field_atencion_ciudad';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'mecanismos_atencion_ciudadano' => 'mecanismos_atencion_ciudadano',
  );
  /* Filter criterion: Content: Sticky */
  $handler->display->display_options['filters']['sticky']['id'] = 'sticky';
  $handler->display->display_options['filters']['sticky']['table'] = 'node';
  $handler->display->display_options['filters']['sticky']['field'] = 'sticky';
  $handler->display->display_options['filters']['sticky']['value'] = '1';

  /* Display: Pie de página */
  $handler = $view->new_display('block', 'Pie de página', 'block');
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['block_description'] = 'Pie Información de la Entidad';
  $translatables['informacion_pie_de_pagina'] = array(
    t('Master'),
    t('Sede principal'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Contiene la información relacionada con los datos básicos de la entidad (sujeto obligado), en donde se especifican los canales de comunicación para la ciudadanía, usuarios y grupos de interés disponibles. Esta información también puede ser encontrada en el pie de página del sitio web de la entidad'),
    t('Dirección'),
    t('Teléfono'),
    t('Fax'),
    t('Linea Gratuita'),
    t('Correo electrónico institucional'),
    t('Correo electrónico notificaciones judiciales'),
    t('Horario de Atención'),
    t('Ciudad'),
    t('Pie de página'),
    t('Pie Información de la Entidad'),
  );
  $export['informacion_pie_de_pagina'] = $view;

  return $export;
}
