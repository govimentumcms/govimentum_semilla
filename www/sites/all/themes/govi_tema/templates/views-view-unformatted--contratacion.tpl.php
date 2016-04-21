<?php $is_home_section = $view->display_handler->display->display_title === "Contratacion" ? true: false;
?>
<?php if(!$is_home_section) : ?>
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
    </div>
</fieldset>
<?php endif; ?>
