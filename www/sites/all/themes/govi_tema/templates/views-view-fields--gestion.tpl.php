<?php //dsm('views-view-fields'); ?>
<?php //dsm($fields); ?>

<tr>
    <?php foreach($fields as $field): ?>
	<td>
	    <?php print $field->content; ?>
	</td>
    <?php endforeach; ?>
</tr>
