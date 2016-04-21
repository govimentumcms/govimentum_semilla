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
  $view->name = 'enlaces_institucionales_pie_1';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Enlaces institucionales pie de pagina 1';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'ALCALDÍA MAYOR DE BOGOTÁ';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Enlace */
  $handler->display->display_options['fields']['field_pie_enlace']['id'] = 'field_pie_enlace';
  $handler->display->display_options['fields']['field_pie_enlace']['table'] = 'field_data_field_pie_enlace';
  $handler->display->display_options['fields']['field_pie_enlace']['field'] = 'field_pie_enlace';
  $handler->display->display_options['fields']['field_pie_enlace']['label'] = '';
  $handler->display->display_options['fields']['field_pie_enlace']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pie_enlace']['click_sort_column'] = 'url';
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
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    13 => '13',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'pie_de_pagina_institucional';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'ALCALDÍA MAYOR DE BOGOTÁ';
  $translatables['enlaces_institucionales_pie_1'] = array(
    t('Master'),
    t('ALCALDÍA MAYOR DE BOGOTÁ'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Block'),
  );
  $export['enlaces_institucionales_pie_1'] = $view;

  $view = new view();
  $view->name = 'enlaces_institucionales_pie_de_pagina_2';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Enlaces institucionales pie de pagina 2';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'ENTIDADES DE CONTROL ';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Enlace */
  $handler->display->display_options['fields']['field_pie_enlace']['id'] = 'field_pie_enlace';
  $handler->display->display_options['fields']['field_pie_enlace']['table'] = 'field_data_field_pie_enlace';
  $handler->display->display_options['fields']['field_pie_enlace']['field'] = 'field_pie_enlace';
  $handler->display->display_options['fields']['field_pie_enlace']['label'] = '';
  $handler->display->display_options['fields']['field_pie_enlace']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pie_enlace']['empty'] = 'Proximamente';
  $handler->display->display_options['fields']['field_pie_enlace']['click_sort_column'] = 'url';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    14 => '14',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'pie_de_pagina_institucional';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'ENTIDADES DE CONTROL';
  $translatables['enlaces_institucionales_pie_de_pagina_2'] = array(
    t('Master'),
    t('ENTIDADES DE CONTROL '),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Proximamente'),
    t('Block'),
    t('ENTIDADES DE CONTROL'),
  );
  $export['enlaces_institucionales_pie_de_pagina_2'] = $view;

  $view = new view();
  $view->name = 'enlaces_institucionales_pie_de_pagina_3';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Enlaces institucionales pie de pagina 3';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Enlaces obligatorios';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Enlace */
  $handler->display->display_options['fields']['field_pie_enlace']['id'] = 'field_pie_enlace';
  $handler->display->display_options['fields']['field_pie_enlace']['table'] = 'field_data_field_pie_enlace';
  $handler->display->display_options['fields']['field_pie_enlace']['field'] = 'field_pie_enlace';
  $handler->display->display_options['fields']['field_pie_enlace']['label'] = '';
  $handler->display->display_options['fields']['field_pie_enlace']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pie_enlace']['click_sort_column'] = 'url';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    15 => '15',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'pie_de_pagina_institucional';
  /* Filter criterion: Content: Enlace (field_pie_enlace:title) */
  $handler->display->display_options['filters']['field_pie_enlace_title']['id'] = 'field_pie_enlace_title';
  $handler->display->display_options['filters']['field_pie_enlace_title']['table'] = 'field_data_field_pie_enlace';
  $handler->display->display_options['filters']['field_pie_enlace_title']['field'] = 'field_pie_enlace_title';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'VÍNCULOS DE INTERÉS';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    15 => '15',
  );
  $handler->display->display_options['filters']['tid']['group'] = 1;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'pie_de_pagina_institucional';
  /* Filter criterion: Content: Enlace (field_pie_enlace:title) */
  $handler->display->display_options['filters']['field_pie_enlace_title']['id'] = 'field_pie_enlace_title';
  $handler->display->display_options['filters']['field_pie_enlace_title']['table'] = 'field_data_field_pie_enlace';
  $handler->display->display_options['filters']['field_pie_enlace_title']['field'] = 'field_pie_enlace_title';
  $handler->display->display_options['filters']['field_pie_enlace_title']['operator'] = 'not';
  $handler->display->display_options['filters']['field_pie_enlace_title']['value'] = 'Términos';
  /* Filter criterion: Content: Enlace (field_pie_enlace:title) */
  $handler->display->display_options['filters']['field_pie_enlace_title_1']['id'] = 'field_pie_enlace_title_1';
  $handler->display->display_options['filters']['field_pie_enlace_title_1']['table'] = 'field_data_field_pie_enlace';
  $handler->display->display_options['filters']['field_pie_enlace_title_1']['field'] = 'field_pie_enlace_title';
  $handler->display->display_options['filters']['field_pie_enlace_title_1']['operator'] = 'not';
  $handler->display->display_options['filters']['field_pie_enlace_title_1']['value'] = 'Políticas';
  $handler->display->display_options['block_description'] = 'VÍNCULOS DE INTERÉS';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    15 => '15',
  );
  $handler->display->display_options['filters']['tid']['group'] = 1;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'pie_de_pagina_institucional';
  /* Filter criterion: Content: Enlace (field_pie_enlace:title) */
  $handler->display->display_options['filters']['field_pie_enlace_title']['id'] = 'field_pie_enlace_title';
  $handler->display->display_options['filters']['field_pie_enlace_title']['table'] = 'field_data_field_pie_enlace';
  $handler->display->display_options['filters']['field_pie_enlace_title']['field'] = 'field_pie_enlace_title';
  $handler->display->display_options['filters']['field_pie_enlace_title']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_pie_enlace_title']['value'] = 'Términos';
  $handler->display->display_options['filters']['field_pie_enlace_title']['group'] = 1;
  /* Filter criterion: Content: Enlace (field_pie_enlace:title) */
  $handler->display->display_options['filters']['field_pie_enlace_title_1']['id'] = 'field_pie_enlace_title_1';
  $handler->display->display_options['filters']['field_pie_enlace_title_1']['table'] = 'field_data_field_pie_enlace';
  $handler->display->display_options['filters']['field_pie_enlace_title_1']['field'] = 'field_pie_enlace_title';
  $handler->display->display_options['filters']['field_pie_enlace_title_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_pie_enlace_title_1']['value'] = 'Políticas';
  $handler->display->display_options['filters']['field_pie_enlace_title_1']['group'] = 1;
  $translatables['enlaces_institucionales_pie_de_pagina_3'] = array(
    t('Master'),
    t('Enlaces obligatorios'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Block'),
    t('VÍNCULOS DE INTERÉS'),
  );
  $export['enlaces_institucionales_pie_de_pagina_3'] = $view;

  $view = new view();
  $view->name = 'enlaces_institucionales_pie_de_pagina_4';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Enlaces institucionales pie de pagina 4';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'GOBIERNO EN LÍNEA ';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Enlace */
  $handler->display->display_options['fields']['field_pie_enlace']['id'] = 'field_pie_enlace';
  $handler->display->display_options['fields']['field_pie_enlace']['table'] = 'field_data_field_pie_enlace';
  $handler->display->display_options['fields']['field_pie_enlace']['field'] = 'field_pie_enlace';
  $handler->display->display_options['fields']['field_pie_enlace']['label'] = '';
  $handler->display->display_options['fields']['field_pie_enlace']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pie_enlace']['click_sort_column'] = 'url';
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
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    16 => '16',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'pie_de_pagina_institucional';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'GOBIERNO EN LÍNEA';
  $translatables['enlaces_institucionales_pie_de_pagina_4'] = array(
    t('Master'),
    t('GOBIERNO EN LÍNEA '),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Block'),
    t('GOBIERNO EN LÍNEA'),
  );
  $export['enlaces_institucionales_pie_de_pagina_4'] = $view;

  $view = new view();
  $view->name = 'informacion_entidad';
  $view->description = 'Presenta la información de contacto, enlaces relacionados y ubicacion y horarios en el pie de pagina';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Información Entidad';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Información';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Dirección */
  $handler->display->display_options['fields']['field_entidad_direccion']['id'] = 'field_entidad_direccion';
  $handler->display->display_options['fields']['field_entidad_direccion']['table'] = 'field_data_field_entidad_direccion';
  $handler->display->display_options['fields']['field_entidad_direccion']['field'] = 'field_entidad_direccion';
  $handler->display->display_options['fields']['field_entidad_direccion']['label'] = '';
  $handler->display->display_options['fields']['field_entidad_direccion']['element_label_colon'] = FALSE;
  /* Field: Content: Teléfono */
  $handler->display->display_options['fields']['field_entidad_telefono']['id'] = 'field_entidad_telefono';
  $handler->display->display_options['fields']['field_entidad_telefono']['table'] = 'field_data_field_entidad_telefono';
  $handler->display->display_options['fields']['field_entidad_telefono']['field'] = 'field_entidad_telefono';
  /* Field: Content: Fax */
  $handler->display->display_options['fields']['field_entidad_fax']['id'] = 'field_entidad_fax';
  $handler->display->display_options['fields']['field_entidad_fax']['table'] = 'field_data_field_entidad_fax';
  $handler->display->display_options['fields']['field_entidad_fax']['field'] = 'field_entidad_fax';
  /* Field: Content: Linea Gratuita */
  $handler->display->display_options['fields']['field_entidad_linea_gratuita']['id'] = 'field_entidad_linea_gratuita';
  $handler->display->display_options['fields']['field_entidad_linea_gratuita']['table'] = 'field_data_field_entidad_linea_gratuita';
  $handler->display->display_options['fields']['field_entidad_linea_gratuita']['field'] = 'field_entidad_linea_gratuita';
  /* Field: Content: Horario de Atención */
  $handler->display->display_options['fields']['field_entidad_horario']['id'] = 'field_entidad_horario';
  $handler->display->display_options['fields']['field_entidad_horario']['table'] = 'field_data_field_entidad_horario';
  $handler->display->display_options['fields']['field_entidad_horario']['field'] = 'field_entidad_horario';
  /* Field: Content: Correo */
  $handler->display->display_options['fields']['field_entidad_correo']['id'] = 'field_entidad_correo';
  $handler->display->display_options['fields']['field_entidad_correo']['table'] = 'field_data_field_entidad_correo';
  $handler->display->display_options['fields']['field_entidad_correo']['field'] = 'field_entidad_correo';
  $handler->display->display_options['fields']['field_entidad_correo']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_entidad_correo']['type'] = 'link_url';
  /* Field: Content: Ciudad */
  $handler->display->display_options['fields']['field_entidad_ciudad']['id'] = 'field_entidad_ciudad';
  $handler->display->display_options['fields']['field_entidad_ciudad']['table'] = 'field_data_field_entidad_ciudad';
  $handler->display->display_options['fields']['field_entidad_ciudad']['field'] = 'field_entidad_ciudad';
  $handler->display->display_options['fields']['field_entidad_ciudad']['label'] = '';
  $handler->display->display_options['fields']['field_entidad_ciudad']['element_label_colon'] = FALSE;
  /* Field: Content: Apps */
  $handler->display->display_options['fields']['field_entidad_apps']['id'] = 'field_entidad_apps';
  $handler->display->display_options['fields']['field_entidad_apps']['table'] = 'field_data_field_entidad_apps';
  $handler->display->display_options['fields']['field_entidad_apps']['field'] = 'field_entidad_apps';
  $handler->display->display_options['fields']['field_entidad_apps']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_entidad_apps']['delta_offset'] = '0';
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
    'pie_informacion_entidad' => 'pie_informacion_entidad',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'Pie Información de la Entidad';
  $translatables['informacion_entidad'] = array(
    t('Master'),
    t('Información'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Teléfono'),
    t('Fax'),
    t('Linea Gratuita'),
    t('Horario de Atención'),
    t('Correo'),
    t('Apps'),
    t('Block'),
    t('Pie Información de la Entidad'),
  );
  $export['informacion_entidad'] = $view;

  $view = new view();
  $view->name = 'logo_escudo_colombia_pie';
  $view->description = 'Presenta el logo de la República de Colombia gestionado desde el tipo de contenido imagen simple';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Logo Escudo Colombia Pie';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Logo República de Colombia Default';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Imagen */
  $handler->display->display_options['fields']['field_imagen']['id'] = 'field_imagen';
  $handler->display->display_options['fields']['field_imagen']['table'] = 'field_data_field_imagen';
  $handler->display->display_options['fields']['field_imagen']['field'] = 'field_imagen';
  $handler->display->display_options['fields']['field_imagen']['label'] = '';
  $handler->display->display_options['fields']['field_imagen']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imagen']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_imagen']['settings'] = array(
    'image_style' => 'logo_header_escudo',
    'image_link' => '',
  );
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
    'imagen_simple' => 'imagen_simple',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['value'] = 'Logo República de Colombia';
  $handler->display->display_options['filters']['title']['group'] = 1;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['logo_escudo_colombia_pie'] = array(
    t('Master'),
    t('Logo República de Colombia Default'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Block'),
  );
  $export['logo_escudo_colombia_pie'] = $view;

  return $export;
}
