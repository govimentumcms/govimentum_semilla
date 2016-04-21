<?php
/**
 * @file
 * govi_informaci_n_institucional.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function govi_informaci_n_institucional_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-menu-organizacion_directorio-de-funcionarios:transparencia/organizacion/directorio-funcionarios.
  $menu_links['menu-menu-organizacion_directorio-de-funcionarios:transparencia/organizacion/directorio-funcionarios'] = array(
    'menu_name' => 'menu-menu-organizacion',
    'link_path' => 'transparencia/organizacion/directorio-funcionarios',
    'router_path' => 'transparencia/organizacion/directorio-funcionarios',
    'link_title' => 'Directorio de Funcionarios',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-organizacion_directorio-de-funcionarios:transparencia/organizacion/directorio-funcionarios',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-organizacion_misin:transparencia/organizacion.
  $menu_links['menu-menu-organizacion_misin:transparencia/organizacion'] = array(
    'menu_name' => 'menu-menu-organizacion',
    'link_path' => 'transparencia/organizacion',
    'router_path' => 'transparencia/organizacion',
    'link_title' => 'Misión',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-organizacion_misin:transparencia/organizacion',
      'alter' => TRUE,
      'menu_token_link_uuid' => 'menutoken/5670a22b9c1d4',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-organizacion_organigrama:<front>.
  $menu_links['menu-menu-organizacion_organigrama:<front>'] = array(
    'menu_name' => 'menu-menu-organizacion',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Organigrama',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-organizacion_organigrama:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-organizacion_visin:transparencia/organizacion.
  $menu_links['menu-menu-organizacion_visin:transparencia/organizacion'] = array(
    'menu_name' => 'menu-menu-organizacion',
    'link_path' => 'transparencia/organizacion',
    'router_path' => 'transparencia/organizacion',
    'link_title' => 'Visión',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-organizacion_visin:transparencia/organizacion',
      'alter' => TRUE,
      'menu_token_link_uuid' => 'menutoken/5670a2132fc92',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Directorio de Funcionarios');
  t('Misión');
  t('Organigrama');
  t('Visión');

  return $menu_links;
}
