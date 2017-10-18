<?php
/**
 * @file
 * govi_mecanismos_contacto.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function govi_mecanismos_contacto_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-menu-mecanismos-de-contacto_atencin-al-ciudadano:transparencia/atencion-ciudadano/sede-principal.
  $menu_links['menu-menu-mecanismos-de-contacto_atencin-al-ciudadano:transparencia/atencion-ciudadano/sede-principal'] = array(
    'menu_name' => 'menu-menu-mecanismos-de-contacto',
    'link_path' => 'transparencia/atencion-ciudadano/sede-principal',
    'router_path' => 'transparencia',
    'link_title' => 'Atención al ciudadano',
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
      'identifier' => 'menu-menu-mecanismos-de-contacto_atencin-al-ciudadano:transparencia/atencion-ciudadano/sede-principal',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-mecanismos-de-contacto_localizacin-fsica-sucursales-o-regionales:transparencia/atencion-ciudadano/sedes.
  $menu_links['menu-menu-mecanismos-de-contacto_localizacin-fsica-sucursales-o-regionales:transparencia/atencion-ciudadano/sedes'] = array(
    'menu_name' => 'menu-menu-mecanismos-de-contacto',
    'link_path' => 'transparencia/atencion-ciudadano/sedes',
    'router_path' => 'transparencia',
    'link_title' => 'Localización física, sucursales o regionales',
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
      'identifier' => 'menu-menu-mecanismos-de-contacto_localizacin-fsica-sucursales-o-regionales:transparencia/atencion-ciudadano/sedes',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-mecanismos-de-contacto_polticas-de-seguridad-de-la-informacin-y-proteccin-de-datos-pesonales:<front>.
  $menu_links['menu-menu-mecanismos-de-contacto_polticas-de-seguridad-de-la-informacin-y-proteccin-de-datos-pesonales:<front>'] = array(
    'menu_name' => 'menu-menu-mecanismos-de-contacto',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Políticas de seguridad de la información y protección de datos pesonales',
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
      'identifier' => 'menu-menu-mecanismos-de-contacto_polticas-de-seguridad-de-la-informacin-y-proteccin-de-datos-pesonales:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Atención al ciudadano');
  t('Localización física, sucursales o regionales');
  t('Políticas de seguridad de la información y protección de datos pesonales');

  return $menu_links;
}
