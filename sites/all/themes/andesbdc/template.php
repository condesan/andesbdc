<?php

/**
 * @file
 * This file is empty by default because the base theme chain (Alpha & Omega) provides
 * all the basic functionality. However, in case you wish to customize the output that Drupal
 * generates through Alpha & Omega this file is a good place to do so.
* 
 * Alpha comes with a neat solution for keeping this file as clean as possible while the code
 * for your subtheme grows. Please read the README.txt in the /preprocess and /process subfolders
 * for more information on this topic.
 */
 
 /**
  * Add a class = menu title to theming
  */ 
 
function andesbdc_menu_link(array $variables) {
  //print_r($variables);
  $element = $variables['element'];
  $sub_menu = '';

  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
  }
  $element['#attributes']['class'][] = $element['#title'];
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}

/*
 * muestra franja
 */ 
function _andesbdc_display_fringe($content) {
  $output  = "<div id=\"introduction\"><div id=\"block-block-7\" class=\"container-12 clearfix\"><div class=\"grid-12\">";
  $output .= render($content);
  $output .= "</div></div></div>";
 return $output;
}

/**
 * Implements hook_preprocess_zone().
 */
function andesbdc_alpha_preprocess_zone(&$vars) {
  if (alpha_library_active('omega_equalheights')) {
    if (!empty($vars['elements']['#data']['equal_height_container'])) {
      $vars['content_attributes_array']['class'][] = 'equal-height-container';
    }
  }
  if ($vars['elements']['#zone'] == 'header') {
    if (drupal_is_front_page()) {
      $block = module_invoke('block', 'block_view', '7');
      $vars['content_fringe'] = _andesbdc_display_fringe($block['content']);
    }
    else {
      $vars['content_fringe'] = _andesbdc_display_fringe(drupal_get_title());  
      }
  }  
}


/**
 * Implements hook_preprocess_region().
 */
function andesbdc_alpha_preprocess_region(&$vars) {
  $vars['attributes_array']['id'] = drupal_html_id('region-' . $vars['region']);
  $vars['content_attributes_array']['class'][] = 'region-inner';
  $vars['content_attributes_array']['class'][] = $vars['attributes_array']['id'] . '-inner';
  if ($vars['region'] == 'sidebar_second' && !drupal_is_front_page()) {
    $node = menu_get_object('node', 1);
    // render image with slideshow widget come from field_slideshow module
    $output  = render(field_view_field('node', $node, 'field_picture', 'slideshow'));
    $output .= render(field_view_field('node', $node, 'field_related_project'));
    $output .= render(field_view_field('node', $node, 'field_related_sitio'));
    $vars['content'] = $output;
  }
}
