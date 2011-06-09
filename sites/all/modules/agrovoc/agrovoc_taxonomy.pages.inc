<?php

/**
 * @file
 * This file is included by the agrovoc taxonomy module
 * 
 */

/**
 * Helper function for autocompletion.
 * 
 * The code of this function is taken from the Taxonomy module
 */
function agrovoc_taxonomy_autocomplete($vid, $string = '') {
  global $language;
  // The user enters a comma-separated list of tags. We only autocomplete the last tag.
  $array = drupal_explode_tags($string);

  // Fetch last tag
  $last_string = trim(array_pop($array));
  $matches = array();
  if ($last_string != '') {
    $result = db_query_range(db_rewrite_sql("SELECT t.tid, t.name FROM {term_data} t WHERE t.vid = %d AND LOWER(t.name) LIKE LOWER('%%%s%%')", 't', 'tid'), $vid, $last_string, 0, 10);

    $prefix = count($array) ? implode(', ', $array) .', ' : '';

    while ($tag = db_fetch_object($result)) {
      $n = $tag->name;
      // Commas and quotes in terms are special cases, so encode 'em.
      if (strpos($tag->name, ',') !== FALSE || strpos($tag->name, '"') !== FALSE) {
        $n = '"'. str_replace('"', '""', $tag->name) .'"';
      }
      $matches[$prefix . $n] = check_plain($tag->name);
    }
    
    if (strlen($last_string) >= 3) {
      // Load the vocabulary
      $vocabulary = taxonomy_vocabulary_load($vid);
      $mode = 'starting';
      if ($vocabulary->agrovoc_containing) {
        $mode = 'containing';
      }
      // Search the agrovoc
      $agrovoc_result = agrovoc_api_simple_search_by_mode2($last_string, $mode, ',', TRUE, 10, $language->language);
      foreach ($agrovoc_result as $term) {
        $n = $term['term'];
        // Commas and quotes in terms are special cases, so encode 'em.
        if (strpos($term['term'], ',') !== FALSE || strpos($term['term'], '"') !== FALSE) {
          $n = '"'. str_replace('"', '""', $term['term']) .'"';
        }
        $matches[$prefix . $n] = check_plain($term['term']);
      }
    }
      
  }

  drupal_json($matches);
}

/**
 * Retrieve a pipe delimited string of autocomplete suggestions.
 * 
 * The code of this function is taken from the content_taxonomy module
 * 
 * @param String Fieldname
 * @param Integer TID of a parent (optional)
 * @param BOOLEAN whether a multiple field or not
 * @param STRING typed input
 */
function agrovoc_taxonomy_content_taxonomy_autocomplete_load($field_name, $string = '') {
  global $language;
   // The user enters a comma-separated list of tags. We only autocomplete the last tag.
  // This regexp allows the following types of user input:
  // this, "somecmpany, llc", "and ""this"" w,o.rks", foo bar
  $content_type_info = _content_type_info();
  $vid = $content_type_info['fields'][$field_name]['vid'];
  $tid = content_taxonomy_field_get_parent($content_type_info['fields'][$field_name]);

  // If the menu system has splitted the search text because of slashes, glue it back.
  if (func_num_args() > 2) {
    $args = func_get_args();
    $string .= '/'. implode('/', array_slice($args, 2));
  }

  // The user enters a comma-separated list of tags. We only autocomplete the last tag.
  $array = drupal_explode_tags($string);

  // Fetch last tag
  $last_string = trim(array_pop($array));
  $matches = array();
  if ($last_string != '') {
    if ($tid) {
      $result = db_query_range(db_rewrite_sql("SELECT t.name FROM {term_data} t 
        LEFT JOIN {term_synonym} s ON t.tid = s.tid
        INNER JOIN {term_hierarchy} h ON  t.tid = h.tid
        WHERE h.parent = %d 
        AND (LOWER(t.name) LIKE LOWER('%%%s%%') OR LOWER(s.name) LIKE LOWER('%%%s%%'))", 't', 'tid'),
        $tid, $last_string, $last_string, 0, 10);
    }
    else {
      $result = db_query_range(db_rewrite_sql("SELECT t.name FROM {term_data} t 
        LEFT JOIN {term_synonym} s ON t.tid = s.tid
        WHERE t.vid = %d 
        AND (LOWER(t.name) LIKE LOWER('%%%s%%') OR LOWER(s.name) LIKE LOWER('%%%s%%'))", 't', 'tid'),
        $vid, $last_string, $last_string, 0, 10);
    }
    $prefix = count($array) ? '"'. implode('", "', $array) .'", ' : '';

    while ($tag = db_fetch_object($result)) {
      $n = $tag->name;
      // Commas and quotes in terms are special cases, so encode 'em.
      if (strpos($tag->name, ',') !== FALSE || strpos($tag->name, '"') !== FALSE) {
        $n = '"'. str_replace('"', '""', $tag->name) .'"';
      }
      $matches[$prefix . $n] = check_plain($tag->name);
    }
    
    if (strlen($last_string) >= 3) {
      // Load the vocabulary
      $vocabulary = taxonomy_vocabulary_load($vid);
      $mode = 'starting';
      if ($vocabulary->agrovoc_containing) {
        $mode = 'containing';
      }
      // Search the agrovoc
      $agrovoc_result = agrovoc_api_simple_search_by_mode2($last_string, $mode, ',', TRUE, 10, $language->language);
      foreach ($agrovoc_result as $term) {
        $n = $term['term'];
        // Commas and quotes in terms are special cases, so encode 'em.
        if (strpos($term['term'], ',') !== FALSE || strpos($term['term'], '"') !== FALSE) {
          $n = '"'. str_replace('"', '""', $term['term']) .'"';
        }
        $matches[$prefix . $n] = check_plain($term['term']);
      }
    }
  }

  drupal_json($matches);
}
