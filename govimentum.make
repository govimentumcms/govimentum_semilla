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
;projects[govi][type] = "profile"
;
; Descarga remota
;projects[govi][download][type] = "git"
;projects[govi][download][url] = "http://desarrollotic.alcaldiabogota.gov.co/grupo-cms/profile_pdtic.git"
;projects[govi][download][branch] = "master"
;
; Descarga local
;projects[govi][download][type] = "get"
;projects[govi][download][url] = "../profiles/profile_pdtic.tar"

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
