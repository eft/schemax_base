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

  // Exported menu link: schemax-base-menu_home:<front>
  $menu_links['schemax-base-menu_home:<front>'] = array(
    'menu_name' => 'schemax-base-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'schemax-base-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: schemax-base-menu_login:menutoken/5316bbc96b643
  $menu_links['schemax-base-menu_login:menutoken/5316bbc96b643'] = array(
    'menu_name' => 'schemax-base-menu',
    'link_path' => 'menutoken/5316bbc96b643',
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
      'alter' => TRUE,
      'identifier' => 'schemax-base-menu_login:menutoken/5316bbc96b643',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: schemax-base-menu_register:menutoken/5316b9d7380f2
  $menu_links['schemax-base-menu_register:menutoken/5316b9d7380f2'] = array(
    'menu_name' => 'schemax-base-menu',
    'link_path' => 'menutoken/5316b9d7380f2',
    'router_path' => 'menutoken/%',
    'link_title' => 'Register',
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
      'identifier' => 'schemax-base-menu_register:menutoken/5316b9d7380f2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: schemax-base-menu_user-account:user
  $menu_links['schemax-base-menu_user-account:user'] = array(
    'menu_name' => 'schemax-base-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'User account',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'schemax-base-menu_user-account:user',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Home');
  t('Login');
  t('Register');
  t('User account');


  return $menu_links;
}
