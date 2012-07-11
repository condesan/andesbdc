<?php 
/**
 * @file
 * Alpha's theme implementation to display a zone.
 */
?>
<?php if ($wrapper): ?><div<?php print $attributes; ?>><?php endif; ?>
  <?php print $content_fringe; ?>
  <div<?php print $content_attributes; ?>>
    <?php print $content; ?>
  </div>
<?php if ($wrapper): ?></div><?php endif; ?>
