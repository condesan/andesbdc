<?php

/**
 * @file
 * Bulk export of context objects generated by Bulk export module.
 */

/**
 * Implements hook_context_default_contexts().
 */
function exportables_all_context_context_default_contexts() {
  $contexts = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'home';
  $context->description = '';
  $context->tag = 'Site';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-redes' => array(
          'module' => 'menu',
          'delta' => 'menu-redes',
          'region' => 'user_second',
          'weight' => '-10',
        ),
        'views-novedades-block' => array(
          'module' => 'views',
          'delta' => 'novedades-block',
          'region' => 'header_second',
          'weight' => '-10',
        ),
        'andesbdc-news' => array(
          'module' => 'andesbdc',
          'delta' => 'news',
          'region' => 'postscript_first',
          'weight' => '-10',
        ),
        'andesbdc-projects' => array(
          'module' => 'andesbdc',
          'delta' => 'projects',
          'region' => 'postscript_second',
          'weight' => '-10',
        ),
        'andesbdc-watersheds' => array(
          'module' => 'andesbdc',
          'delta' => 'watersheds',
          'region' => 'postscript_third',
          'weight' => '-10',
        ),
        'andesbdc-resources' => array(
          'module' => 'andesbdc',
          'delta' => 'resources',
          'region' => 'postscript_fourth',
          'weight' => '-10',
        ),
        'block-3' => array(
          'module' => 'block',
          'delta' => 3,
          'region' => 'footer_second',
          'weight' => '-10',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'homepage',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Site');
  $contexts['home'] = $context;

  return $contexts;
}