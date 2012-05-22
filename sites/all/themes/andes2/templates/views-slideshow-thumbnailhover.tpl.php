<?php

/**
 * @file
 * Views Slideshow: Thumbnail Hover template file.
 */
?>

<?php if ($controls_top || $image_count_top || $breakout_top): ?>
  <div class="views-slideshow-controls-top clear-block">
    <?php print $controls_top; ?>
    <?php print $breakout_top; ?>
    <?php print $image_count_top; ?>
  </div>
<?php endif; ?>

<?php print $slideshow; ?>

<?php if ($breakout_bottom || $controls_bottom || $image_count_bottom): ?>
  <div class="views-slideshow-controls-bottom clear-block">
     <div id="views-slideshow-controls-bottom-header"> <h2><?php print t('News'); ?></h2></div>
    <?php print $breakout_bottom; ?>
    <?php print $controls_bottom; ?>
    <?php print $image_count_bottom; ?>
     <div id="views-slideshow-controls-bottom-bottom"> <div class="more-link"><?php print l(t('See all'),'novedades_andesbdc'); ?> </div></div>
  </div>
<?php endif; ?>
