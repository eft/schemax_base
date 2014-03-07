<?php
/**
 * @file
 * schemax_base.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function schemax_base_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: schemax-sports-menu.
  $menus['schemax-sports-menu'] = array(
    'menu_name' => 'schemax-sports-menu',
    'title' => 'Schemax Sports Menu',
    'description' => 'The <em>Schemax Sports Menu</em> includes links that are relevant to all sports sites.',
  );
  // Exported menu: schemax-user-menu.
  $menus['schemax-user-menu'] = array(
    'menu_name' => 'schemax-user-menu',
    'title' => 'Schemax User Menu',
    'description' => 'The schemax <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Schemax Sports Menu');
  t('Schemax User Menu');
  t('The <em>Schemax Sports Menu</em> includes links that are relevant to all sports sites.');
  t('The schemax <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.');

  return $menus;
}
