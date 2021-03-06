<?php
/**
 * @file
 * dkan_forms.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function dkan_forms_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bueditor_roles';
  $strongarm->value = array(
    3 => array(
      'editor' => '5',
      'alt' => '0',
    ),
    2 => array(
      'editor' => '5',
      'alt' => '0',
      'weight' => 11,
    ),
    1 => array(
      'editor' => '3',
      'alt' => '0',
      'weight' => 12,
    ),
  );
  $export['bueditor_roles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bueditor_user1';
  $strongarm->value = '5';
  $export['bueditor_user1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'markdowneditor_buttons';
  $strongarm->value = array(
    0 => '61',
    1 => '62',
    2 => '63',
    3 => '64',
    4 => '65',
    5 => '66',
    6 => '67',
    7 => '68',
    8 => '69',
    9 => '70',
    10 => '71',
    11 => '72',
    12 => '73',
    13 => '74',
    14 => '75',
    15 => '76',
    16 => '77',
    17 => '78',
    18 => '79',
  );
  $export['markdowneditor_buttons'] = $strongarm;

  return $export;
}
