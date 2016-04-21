<?php 

// Carga el SDK de facebook asíncronamente
drupal_add_js('(function(d, s, id){
     var js, fjs = d.getElementsByTagName(s)[0];
     if (d.getElementById(id)) {return;}
     js = d.createElement(s); js.id = id;
     js.src = "//connect.facebook.net/en_US/sdk.js";
     fjs.parentNode.insertBefore(js, fjs);
   }(document, "script", "facebook-jssdk"));', 'inline');

drupal_add_js('window.fbAsyncInit = function() {
     FB.init({
     appId      : '.$fb_api_appid.',
     status     : '.$fb_api_status.',
     oauth      : true,
     cookie     : '.$fb_api_cookie.',
     xfbml      : '.$fb_api_xfbml.',
     version    : "'.$fb_api_version.'",
    });
  };', 'inline');

drupal_add_js('

var canPublish = false;

function ogAction() {

  self = this;

  var _init = function () {

    // Verifica que el usuario esté conectado y autorizado para publicar en FB
    if (canPublish) return;
    FB.getLoginStatus(function(res) {
      checkUserStatus(res);
    }, true);
  };

  function checkUserStatus (res) {

     // Verifica los posibles estados del usuario en FB y define si puede, o no,
     // realizar la acción
     status = res.status;
     canPublish = ((status === "unknown") || (status === "not_authorized")) ? logInFlow() : status === "connected";
  }

  function logInFlow () {

    console.log("Logueando usuario");
    FB.login();
  }

  self.postLike = function () {
     FB.ui({
     method: "share_open_graph",
     action_type: "og.likes",
     action_properties: JSON.stringify({
      object:"http://tic.bogota.gov.co/index.php/item/206-participa-de-la-formulacion-colectiva-del-plan-maestro-tic-para-bogota",
     })
    }, function(response){});
  }

  self.getStatus = function() { 

    return "Puede publicar? "+ canPublish;
  }

  _init();
}


function like() {

  action = new ogAction();
  action.getStatus();
  action.postLike();
}

',
'inline');


?>