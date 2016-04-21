<?php

function custom_widgets_easy_social_widget() {
  return array(
    'facebook_icon' => array(
      'name' => 'Icono Facebook',
      'markup' => 'custom_widgets_widget_facebook_icon_markup',
    ),
    'twitter_icon' => array(
      'name' => 'Icono Twitter',
      'markup' => 'custom_widgets_widget_twitter_icon_markup',
    ),
    'youtube_icon' => array(
      'name' => 'Icono Youtube',
      'markup' => 'custom_widgets_widget_youtube_icon_markup',
    ),
    'instagram_icon' => array(
      'name' => 'Icono Instagram',
      'markup' => 'custom_widgets_widget_instagram_icon_markup',
    ),
    'facebook_counter' => array(
      'name' => 'Botón Contador Facebook',
      'markup' => 'custom_widgets_widget_facebook_counter_markup'
    )
  );
}

function custom_widgets_widget_facebook_icon_markup () {
  $fid = variable_get_value('easy_social_facebook_icon_image');
  $file = (array)file_load($fid);
  $target = variable_get_value('easy_social_facebook_icon_target');
  $profile = variable_get_value('easy_social_facebook_icon_account');
  $href = 'https://facebook.com/'.$profile;

  $html = "";
  $html .= "<a href='".$href."' target='".$target."'><img src='".file_create_url($file['uri'])."'/></a>";
  return $html;
}

function custom_widgets_widget_twitter_icon_markup () {

  $fid = variable_get_value('easy_social_twitter_icon_image');
  $file = (array)file_load($fid);
  $target = variable_get_value('easy_social_twitter_icon_target');
  $profile = variable_get_value('easy_social_twitter_icon_account');
  $href = 'https://twitter.com/'.$profile;

  $html = "";
  $html .= "<a href='".$href."' target='".$target."'><img src='".file_create_url($file['uri'])."'/></a>";
  return $html;
}

function custom_widgets_widget_youtube_icon_markup () {

  $fid = variable_get_value('easy_social_youtube_icon_image');
  $file = (array)file_load($fid);
  $target = variable_get_value('easy_social_youtube_icon_target');
  $profile = variable_get_value('easy_social_youtube_icon_account');
  $href = 'https://youtube.com/user/'.$profile;

  $html = "";
  $html .= "<a href='".$href."' target='".$target."'><img src='".file_create_url($file['uri'])."'/></a>";
  return $html;
}

function custom_widgets_widget_instagram_icon_markup () {

  $fid = variable_get_value('easy_social_instagram_icon_image');
  $file = (array)file_load($fid);
  $target = variable_get_value('easy_social_instagram_icon_target');
  $profile = variable_get_value('easy_social_instagram_icon_account');
  $href = 'https://instagram.com/'.$profile;

  $html = "";
  $html .= "<a href='".$href."' target='".$target."'><img src='".file_create_url($file['uri'])."'/></a>";
  return $html;
}

function custom_widgets_widget_facebook_counter_markup () {

  $fid = variable_get_value('easy_social_facebook_counter_image');
  $file = (array)file_load($fid);

  $html = "";
  $html .= "<a href='#' onclick='like();' title='Me gusta'>";
  $html .= "  <img src='".file_create_url($file['uri'])."'/>";
  $html .= "</a>";
  return $html;
}

function custom_widgets_menu() {
  $items = array();
  $items['admin/config/content/easy_social/widget-extra/facebook_icon'] = array(
    'title' => 'Icono Facebook',
    'description' => 'Configuración adicional para el icono de facebook',
    'page callback' => 'drupal_get_form',
    'page arguments' => array('_easy_social_admin_config_extra_facebook_icon'),
    'access arguments' => array('administer easy social'),
    'type' => MENU_LOCAL_TASK,
  );

  $items['admin/config/content/easy_social/widget-extra/twitter_icon'] = array(
    'title' => 'Icono Twitter',
    'description' => 'Configuración adicional para el icono de twitter',
    'page callback' => 'drupal_get_form',
    'page arguments' => array('_easy_social_admin_config_extra_twitter_icon'),
    'access arguments' => array('administer easy social'),
    'type' => MENU_LOCAL_TASK,
  );

  $items['admin/config/content/easy_social/widget-extra/youtube_icon'] = array(
    'title' => 'Icono Youtube',
    'description' => 'Configuración adicional para el icono de youtube',
    'page callback' => 'drupal_get_form',
    'page arguments' => array('_easy_social_admin_config_extra_youtube_icon'),
    'access arguments' => array('administer easy social'),
    'type' => MENU_LOCAL_TASK,
  );

  $items['admin/config/content/easy_social/widget-extra/instagram_icon'] = array(
    'title' => 'Icono Instagram',
    'description' => 'Configuración adicional para el icono de instagram',
    'page callback' => 'drupal_get_form',
    'page arguments' => array('_easy_social_admin_config_extra_instagram_icon'),
    'access arguments' => array('administer easy social'),
    'type' => MENU_LOCAL_TASK,
  );

  $items['admin/config/content/easy_social/widget-extra/facebook_counter'] = array(
    'title' => 'Contador Facebook',
    'description' => 'Configuración adicional para el contador de Facebook',
    'page callback' => 'drupal_get_form',
    'page arguments' => array('_easy_social_admin_config_extra_facebook_counter'),
    'access arguments' => array('administer easy social'),
    'type' => MENU_LOCAL_TASK,
);

  return $items;
}

function _easy_social_admin_config_extra_facebook_icon() {
  $form = array();

  $form['easy_social_facebook_icon_image'] = array(
     '#type' => 'managed_file',
     '#title' => t("Icono para facebook"),
     '#description' => t("Selecciona el icono que será usado como presentación de la red social<br/><b>Extensiones permitidas:</b> gif, png, jpg, jpeg<br/><b>Tamaño máximo:</b> 30 K"),
     '#default_value' => variable_get_value('easy_social_facebook_icon_image'),
     '#upload_validators' => array(
       'file_validate_extensions' => array('gif png jpg jpeg'),
       'file_validate_size' => array(30*1024),
     ),
     '#theme' => 'custom_widgets_upload',
     '#upload_location' => 'public://custom-widgets',
   );

  $form['easy_social_facebook_icon_account'] = array(
     '#type' => 'textfield',
     '#title' => t("Cuenta Facebook"),
     '#description' => t("Indica el nombre de la cuenta de Facebook, nosotros creamos la url por ti"),
     '#default_value' => variable_get_value('easy_social_facebook_icon_account'),
   );

  $form['easy_social_facebook_icon_target'] = array(
     '#type' => 'select',
     '#title' => t("Destino del enlace"),
     '#description' => t("Como quieres que sea cargado este enlace?"),
     '#options' => array(
       '_self' => '_self',
       '_blank' => '_blank',
       '_parent' => '_parent',
       '_top' => '_top',
     ),
     '#default_value' => variable_get_value('easy_social_facebook_icon_target'),
   );

  $form['#submit'][] = 'widget_icon_image_form_submit';

  return system_settings_form($form);
}

function _easy_social_admin_config_extra_twitter_icon() {
  $form = array();

  $form['easy_social_twitter_icon_image'] = array(
     '#type' => 'managed_file',
     '#title' => t("Icono para twitter"),
     '#description' => t("Selecciona el icono que será usado como presentación de la red social<br/><b>Extensiones permitidas:</b> gif, png, jpg, jpeg<br/><b>Tamaño máximo:</b> 30 K"),
     '#default_value' => variable_get_value('easy_social_twitter_icon_image'),
     '#upload_validators' => array(
       'file_validate_extensions' => array('gif png jpg jpeg'),
       'file_validate_size' => array(30*1024),
     ),
     '#theme' => 'custom_widgets_upload',
     '#upload_location' => 'public://custom-widgets',
   );

  $form['easy_social_twitter_icon_account'] = array(
     '#type' => 'textfield',
     '#title' => t("Cuenta Twitter"),
     '#description' => t("Indica el nombre de la cuenta de Facebook, nosotros creamos la url por ti"),
     '#default_value' => variable_get_value('easy_social_twitter_icon_account'),
   );

  $form['easy_social_twitter_icon_target'] = array(
     '#type' => 'select',
     '#title' => t("Destino del enlace"),
     '#description' => t("Como quieres que sea cargado este enlace?"),
     '#options' => array(
       '_self' => '_self',
       '_blank' => '_blank',
       '_parent' => '_parent',
       '_top' => '_top',
     ),
     '#default_value' => variable_get_value('easy_social_twitter_icon_target'),
   );

  $form['#submit'][] = 'widget_icon_image_form_submit';

  return system_settings_form($form);
}

function _easy_social_admin_config_extra_youtube_icon() {
  $form = array();

  $form['easy_social_youtube_icon_image'] = array(
     '#type' => 'managed_file',
     '#title' => t("Icono para youtube"),
     '#description' => t("Selecciona el icono que será usado como presentación de la red social<br/><b>Extensiones permitidas:</b> gif, png, jpg, jpeg<br/><b>Tamaño máximo:</b> 30 K"),
     '#default_value' => variable_get_value('easy_social_youtube_icon_image'),
     '#upload_validators' => array(
       'file_validate_extensions' => array('gif png jpg jpeg'),
       'file_validate_size' => array(30*1024),
     ),
     '#theme' => 'custom_widgets_upload',
     '#upload_location' => 'public://custom-widgets',
   );

  $form['easy_social_youtube_icon_account'] = array(
     '#type' => 'textfield',
     '#title' => t("Cuenta Youtube"),
     '#description' => t("Indica el nombre de la cuenta de youtube, nosotros creamos la url por ti"),
     '#default_value' => variable_get_value('easy_social_youtube_icon_account'),
   );

  $form['easy_social_youtube_icon_target'] = array(
     '#type' => 'select',
     '#title' => t("Destino del enlace"),
     '#description' => t("Como quieres que sea cargado este enlace?"),
     '#options' => array(
       '_self' => '_self',
       '_blank' => '_blank',
       '_parent' => '_parent',
       '_top' => '_top',
     ),
     '#default_value' => variable_get_value('easy_social_youtube_icon_target'),
   );

  $form['#submit'][] = 'widget_icon_image_form_submit';

  return system_settings_form($form);
}

function _easy_social_admin_config_extra_instagram_icon() {
  $form = array();

  $form['easy_social_instagram_icon_image'] = array(
     '#type' => 'managed_file',
     '#title' => t("Icono para instagram"),
     '#description' => t("Selecciona el icono que será usado como presentación de la red social<br/><b>Extensiones permitidas:</b> gif, png, jpg, jpeg<br/><b>Tamaño máximo:</b> 30 KB"),
     '#default_value' => variable_get_value('easy_social_instagram_icon_image'),
     '#upload_validators' => array(
       'file_validate_extensions' => array('gif png jpg jpeg'),
       'file_validate_size' => array(30*1024),
     ),
     '#theme' => 'custom_widgets_upload',
     '#upload_location' => 'public://custom-widgets',
   );

  $form['easy_social_instagram_icon_account'] = array(
     '#type' => 'textfield',
     '#title' => t("Cuenta instagram"),
     '#description' => t("Indica el nombre de la cuenta de instagram, nosotros creamos la url por ti"),
     '#default_value' => variable_get_value('easy_social_instagram_icon_account'),
   );

  $form['easy_social_instagram_icon_target'] = array(
     '#type' => 'select',
     '#title' => t("Destino del enlace"),
     '#description' => t("Como quieres que sea cargado este enlace?"),
     '#options' => array(
       '_self' => '_self',
       '_blank' => '_blank',
       '_parent' => '_parent',
       '_top' => '_top',
     ),
     '#default_value' => variable_get_value('easy_social_instagram_icon_target'),
   );

  $form['#submit'][] = 'widget_icon_image_form_submit';

  return system_settings_form($form);
}

function _easy_social_admin_config_extra_facebook_counter() {
  $form = array();

  $form['easy_social_facebook_counter_image'] = array(
    '#type' => 'managed_file',
    '#title' => t("Icono para facebook like"),
    '#description' => t("Selecciona el icono que será usado como boton like  de la red social<br/><b>Extensiones permitidas:</b> gif, png, jpg, jpeg<br/><b>Tamaño máximo:</b> 30 KB"),
    '#default_value' => variable_get_value('easy_social_facebook_counter_image'),
    '#upload_validators' => array(
      'file_validate_extensions' => array('gif png jpg jpeg'),
      'file_validate_size' => array(30*1024),
    ),
    '#theme' => 'custom_widgets_upload',
    '#upload_location' => 'public://custom-widgets',
  );

  $form['#submit'][] = 'widget_icon_image_form_submit';

  return system_settings_form($form);
}

function widget_icon_image_form_submit($form, $form_state) {
  $widget = $form_state['build_info']['form_id'];

  switch ($widget) {
    case '_easy_social_admin_config_extra_facebook_icon':
      $file = $form['easy_social_facebook_icon_image']['#file'];
      $file->status = FILE_STATUS_PERMANENT;
    break;

    case '_easy_social_admin_config_extra_twitter_icon':
      $file = $form['easy_social_twitter_icon_image']['#file'];
      $file->status = FILE_STATUS_PERMANENT;
    break;

    case '_easy_social_admin_config_extra_youtube_icon':
      $file = $form['easy_social_youtube_icon_image']['#file'];
      $file->status = FILE_STATUS_PERMANENT;
    break;

    case '_easy_social_admin_config_extra_instagram_icon':
      $file = $form['easy_social_instagram_icon_image']['#file'];
      $file->status = FILE_STATUS_PERMANENT;
    break;

    case '_easy_social_admin_config_extra_facebook_counter':
      $file = $form['easy_social_facebook_counter_image']['#file'];
      $file->status = FILE_STATUS_PERMANENT;
    break;
  }

  file_save($file);
}

function custom_widgets_theme() {

    $themes = array();

    $fb_api = variable_get_value('easy_social_global_fb_enabled');

    if ($fb_api) {
        $themes['facebook_api'] = array(
            'path' => CUSTOM_WIDGETS_MODULE_PATH,
            'template' => '/templates/custom_widgets-facebook-api',
            'variables' => theme_facebook_api_vars(),
        );
    }
    
    $themes['custom_widgets_upload'] = array(
        'render element' => 'element'
    );
                             
    
    return $themes;
}

/**
 * Variables de configuración para la inicialización
 * del SDK JavaScript de Facebook que serán enviadas
 * a la vista
 *
 * @ver custom_widgets_theme()
 * @ver templates/custom_widgets-facebook-api.tmpl.php
 */
function theme_facebook_api_vars (){
    
    $vars = array();

    $vars['fb_api_appid'] = variable_get_value('easy_social_global_fb_appid');
    $vars['fb_api_status'] = variable_get_value('easy_social_global_fb_status');
    $vars['fb_api_cookie'] = variable_get_value('easy_social_global_fb_cookie');
    $vars['fb_api_xfbml'] = variable_get_value('easy_social_global_fb_xfbml');
    $vars['fb_api_version'] = variable_get_value('easy_social_global_fb_version');

    return $vars;
}

function theme_custom_widgets_upload($variables) {
  $element = $variables['element'];

  if (isset($element['#file']->uri)) {
       $output = '<div id="edit-logo-ajax-wrapper"><div class="form-item form-type-managed-file form-item-logo"><span class="file" style="float:left; margin-right: 10px;">';
       $output .= '<img src="' . file_create_url($element['#file']->uri) . '" />';
       $output .= '</span><input type="submit" id="edit-' . $element['#name'] . '-remove-button" name="' . $element['#name'] . '_remove_button" value="Remove" class="form-submit ajax-processed">';
       $output .= '<input type="hidden" name="' . $element['#name'] . '[fid]" value="' . $element['#file']->fid . '">';

       return $output;
  }
}
?>