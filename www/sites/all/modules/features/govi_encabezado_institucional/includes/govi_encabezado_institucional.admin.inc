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
        '#title' => 'Cambiar de Sector',
        '#options' => array(
			'Seleccionar' => 'Seleccionar',
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
        '#description' => variable_get('header_sector'),
        '#required' => TRUE
    );
  
                   
    $form['info_basica_entidad']['nombre'] = array(
        '#type' => 'textfield',
        '#title' => 'Nombre de la entidad',
        '#default_value' => variable_get('header_entidad'),
        '#required' => FALSE,
		 '#disabled' => TRUE,
		 '#description' => 'Cambiar Nombre de la entidad en la <a href="admin/config/system/site-information">Informacion del sitio<a>'
    );       
    $form['info_basica_entidad']['logo'] = array(
        '#markup' => '<a href="admin/appearance/settings/govi_tema">Modificar el logo de la entidad</a>',
		
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
    variable_set('proxy_server', $form_state['values']['http_server']);
    variable_set('proxy_port', $form_state['values']['http_port']);
    variable_set('proxy_exceptions', $form_state['values']['http_exceptions']);

}
