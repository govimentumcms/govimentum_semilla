<?php
/**
 * @file
 * govi_control.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function govi_control_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_control_clasificacion|node|control|form';
  $field_group->group_name = 'group_control_clasificacion';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'control';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Clasificación',
    'weight' => '1',
    'children' => array(
      0 => 'field_contro_fecha_de_expedici_n',
      1 => 'field_control_periodicidad',
      2 => 'field_control_clasificacion',
      3 => 'field_control_tipo_infor_gestion',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Clasificación',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-control-clasificacion field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_control_clasificacion|node|control|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_control_informacion_basica|node|control|form';
  $field_group->group_name = 'group_control_informacion_basica';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'control';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información Básica',
    'weight' => '0',
    'children' => array(
      0 => 'field_control_descripcion',
      1 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Información Básica',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-control-informacion-basica field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_control_informacion_basica|node|control|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_control_recurso|node|control|form';
  $field_group->group_name = 'group_control_recurso';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'control';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Recurso',
    'weight' => '2',
    'children' => array(
      0 => 'field_control_tipo_de_recurso',
      1 => 'field_control_enlace_externo',
      2 => 'field_control_archivo_adjunto',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Recurso',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-control-recurso field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_control_recurso|node|control|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Clasificación');
  t('Información Básica');
  t('Recurso');

  return $field_groups;
}
