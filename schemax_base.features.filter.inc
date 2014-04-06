<?php
/**
 * @file
 * schemax_base.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function schemax_base_filter_default_formats() {
  $formats = array();

  // Exported format: Filtered HTML (Schemax).
  $formats['schemax_filtered_html'] = array(
    'format' => 'schemax_filtered_html',
    'name' => 'Filtered HTML (Schemax)',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_url' => array(
        'weight' => -48,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_autop' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_html' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd> <table> <tr> <thead> <th> <tbody> <td> <tfooter> <br> <p>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -45,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
