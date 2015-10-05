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