<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function fas_research_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => 1);
  }
  elseif ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function fas_research_node_info() {
  $items = array(
    'rschproj' => array(
      'name' => t('Research project'),
      'module' => 'features',
      'description' => t('Description of a research project related to Founders and Survivors or Convicts and Diggers data.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function fas_research_views_api() {
  return array(
    'api' => '2',
  );
}
