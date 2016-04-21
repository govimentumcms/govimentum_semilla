<?php //dsm('views-view-fields'); ?>

<?php //hide($fields['field_legal_expedicion']); ?>
<?php
$adjunto = !empty($fields['field_legal_adjunto']) ? true : false;
$enlace = !empty($fields['field_legal_enlace']) ? true : false;
if($adjunto && $enlace) {
	unset($fields['field_legal_adjunto']);
}
?>
<tr>
    <?php foreach($fields as $field): ?>
	<td>
	    <?php print $field->content; ?>
	</td>
    <?php endforeach; ?>
</tr>
