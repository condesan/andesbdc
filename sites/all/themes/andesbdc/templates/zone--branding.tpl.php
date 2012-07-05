<?php 
/**
 * @file
 * Alpha's theme implementation to display a zone.
 */
?>
<?php if ($wrapper): ?><div<?php print $attributes; ?>><?php endif; ?>  

  <div<?php print $content_attributes; ?>>
    <?php print $content; ?>
  </div>

<div id="main-menu-container">
<div id="main-menu">
  <?php print theme('links', array('links' => menu_navigation_links('main-menu'), 'attributes' => array('class' => 'main-menu menu'))); ?>
</div>  
</div>  

<?php if ($wrapper): ?></div><?php endif; ?>
