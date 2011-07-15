<?php
?><!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" lang="<?php print $language->language ?>" xml:lang="<?php print $language->language ?>" dir="<?php print $language->dir ?>">

<head>
  <?php print $head ?>
  <title><?php print $head_title ?></title>
  <?php print $styles ?>
  <?php print $scripts ?>
  <script type="text/javascript"><?php /* Needed to avoid Flash of Unstyle Content in IE */ ?> </script>
</head>

<body>

<table border="0" cellpadding="0" cellspacing="0" id="header">
  <tr>
    <td><div><?php print $header ?></div></td>
  </tr>
</table>

<table>
  <tr>
    <td> <?php print $top_left; ?></td><td> <?php print $top_center; ?></td><td> <?php print $top_right; ?></td>
  </tr>
<tr>
    <td> <?php print $bottom_left; ?></td><td> <?php print $bottom_center; ?></td><td> <?php print $bottom_right; ?></td>
  </tr>
</table>


<div id="footer">
  <?php print $footer_message ?>
  <?php print $footer ?>
</div>

<?php print $closure ?>
</body>
</html>
