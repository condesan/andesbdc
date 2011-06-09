<?php
// $Id: cck_country_formatter.inc,v 1.1.2.2 2011/01/28 23:37:21 scyther Exp $

/**
 * @file
 * This file contains CCK formatter related functionality.
 */

/**
 * Theme function for the 'default' cck_country formatter.
 */
function theme_cck_country_formatter_default($element) {
  $country = countries_api_get_country($element['#item']['value']);
  return $country['printable_name'];
}

/**
 * Theme function for the 'code2' cck_country formatter.
 */

function theme_cck_country_formatter_code2($element) {
  return $element['#item']['value'];
}

/**
 * Theme function for the 'code3' cck_country formatter.
 */

function theme_cck_country_formatter_code3($element) {
  $country = countries_api_get_country($element['#item']['value']);
  return $country['iso3'];
}

/**
 * Theme function for the 'countryicons_image' cck_country formatter.
 */
function theme_cck_country_formatter_countryicons_image($element) {
  $iconset = drupal_substr($element['#formatter'], 0, -6);
  $country = countries_api_get_country($element['#item']['value']);
  return theme('countryicons_icon', $element['#item']['value'], $iconset, $country['printable_name'], $country['printable_name']);
}

/**
 * Theme function for the 'countryicons_sprite' cck_country formatter.
 */
function theme_cck_country_formatter_countryicons_sprite($element) {
  $iconset = drupal_substr($element['#formatter'], 0, -7);
  return theme('countryicons_icon_sprite', $element['#item']['value'], $iconset);
}
