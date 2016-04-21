jQuery(document).ready(function(){
	var nav = jQuery('#menu-principal');
	var nav2 = jQuery('#block-menu-menu-transparencia-segundo-nivel');
    
    jQuery(window).scroll(function () {
        if (jQuery(this).scrollTop() > 136) {
            nav.addClass("f-nav");
            nav2.addClass("f-nav2");
        } else {
            nav.removeClass("f-nav");
            nav2.removeClass("f-nav2");
        }
    });
    jQuery('#toggles').click(function(){
        if( jQuery(this).hasClass("open")){
             jQuery('.encabezado-c-1').removeClass("open");
            jQuery('.custom-toggle').removeClass("x");
            jQuery('#toggles').removeClass("open");
        }else{
            jQuery('.encabezado-c-1').addClass("open");
            jQuery('.custom-toggle').addClass("x");
            jQuery('#toggles').addClass("open");
        }
    });
});

// Implementa funcionalidad boton ir hacia arriba

jQuery(document).ready(function($) {


        $(window).scroll(function(){
                        //valida que exista un desplazamiento
                        if ($(this).scrollTop() > 100) {
                                $('.scrollToTop').fadeIn();
                        } else {
                                $('.scrollToTop').fadeOut();
                        }

        });

        // realiza suavizado de desplazamiento hacia arriba
        $('.scrollToTop').click(function(){
                $('html, body').animate({scrollTop : 0},800);
                return false;
        });

});