; Makefile Govimentum
; Ejecute el archivo de govimentum_update.make para incluir módulos, parches y
; actualizaciones a la instalación de drupal
;
; ej:
; Instalación nueva:
;    drush make govimentum.make
; Actualización de dépendencias durante desarrollo

core = 7.x
api = 2

; Drupal Core

projects[drupal][type] = "core"
projects[drupal][version] = "7.39"

; Perfil de instalación
;
; Seleccione el tipo de descarga, descomentando las líneas
; type y url dependiendo el ambiente de trabajo
projects[govi_perfil][type] = "profile"
;
; Descarga remota

projects[govi_perfil][download][type] = "git"
;projects[govi_perfil][download][url] = "https://gitlab.com/distribucion_distrital_cms/govi_perfil.git"
projects[govi_perfil][download][url] = "git@gitlab.com:distribucion_distrital_cms/govi_perfil.git"
projects[govi_perfil][download][branch] = "master"
;
; Descarga local

;projects[govi_perfil][download][type] = "get"
;projects[govi_perfil][download][url] = "../profiles/profile_pdtic.tar"

; Módulo de desarrollo

projects[devel][subdir] = "dev"

; Módulos contribuidos

projects[features][subdir] = "contrib"
projects[libraries][subdir] = "contrib"
projects[token][subdir] = "contrib"
projects[ctools][subdir] = "contrib"
projects[views][subdir] = "contrib"
projects[views_slideshow][subdir] = "contrib"
projects[views_fieldsets][subdir] = "contrib"
projects[views_responsive_grid][subdir] = "contrib"
projects[link][subdir] = "contrib"
projects[date][subdir] = "contrib"
projects[variable][subdir] = "contrib"
projects[easy_social][subdir] = "contrib"
projects[calendar][subdir] = "contrib"
projects[event_calendar][subdir] = "contrib"
projects[entity][subdir] = "contrib"
projects[entityreference][subdir] = "contrib"
projects[scrollbar][subdir] = "contrib"
projects[jcarousel][subdir] = "contrib"


; Características Funcionales contribuidas por grupo desarrollo
; de la Distribucion Distrital CMS

projects[govi_links_destacados][type] = "module"
projects[govi_links_destacados][subdir] = "features"
projects[govi_links_destacados][download][type] = "git"
projects[govi_links_destacados][download][url] = "https://gitlab.com/distribucion_distrital_cms/govi_links_destacados.git"
;projects[govi_links_destacados][download][url] = "git@gitlab.com:distribucion_distrital_cms/govi_links_destacados.git"
projects[govi_links_destacados][download][branch] = "master"

projects[govi_noticias][type] = "module"
projects[govi_noticias][subdir] = "features"
projects[govi_noticias][download][type] = "git"
projects[govi_noticias][download][url] = "https://gitlab.com/distribucion_distrital_cms/govi_noticias.git"
;projects[govi_noticias][download][url] = "git@gitlab.com:distribucion_distrital_cms/govi_noticias.git"
projects[govi_noticias][download][branch] = "master"
