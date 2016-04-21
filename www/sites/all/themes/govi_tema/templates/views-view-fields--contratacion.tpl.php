<?php //dsm('views-view-fields'); 
?>

<?php //hide($fields['field_legal_expedicion']); ?>
<?php
//$key_enlace=$fields['field_contratacion_enlace']->content;
//$key_adjunto=$fields['field_contratacion_adjunto']->content;
$adjunto = !empty($fields['field_contratacion_adjunto']) ? true : false;
$enlace = !empty($fields['field_contratacion_enlace']) ? true : false;
//if($key_enlace=='<div class="field-content"></div>'){$enlace=false;}else{$enlace=true;}
//if($key_adjunto=='<div class="field-content"></div>'){$adjunto=false;}else{$adjunto=true;}
if($adjunto && $enlace) {
	unset($fields['field_contratacion_adjunto']);
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
