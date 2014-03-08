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

  // Exported menu link: schemax-user-menu_create-account:menutoken/53197ab529774
  $menu_links['schemax-user-menu_create-account:menutoken/53197ab529774'] = array(
    'menu_name' => 'schemax-user-menu',
    'link_path' => 'menutoken/53197ab529774',
    'router_path' => 'menutoken/%',
    'link_title' => 'Create account',
    'options' => array(
      'menu_token_link_path' => 'user/register',
      'menu_token_data' => array(),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'alter' => FALSE,
      'identifier' => 'schemax-user-menu_create-account:menutoken/53197ab529774',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: schemax-user-menu_login:menutoken/531aa67c4a4ce
  $menu_links['schemax-user-menu_login:menutoken/531aa67c4a4ce'] = array(
    'menu_name' => 'schemax-user-menu',
    'link_path' => 'menutoken/531aa67c4a4ce',
    'router_path' => 'menutoken/%',
    'link_title' => 'Login',
    'options' => array(
      'menu_token_link_path' => 'user/login',
      'menu_token_data' => array(),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'alter' => FALSE,
      'identifier' => 'schemax-user-menu_login:menutoken/531aa67c4a4ce',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Create account');
  t('Login');


  return $menu_links;
}
