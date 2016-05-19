<fieldset class="collapsible form-wrapper collapsed">
    <?php if (!empty($title)): ?>
	<legend class="collapse">
	    <span class="fieldset-legend"><?php print $title; ?></span>
	</legend>
    <?php endif; ?>
    <div class="fieldset-wrapper">
	<table class="pure-table">
	    <thead>
		<tr>
		    <th>
			<?php print $view->field['title']->options['label']; ?>
		    </th>
		    <th>
			<?php print $view->field['field_documento_descripcion']->options['label']; ?>
		    </th>
		    <th>
			<?php print $view->field['field_documento_fecha']->options['label']; ?>
		    </th>
		    <th>
			<?php print $view->field['field_docuemento_periodicidad']->options['label']; ?>
		    </th>
		    <th>
			<?php print $view->field['field_documento_tipo_recurso']->options['label']; ?>
		    </th>
		</tr>
	    </thead>
	    <tbody>
		<?php foreach ($rows as $id => $row): ?>
		    <?php print $row; ?>
		<?php endforeach; ?>
	    </tbody>
	</table>
    </div>
</fieldset>
