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
      'alter' => TRUE,
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
  // Exported menu link: schemax-user-menu_log-in:menutoken/53197a8a0f6a9
  $menu_links['schemax-user-menu_log-in:menutoken/53197a8a0f6a9'] = array(
    'menu_name' => 'schemax-user-menu',
    'link_path' => 'menutoken/53197a8a0f6a9',
    'router_path' => 'menutoken/%',
    'link_title' => 'Log in',
    'options' => array(
      'menu_token_link_path' => 'user/login',
      'menu_token_data' => array(),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'schemax-user-menu_log-in:menutoken/53197a8a0f6a9',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Create account');
  t('Log in');


  return $menu_links;
}
