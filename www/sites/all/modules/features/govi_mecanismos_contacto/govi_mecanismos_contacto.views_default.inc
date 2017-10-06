<?php
/**
 * @file
 * govi_mecanismos_contacto.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function govi_mecanismos_contacto_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'informacion_entidad';
  $view->description = 'Presenta la información de contacto, enlaces relacionados y ubicacion y horarios en el pie de pagina';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Mecanismos de contacto para el sujeto obligado ';
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

  /* Display: Mecanismos de contacto con el sujeto obligado */
  $handler = $view->new_display('page', 'Mecanismos de contacto con el sujeto obligado', 'mecanismos_contacto');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'transparencia/mecanismos-contacto';

  /* Display: Mecanismos para la atencion a la ciudadanía */
  $handler = $view->new_display('page', 'Mecanismos para la atencion a la ciudadanía', 'page_2');
  $handler->display->display_options['display_description'] = 'Este display muestra la información de contacto de la sede principal de la Entidad';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'A continuación se disponen de los canales para la atención a la ciudadanía y recibir peticiones, quejas, reclamos, denuncias y solicitudes de información';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="http://bogota.gov.co/sdqs" target="_blank" title="formulario electrónico de solicitudes, peticiones, quejas, reclamos y denuncias de Bogotá">Link al formulario electrónico de solicitudes, peticiones, quejas, reclamos y denuncias</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Dirección */
  $handler->display->display_options['fields']['field_atencion_direccion']['id'] = 'field_atencion_direccion';
  $handler->display->display_options['fields']['field_atencion_direccion']['table'] = 'field_data_field_atencion_direccion';
  $handler->display->display_options['fields']['field_atencion_direccion']['field'] = 'field_atencion_direccion';
  $handler->display->display_options['fields']['field_atencion_direccion']['label'] = 'Espacios físicos destinados para el contacto con el sujeto obligado - Dirección';
  $handler->display->display_options['fields']['field_atencion_direccion']['element_label_type'] = 'strong';
  /* Field: Content: Teléfonos */
  $handler->display->display_options['fields']['field_atencion_telefono']['id'] = 'field_atencion_telefono';
  $handler->display->display_options['fields']['field_atencion_telefono']['table'] = 'field_data_field_atencion_telefono';
  $handler->display->display_options['fields']['field_atencion_telefono']['field'] = 'field_atencion_telefono';
  $handler->display->display_options['fields']['field_atencion_telefono']['label'] = 'Teléfono';
  $handler->display->display_options['fields']['field_atencion_telefono']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_atencion_telefono']['delta_offset'] = '0';
  /* Field: Content: Fax */
  $handler->display->display_options['fields']['field_atencion_fax']['id'] = 'field_atencion_fax';
  $handler->display->display_options['fields']['field_atencion_fax']['table'] = 'field_data_field_atencion_fax';
  $handler->display->display_options['fields']['field_atencion_fax']['field'] = 'field_atencion_fax';
  $handler->display->display_options['fields']['field_atencion_fax']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_atencion_fax']['delta_offset'] = '0';
  /* Field: Content: Linea Gratuita */
  $handler->display->display_options['fields']['field_atencion_linea_gratuita']['id'] = 'field_atencion_linea_gratuita';
  $handler->display->display_options['fields']['field_atencion_linea_gratuita']['table'] = 'field_data_field_atencion_linea_gratuita';
  $handler->display->display_options['fields']['field_atencion_linea_gratuita']['field'] = 'field_atencion_linea_gratuita';
  $handler->display->display_options['fields']['field_atencion_linea_gratuita']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_atencion_linea_gratuita']['delta_offset'] = '0';
  /* Field: Content: Correo electrónico institucional */
  $handler->display->display_options['fields']['field_atencion_correo']['id'] = 'field_atencion_correo';
  $handler->display->display_options['fields']['field_atencion_correo']['table'] = 'field_data_field_atencion_correo';
  $handler->display->display_options['fields']['field_atencion_correo']['field'] = 'field_atencion_correo';
  $handler->display->display_options['fields']['field_atencion_correo']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_atencion_correo']['click_sort_column'] = 'url';
  /* Field: Content: Horario de Atención */
  $handler->display->display_options['fields']['field_atencion_horario']['id'] = 'field_atencion_horario';
  $handler->display->display_options['fields']['field_atencion_horario']['table'] = 'field_data_field_atencion_horario';
  $handler->display->display_options['fields']['field_atencion_horario']['field'] = 'field_atencion_horario';
  $handler->display->display_options['fields']['field_atencion_horario']['element_label_type'] = 'strong';
  /* Field: Content: Departamento */
  $handler->display->display_options['fields']['field_atencion_departamento']['id'] = 'field_atencion_departamento';
  $handler->display->display_options['fields']['field_atencion_departamento']['table'] = 'field_data_field_atencion_departamento';
  $handler->display->display_options['fields']['field_atencion_departamento']['field'] = 'field_atencion_departamento';
  $handler->display->display_options['fields']['field_atencion_departamento']['element_label_type'] = 'strong';
  /* Field: Content: Ciudad */
  $handler->display->display_options['fields']['field_atencion_ciudad']['id'] = 'field_atencion_ciudad';
  $handler->display->display_options['fields']['field_atencion_ciudad']['table'] = 'field_data_field_atencion_ciudad';
  $handler->display->display_options['fields']['field_atencion_ciudad']['field'] = 'field_atencion_ciudad';
  $handler->display->display_options['fields']['field_atencion_ciudad']['element_label_type'] = 'strong';
  /* Field: Content: Código postal */
  $handler->display->display_options['fields']['field_atencion_codigo_postal']['id'] = 'field_atencion_codigo_postal';
  $handler->display->display_options['fields']['field_atencion_codigo_postal']['table'] = 'field_data_field_atencion_codigo_postal';
  $handler->display->display_options['fields']['field_atencion_codigo_postal']['field'] = 'field_atencion_codigo_postal';
  $handler->display->display_options['fields']['field_atencion_codigo_postal']['element_label_type'] = 'strong';
  /* Field: Content: Enlace a mapa */
  $handler->display->display_options['fields']['field_atencion_enlace_mapa']['id'] = 'field_atencion_enlace_mapa';
  $handler->display->display_options['fields']['field_atencion_enlace_mapa']['table'] = 'field_data_field_atencion_enlace_mapa';
  $handler->display->display_options['fields']['field_atencion_enlace_mapa']['field'] = 'field_atencion_enlace_mapa';
  $handler->display->display_options['fields']['field_atencion_enlace_mapa']['label'] = '';
  $handler->display->display_options['fields']['field_atencion_enlace_mapa']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_atencion_enlace_mapa']['alter']['text'] = 'Ver Mapa';
  $handler->display->display_options['fields']['field_atencion_enlace_mapa']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_atencion_enlace_mapa']['alter']['path'] = '[field_atencion_enlace_mapa-url]&width=800&height=800&iframe=true';
  $handler->display->display_options['fields']['field_atencion_enlace_mapa']['alter']['alt'] = 'Ubicación geográfica de la Entidad en un mapa del servicio del código postal nacional';
  $handler->display->display_options['fields']['field_atencion_enlace_mapa']['alter']['link_class'] = 'colorbox-load pure-button pure-button-primary';
  $handler->display->display_options['fields']['field_atencion_enlace_mapa']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_atencion_enlace_mapa']['click_sort_column'] = 'url';
  $handler->display->display_options['path'] = 'transparencia/mecanismos-contacto/mecanismos-atencion-ciudadania';

  /* Display: Localización fisica, sucursales, regionales */
  $handler = $view->new_display('page', 'Localización fisica, sucursales, regionales', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Nombre';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Dirección */
  $handler->display->display_options['fields']['field_atencion_direccion']['id'] = 'field_atencion_direccion';
  $handler->display->display_options['fields']['field_atencion_direccion']['table'] = 'field_data_field_atencion_direccion';
  $handler->display->display_options['fields']['field_atencion_direccion']['field'] = 'field_atencion_direccion';
  $handler->display->display_options['fields']['field_atencion_direccion']['element_label_colon'] = FALSE;
  /* Field: Content: Ciudad */
  $handler->display->display_options['fields']['field_atencion_ciudad']['id'] = 'field_atencion_ciudad';
  $handler->display->display_options['fields']['field_atencion_ciudad']['table'] = 'field_data_field_atencion_ciudad';
  $handler->display->display_options['fields']['field_atencion_ciudad']['field'] = 'field_atencion_ciudad';
  $handler->display->display_options['fields']['field_atencion_ciudad']['element_label_colon'] = FALSE;
  /* Field: Content: Departamento */
  $handler->display->display_options['fields']['field_atencion_departamento']['id'] = 'field_atencion_departamento';
  $handler->display->display_options['fields']['field_atencion_departamento']['table'] = 'field_data_field_atencion_departamento';
  $handler->display->display_options['fields']['field_atencion_departamento']['field'] = 'field_atencion_departamento';
  $handler->display->display_options['fields']['field_atencion_departamento']['element_label_colon'] = FALSE;
  /* Field: Content: Horario de Atención */
  $handler->display->display_options['fields']['field_atencion_horario']['id'] = 'field_atencion_horario';
  $handler->display->display_options['fields']['field_atencion_horario']['table'] = 'field_data_field_atencion_horario';
  $handler->display->display_options['fields']['field_atencion_horario']['field'] = 'field_atencion_horario';
  $handler->display->display_options['fields']['field_atencion_horario']['label'] = 'Horario de atención';
  $handler->display->display_options['fields']['field_atencion_horario']['element_label_colon'] = FALSE;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['label'] = 'Datos de contacto';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'field_atencion_telefono',
    1 => 'field_atencion_fax',
    2 => 'field_atencion_linea_gratuita',
    3 => 'field_atencion_correo',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  /* Field: Content: Teléfonos */
  $handler->display->display_options['fields']['field_atencion_telefono']['id'] = 'field_atencion_telefono';
  $handler->display->display_options['fields']['field_atencion_telefono']['table'] = 'field_data_field_atencion_telefono';
  $handler->display->display_options['fields']['field_atencion_telefono']['field'] = 'field_atencion_telefono';
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
  $handler->display->display_options['fields']['field_atencion_linea_gratuita']['label'] = 'Linea gratuita';
  $handler->display->display_options['fields']['field_atencion_linea_gratuita']['delta_offset'] = '0';
  /* Field: Content: Correo electrónico institucional */
  $handler->display->display_options['fields']['field_atencion_correo']['id'] = 'field_atencion_correo';
  $handler->display->display_options['fields']['field_atencion_correo']['table'] = 'field_data_field_atencion_correo';
  $handler->display->display_options['fields']['field_atencion_correo']['field'] = 'field_atencion_correo';
  $handler->display->display_options['fields']['field_atencion_correo']['click_sort_column'] = 'url';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'transparencia/mecanismos-contacto/localizacion-fisica-horarios-atencion';

  /* Display: Correo electrónico para notificaciones judiciales */
  $handler = $view->new_display('page', 'Correo electrónico para notificaciones judiciales', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Notificaciones Judiciales';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Direccion de correo electrónico para notificaciones judiciales, el cual se encuentra disponible en el pie de página de la página principal de la entidad, así como en la sección de atención a la ciudadanía como lo establece la ley 1437 de 2011 y la Directiva presidencial 05 de 2012.
';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = TRUE;
  $handler->display->display_options['footer']['area']['content'] = 'Este correo electrónico para notificaciones judiciales se encuentra configurado de tal forma que se envía el acuse de recibido de manera automática como lo establece el anexo 01 de la resolución 3564 de 2015 ';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Correo electrónico notificaciones judiciales */
  $handler->display->display_options['fields']['field_correo_judicial']['id'] = 'field_correo_judicial';
  $handler->display->display_options['fields']['field_correo_judicial']['table'] = 'field_data_field_correo_judicial';
  $handler->display->display_options['fields']['field_correo_judicial']['field'] = 'field_correo_judicial';
  $handler->display->display_options['path'] = 'transparencia/mecanismos-contacto/notificaciones-judiciales';

  /* Display: PSI y protección de datos personales */
  $handler = $view->new_display('page', 'PSI y protección de datos personales', 'page_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Políticas de seguridad de la información del sitio web y protección de datos personales';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Contiene la información relacionada con las condiciones de uso de información referente a protección de datos personales segun lo establecido en la Ley 1581 de 2012';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Titulo';
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Descripción';
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'page' => 'page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'allwords';
  $handler->display->display_options['filters']['title']['value'] = 'seguridad de la información';
  $handler->display->display_options['filters']['title']['group'] = 2;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_1']['id'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['table'] = 'node';
  $handler->display->display_options['filters']['title_1']['field'] = 'title';
  $handler->display->display_options['filters']['title_1']['operator'] = 'allwords';
  $handler->display->display_options['filters']['title_1']['value'] = 'protección de datos personales';
  $handler->display->display_options['filters']['title_1']['group'] = 2;
  $handler->display->display_options['path'] = 'transparencia/mecanismos-contacto/PSI-proteccion-datos-personales';
  $translatables['informacion_entidad'] = array(
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
    t('Mecanismos de contacto con el sujeto obligado'),
    t('Mecanismos para la atencion a la ciudadanía'),
    t('Este display muestra la información de contacto de la sede principal de la Entidad'),
    t('A continuación se disponen de los canales para la atención a la ciudadanía y recibir peticiones, quejas, reclamos, denuncias y solicitudes de información'),
    t('<a href="http://bogota.gov.co/sdqs" target="_blank" title="formulario electrónico de solicitudes, peticiones, quejas, reclamos y denuncias de Bogotá">Link al formulario electrónico de solicitudes, peticiones, quejas, reclamos y denuncias</a>'),
    t('Espacios físicos destinados para el contacto con el sujeto obligado - Dirección'),
    t('Departamento'),
    t('Código postal'),
    t('Ver Mapa'),
    t('Ubicación geográfica de la Entidad en un mapa del servicio del código postal nacional'),
    t('Localización fisica, sucursales, regionales'),
    t('Nombre'),
    t('Horario de atención'),
    t('Datos de contacto'),
    t('Teléfonos'),
    t('Linea gratuita'),
    t('Correo electrónico para notificaciones judiciales'),
    t('Notificaciones Judiciales'),
    t('Direccion de correo electrónico para notificaciones judiciales, el cual se encuentra disponible en el pie de página de la página principal de la entidad, así como en la sección de atención a la ciudadanía como lo establece la ley 1437 de 2011 y la Directiva presidencial 05 de 2012.
'),
    t('Este correo electrónico para notificaciones judiciales se encuentra configurado de tal forma que se envía el acuse de recibido de manera automática como lo establece el anexo 01 de la resolución 3564 de 2015 '),
    t('PSI y protección de datos personales'),
    t('Políticas de seguridad de la información del sitio web y protección de datos personales'),
    t('Contiene la información relacionada con las condiciones de uso de información referente a protección de datos personales segun lo establecido en la Ley 1581 de 2012'),
    t('Titulo'),
    t('Descripción'),
  );
  $export['informacion_entidad'] = $view;

  return $export;
}
