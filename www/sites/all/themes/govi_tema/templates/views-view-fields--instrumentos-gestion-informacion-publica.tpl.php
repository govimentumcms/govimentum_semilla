<?php //dsm('views-view-fields'); ?>
<?php 
$adjunto = !empty($fields['field_instrumentos_adjunto']) ? true : false;
$enlace = !empty($fields['field_instrumentos_enlace']) ? true : false;
if($adjunto && $enlace) {
	unset($fields['field_instrumentos_adjunto']);
}
?>
<tr>
    <?php foreach($fields as $field): 
    ?>
	<td>
	    <?php 
	    print $field->content; ?>
	</td>
    <?php endforeach; ?>
</tr>
