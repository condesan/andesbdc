<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function exportables_all_menus_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-conocelosandes:node/196
  $menu_links['menu-conocelosandes:node/196'] = array(
    'menu_name' => 'menu-conocelosandes',
    'link_path' => 'node/196',
    'router_path' => 'node/%',
    'link_title' => 'conocelosandes',
    'options' => array(
      'langcode' => 'en',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-menuproyectoscuencas:our_proyects2
  $menu_links['menu-menuproyectoscuencas:our_proyects2'] = array(
    'menu_name' => 'menu-menuproyectoscuencas',
    'link_path' => 'our_proyects2',
    'router_path' => 'our_proyects2',
    'link_title' => 'Nuestros Proyectos',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'langcode' => 'es',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-menuproyectoscuencas:our_watersheds2
  $menu_links['menu-menuproyectoscuencas:our_watersheds2'] = array(
    'menu_name' => 'menu-menuproyectoscuencas',
    'link_path' => 'our_watersheds2',
    'router_path' => 'our_watersheds2',
    'link_title' => 'Nuestras Cuencas',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'langcode' => 'es',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-migajas:Aliados
  $menu_links['menu-migajas:Aliados'] = array(
    'menu_name' => 'menu-migajas',
    'link_path' => 'Aliados',
    'router_path' => 'Aliados',
    'link_title' => 'Allies',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-migajas:Colaboradores
  $menu_links['menu-migajas:Colaboradores'] = array(
    'menu_name' => 'menu-migajas',
    'link_path' => 'Colaboradores',
    'router_path' => 'Colaboradores',
    'link_title' => 'Collaborators',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-migajas:contact
  $menu_links['menu-migajas:contact'] = array(
    'menu_name' => 'menu-migajas',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-mquienessomos:Aliados
  $menu_links['menu-mquienessomos:Aliados'] = array(
    'menu_name' => 'menu-mquienessomos',
    'link_path' => 'Aliados',
    'router_path' => 'Aliados',
    'link_title' => 'Partners',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-mquienessomos:Colaboradores
  $menu_links['menu-mquienessomos:Colaboradores'] = array(
    'menu_name' => 'menu-mquienessomos',
    'link_path' => 'Colaboradores',
    'router_path' => 'Colaboradores',
    'link_title' => 'Team members',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: menu-mquienessomos:node/165
  $menu_links['menu-mquienessomos:node/165'] = array(
    'menu_name' => 'menu-mquienessomos',
    'link_path' => 'node/165',
    'router_path' => 'node/%',
    'link_title' => 'About us',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'langcode' => 'en',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-redes:http://flickr.com
  $menu_links['menu-redes:http://flickr.com'] = array(
    'menu_name' => 'menu-redes',
    'link_path' => 'http://flickr.com',
    'router_path' => '',
    'link_title' => 'flickr',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-redes:http://twitter.com/Waterandfood
  $menu_links['menu-redes:http://twitter.com/Waterandfood'] = array(
    'menu_name' => 'menu-redes',
    'link_path' => 'http://twitter.com/Waterandfood',
    'router_path' => '',
    'link_title' => 'twitter',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-redes:http://www.slideshare.net/CPWF
  $menu_links['menu-redes:http://www.slideshare.net/CPWF'] = array(
    'menu_name' => 'menu-redes',
    'link_path' => 'http://www.slideshare.net/CPWF',
    'router_path' => '',
    'link_title' => 'slideshare',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-redes:http://www.youtube.com/
  $menu_links['menu-redes:http://www.youtube.com/'] = array(
    'menu_name' => 'menu-redes',
    'link_path' => 'http://www.youtube.com/',
    'router_path' => '',
    'link_title' => 'youtube',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: menu-redes:https://www.facebook.com/waterandfood
  $menu_links['menu-redes:https://www.facebook.com/waterandfood'] = array(
    'menu_name' => 'menu-redes',
    'link_path' => 'https://www.facebook.com/waterandfood',
    'router_path' => '',
    'link_title' => 'facebook',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-redes:rss/novedades
  $menu_links['menu-redes:rss/novedades'] = array(
    'menu_name' => 'menu-redes',
    'link_path' => 'rss/novedades',
    'router_path' => 'rss/novedades',
    'link_title' => 'rss',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: primary-links:<front>
  $menu_links['primary-links:<front>'] = array(
    'menu_name' => 'primary-links',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: primary-links:node/165
  $menu_links['primary-links:node/165'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'node/165',
    'router_path' => 'node/%',
    'link_title' => 'About us',
    'options' => array(
      'langcode' => 'en',
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: primary-links:novedades_andesbdc
  $menu_links['primary-links:novedades_andesbdc'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'novedades_andesbdc',
    'router_path' => 'novedades_andesbdc',
    'link_title' => 'Novedades',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'langcode' => 'es',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-43',
  );
  // Exported menu link: primary-links:nuestras_cuencas
  $menu_links['primary-links:nuestras_cuencas'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'nuestras_cuencas',
    'router_path' => 'nuestras_cuencas',
    'link_title' => 'Nuestras Cuencas',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'langcode' => 'es',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
  );
  // Exported menu link: primary-links:nuestros_proyectos
  $menu_links['primary-links:nuestros_proyectos'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'nuestros_proyectos',
    'router_path' => 'nuestros_proyectos',
    'link_title' => 'Nuestros Proyectos',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'langcode' => 'es',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: primary-links:recursos_andesbdc
  $menu_links['primary-links:recursos_andesbdc'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'recursos_andesbdc',
    'router_path' => 'recursos_andesbdc',
    'link_title' => 'Recursos',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'langcode' => 'es',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-41',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About us');
  t('Allies');
  t('Collaborators');
  t('Contact');
  t('Home');
  t('Novedades');
  t('Nuestras Cuencas');
  t('Nuestros Proyectos');
  t('Partners');
  t('Recursos');
  t('Team members');
  t('conocelosandes');
  t('facebook');
  t('flickr');
  t('rss');
  t('slideshare');
  t('twitter');
  t('youtube');


  return $menu_links;
}
