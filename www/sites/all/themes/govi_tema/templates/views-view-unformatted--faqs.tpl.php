<fieldset class="collapsible form-wrapper collapsed">
    <?php if (!empty($title)): ?>
	<legend class="collapse">
	    <span class="fieldset-legend"><?php print $title; ?></span>
	</legend>
    <?php endif; ?>
	<div class="fieldset-wrapper">
	    <div class="display-faqs pure-u-md-1 pure-u-sm-1 pure-u-lg-1 pure-u-xl-1 pure-u-lg- pure-u-xl-1">
			<?php foreach ($rows as $id => $row): ?>
			    <?php print $row; ?>
			<?php endforeach; ?>
	    </div>
	</div>
</fieldset>
