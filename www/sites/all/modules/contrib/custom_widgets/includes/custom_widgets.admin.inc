<?php
/**
 * @file
 * Configuración administrativa.
 * de Custom Widgets.
 *
 */

/**
 * Callback de Formulario.
 *
 * @ver easy_social_menu_alter()
 */

function custom_widgets_easy_social_admin_config_api () {
  $form = array();

  $form['fb_api_settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('Configuración de la API OpenGraph de Facebook'),
    '#description' => t('Para obtener el AppID debe registrar la aplicación en la <a href="https://developers.facebook.com/docs/opengraph/getting-started" target="_blank">plataforma de desarrolladores de facebook</a>'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );

  $form['fb_api_settings']['easy_social_global_fb_enabled'] = array(
    '#type' => 'radios',
    '#title' => t('Usar Facebook SDK'),
    '#options' => array(
      TRUE => t('Habilitar'),
      FALSE => t('Desabilitar')
    ),
    '#default_value' => variable_get_value('easy_social_global_fb_enabled'),
  );

  $form['fb_api_settings']['easy_social_global_fb_appid'] = array(
    '#type' => 'textfield',
    '#title' => 'Facebook Application ID',
    '#description' => 'Ingresar el ID de la aplicación proveído por la plataforma de desarrolladores de facebook',
    '#default_value' => variable_get_value('easy_social_global_fb_appid'),
  );

  $form['fb_api_settings']['easy_social_global_fb_status'] = array(
    '#type' => 'radios',
    '#title' => t('Status'),
    '#description' => t('Verificar el estado de login de facebook'),
    '#options' => array(
        'true' => t('Habilitar'),
        'false' => t('Deshabilitar')
    ),
    '#default_value' => variable_get_value('easy_social_global_fb_status'),
  );

  $form['fb_api_settings']['easy_social_global_fb_cookie'] = array(
    '#type' => 'radios',
    '#title' => t('Cookie'),
    '#description' => t('Habilitar cookies para permitir al servidor acceder a la session'),
    '#options' => array(
        'true' => t('Habilitar'),
        'false' => t('Deshabilitar')
    ),
    '#default_value' => variable_get_value('easy_social_global_fb_cookie'),
  );

  $form['fb_api_settings']['easy_social_global_fb_xfbml'] = array(
    '#type' => 'radios',
    '#title' => t('xfbml'),
    '#description' => t('Parsear la página como xfbml o html5'),
    '#options' => array(
        'true' => t('Habilitar'),
        'false' => t('Deshabilitar')
    ),
    '#default_value' => variable_get_value('easy_social_global_fb_xfbml'),
  );

  $form['fb_api_settings']['easy_social_global_fb_version'] = array(
    '#type' => 'select',
    '#title' => t('Versión de API'),
    '#description' => t('Seleccionar la version de API a usar'),
    '#options' => array(
        'v2.0' => t('v2.0'),
        'v2.1' => t('v2.1'),
        'v2.2' => t('v2.2'),        
        'v2.3' => t('v2.3'),
    ),
    '#default_value' => variable_get_value('easy_social_global_fb_version'),
  );
  
  return system_settings_form($form);
}

?>