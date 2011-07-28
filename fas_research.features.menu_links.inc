<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function fas_research_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:research
  $menu_links['primary-links:research'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'research',
    'router_path' => 'research',
    'link_title' => 'Research',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Research');


  return $menu_links;
}
