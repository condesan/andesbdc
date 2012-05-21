<?php

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function exportables_all_menus_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-conocelosandes
  $menus['menu-conocelosandes'] = array(
    'menu_name' => 'menu-conocelosandes',
    'title' => 'conocelosandes',
    'description' => '',
  );
  // Exported menu: menu-menuproyectoscuencas
  $menus['menu-menuproyectoscuencas'] = array(
    'menu_name' => 'menu-menuproyectoscuencas',
    'title' => 'menuproyectoscuencas',
    'description' => '',
  );
  // Exported menu: menu-migajas
  $menus['menu-migajas'] = array(
    'menu_name' => 'menu-migajas',
    'title' => 'migajas',
    'description' => 'migajas',
  );
  // Exported menu: menu-mquienessomos
  $menus['menu-mquienessomos'] = array(
    'menu_name' => 'menu-mquienessomos',
    'title' => 'mquienessomos',
    'description' => '',
  );
  // Exported menu: menu-redes
  $menus['menu-redes'] = array(
    'menu_name' => 'menu-redes',
    'title' => 'redes',
    'description' => '',
  );
  // Exported menu: navigation
  $menus['navigation'] = array(
    'menu_name' => 'navigation',
    'title' => 'Navigation',
    'description' => 'The navigation menu is provided by Drupal and is the main interactive menu for any site. It is usually the only menu that contains personalized links for authenticated users, and is often not even visible to anonymous users.',
  );
  // Exported menu: primary-links
  $menus['primary-links'] = array(
    'menu_name' => 'primary-links',
    'title' => 'Primary links',
    'description' => 'Primary links are often used at the theme layer to show the major sections of a site. A typical representation for primary links would be tabs along the top.',
  );
  // Exported menu: secondary-links
  $menus['secondary-links'] = array(
    'menu_name' => 'secondary-links',
    'title' => 'Secondary links',
    'description' => 'Secondary links are often used for pages like legal notices, contact details, and other secondary navigation items that play a lesser role than primary links',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Navigation');
  t('Primary links');
  t('Primary links are often used at the theme layer to show the major sections of a site. A typical representation for primary links would be tabs along the top.');
  t('Secondary links');
  t('Secondary links are often used for pages like legal notices, contact details, and other secondary navigation items that play a lesser role than primary links');
  t('The navigation menu is provided by Drupal and is the main interactive menu for any site. It is usually the only menu that contains personalized links for authenticated users, and is often not even visible to anonymous users.');
  t('conocelosandes');
  t('menuproyectoscuencas');
  t('migajas');
  t('mquienessomos');
  t('redes');


  return $menus;
}
