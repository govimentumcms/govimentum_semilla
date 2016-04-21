<?php //dsm('views-view-unfformated');?>
<?php //dsm($view->field['field_legal_recurso']); ?>


	<table class="pure-table">
	    <thead>
		<tr>
		    <th>
			<?php print $view->field['title']->options['label']; ?>
		    </th>
		    <th>
			<?php print $view->field['field_contratacion_descripcion']->options['label']; ?>
		    </th>
		    <th>
			<?php print $view->field['field_contratacion_periodicidad']->options['label']; ?>
		    </th>
		    <th>
			<?php print $view->field['field_contratacion_tipo_recurso']->options['label']; ?>
		    </th>
		</tr>
	    </thead>
	    <tbody>
		<?php foreach ($rows as $id => $row): ?>
		    <?php print $row; ?>
		<?php endforeach; ?>
	    </tbody>
	</table>
