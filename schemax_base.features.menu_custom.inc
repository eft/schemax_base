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

  // Exported menu: schemax-base-menu.
  $menus['schemax-base-menu'] = array(
    'menu_name' => 'schemax-base-menu',
    'title' => 'Schemax Base Menu',
    'description' => 'The <em>Schemax Base Menu</em> includes links like login/logout, register, my account that are applicable to all sites.',
  );
  // Exported menu: schemax-sports-menu.
  $menus['schemax-sports-menu'] = array(
    'menu_name' => 'schemax-sports-menu',
    'title' => 'Schemax Sports Menu',
    'description' => 'The <em>Schemax Sports Menu</em> includes links that are relevant to all sports sites.',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Schemax Base Menu');
  t('Schemax Sports Menu');
  t('The <em>Schemax Base Menu</em> includes links like login/logout, register, my account that are applicable to all sites.');
  t('The <em>Schemax Sports Menu</em> includes links that are relevant to all sports sites.');

  return $menus;
}
