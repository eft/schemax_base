<?php
/**
 * @file
 * schemax_base.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function schemax_base_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: schemax-user-menu_login:user/login
  $menu_links['schemax-user-menu_login:user/login'] = array(
    'menu_name' => 'schemax-user-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Login',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'schemax-user-menu_login:user/login',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: schemax-user-menu_register:user/register
  $menu_links['schemax-user-menu_register:user/register'] = array(
    'menu_name' => 'schemax-user-menu',
    'link_path' => 'user/register',
    'router_path' => 'user/register',
    'link_title' => 'Register',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'schemax-user-menu_register:user/register',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Login');
  t('Register');


  return $menu_links;
}
