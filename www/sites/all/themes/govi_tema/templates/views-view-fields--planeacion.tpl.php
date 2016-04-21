<?php //dsm('views-view-fields'); ?>

<?php //hide($fields['field_legal_expedicion']); ?>
<?php
$adjunto = !empty($fields['field_archivo_adjunto_planeacion']) ? true : false;
$enlace = !empty($fields['field_enlace_externo_planeacion']) ? true : false;
if($adjunto && $enlace) {
	unset($fields['field_archivo_adjunto_planeacion']);
}
?>
<tr>
    <?php foreach($fields as $field): ?>
	<td>
	    <?php print $field->content; ?>
	</td>
    <?php endforeach; ?>
</tr>
