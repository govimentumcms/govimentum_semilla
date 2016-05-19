<?php 
/**
 * @file
 * Configuración Header Institucional
 */

/**
 * Form callback.
 * Formulario de configuraciones principales
 *
 * @see feature_institutional_header_menu()
 */

function govi_encabezado_institucional_admin_config_main() {
    $form = array();
    
    $form['intro'] = array(
        '#markup' => '<h3>Información del sitio web Institucional</h3> <p>Por favor complete los siguientes campos:',
    );
                      
    $form['info_basica_entidad'] = array(
        '#type' => 'fieldset',
        '#title' => 'Información básica de la Entidad',
        '#collapsible' => TRUE,
        '#collapsed' => FALSE,
    );
                      
    $form['info_basica_entidad']['sector'] = array(
        '#type' => 'select',
        '#title' => 'Seleccione el sector',
        '#options' => array(
            'hacienda' => 'Secretaría de Hacienda',
            'mujer' => 'Secretaría Distrital de la Mujer',
            'integracion_social' => 'Secretaría de Integración Social',
            'cultura' => 'Secretaría de Cultura',
            'gobierno' => 'Secretaría de Gobierno',
            'salud' => 'Secretaría de Salud',
            'general' => 'Secretaría General',
            'educacion' => 'Secretaría de Educación',
            'planeacion' => 'Secretaría de Planeación',
            'desarrollo_economico' => 'Secretaría de Desarrollo Económico',
            'habitat' => 'Secretaría de Habitat',
            'bomberos' => 'Cuerpo Oficial de Bomberos',
            'espacio_publico' => 'Departamento administrativo de la defensoria del espacio público'
        ),
        '#default_value' => variable_get('header_sector'),
        '#description' => 'Seleccione el sector al que pertenece su entidad',
        '#required' => TRUE
    );
                      
    $form['info_basica_entidad']['nombre'] = array(
        '#type' => 'textfield',
        '#title' => 'Nombre de la entidad',
        '#default_value' => variable_get('header_entidad'),
        '#required' => FALSE
    );
                      
    $form['info_basica_entidad']['logo'] = array(
        '#type' => 'managed_file',
        '#title' => 'Logo entidad',
        '#description' => 'La imagen subida será mostrada en el encabezado del sitio junto al logo de la Bogotá Humana <br/> <b>Tipos de archivos permitidos:</b> gif, png, jpg, jpeg <br/> <b>Tamaño máximo:</b> 50Kb',
        '#upload_location' => 'public://header-institucional/',
        '#progress_indicator' => 'bar',
        '#upload_validators' => array(
            'file_validate_extensions' => array('gif png jpg jpeg'),
            'file_validate_size' => array(150*1024),
            'file_validate_image_resolution' => array('110x60'),
        ),
        '#default_value' => variable_get('logo_entidad'),
        '#required' => FALSE
    );
                      
    $form['info_redes_entidad'] = array(
        '#type' => 'fieldset',
        '#title' => 'Información de redes sociales',
        '#collapsible' => TRUE
    );
                      
    $form['info_redes_entidad']['redes_sociales'] = array(
        '#markup' => '<p>Ingrese a <a href="/admin/config/content/easy_social" title="Configuración de redes sociales">este enlace</a> para realizar la configuración
                              global de las redes sociales</p>',
    );
                      
    // Crea nuevo campo para configuración del proxy
    $form['proxy_configuration'] = array(
        '#type' => 'fieldset',
        '#title' => 'Configuración del Proxy',
        '#collapsible' => TRUE,
        '#collapsed' => TRUE,
        '#prefix' => '<div class="grupo container-inline">',
        '#suffix' => '</div>',
    );
                      
    // Proxy http
    $form['proxy_configuration']['http_server'] = array(
        '#type' => 'textfield',
        '#title' => 'Servidor http',
        '#default_value' => variable_get('proxy_server'),
                      
    );
    $form['proxy_configuration']['http_port'] = array(
        '#type' => 'textfield',
        '#title' => 'Puerto',
        '#default_value' => variable_get('proxy_port'),
    );
                      
    $form['proxy_configuration']['http_exceptions'] = array(
        '#type' => 'textfield',
        '#title' => 'Excepciones',
        '#description' => 'Este debe contener una lista separada por comas',
        '#default_value' => variable_get('proxy_exceptions'),
                      
    );
                      
    //return system_settings_form($form);
    $form['submit'] = array(
        '#type' => 'submit',
        '#value' => t('Submit')
    );
                      
    return $form;
}

function govi_encabezado_institucional_admin_config_main_submit($form, &$form_state) {
    variable_set('header_sector', $form_state['complete form']['info_basica_entidad']['sector']['#options'][$form_state['values']['sector']]);
    variable_set('header_entidad', $form_state['values']['nombre']);
    variable_set('logo_entidad', $form_state['values']['logo']);
    variable_set('proxy_server', $form_state['values']['http_server']);
    variable_set('proxy_port', $form_state['values']['http_port']);
    variable_set('proxy_exceptions', $form_state['values']['http_exceptions']);
                      
    $image = file_load($form_state['values']['logo']);
    $image->status = FILE_STATUS_PERMANENT;
    file_save($image);
}
