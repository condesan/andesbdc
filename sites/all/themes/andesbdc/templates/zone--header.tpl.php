<?php 
/**
 * @file
 * Alpha's theme implementation to display a zone.
 */
?>
<?php if ($wrapper): ?><div<?php print $attributes; ?>><?php endif; ?>

<div id="introduction">
<?php 
  $block = module_invoke('block', 'block_view', '7');
  print "<div id=\"block-block-7\" class=\"container-12 clearfix\"><div class=\"grid-12\">" . render($block['content']) . "</div></div>";
?>
</div> 
  <div<?php print $content_attributes; ?>>
    <?php print $content; ?>
  </div>
<?php if ($wrapper): ?></div><?php endif; ?>
