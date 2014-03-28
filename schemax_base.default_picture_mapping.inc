<?php
/**
 * @file
 * schemax_base.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function schemax_base_default_picture_mapping() {
  $export = array();

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = 'schemax_group';
  $picture_mapping->breakpoint_group = 'schemax_group';
  $picture_mapping->mapping = array(
    'custom.user.mobile' => array(
      '1x' => 'very_small',
    ),
    'custom.user.narrow' => array(
      '1x' => 'thumbnail',
    ),
    'custom.user.wide' => array(
      '1x' => 'medium',
    ),
  );
  $export['schemax_group'] = $picture_mapping;

  return $export;
}
