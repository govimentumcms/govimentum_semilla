<?php //dsm('views-view-unfformated'); ?>
<?php //dsm($view->field['field_clasi_metas_indicadores']); ?>
<?php //dpm ($view); ?>

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
			<?php print $view->field['field_control_descripcion']->options['label']; ?>
		    </th>
		    <th>
			<?php print $view->field['field_control_periodicidad']->options['label']; ?>
		    </th>
		    <th>
			<?php print '&nbsp;'.$view->field['field_control_tipo_de_recurso']->options['label']; ?>
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
