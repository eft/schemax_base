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
  // Exported menu link: schemax-base-menu_login:user/login
  $menu_links['schemax-base-menu_login:user/login'] = array(
    'menu_name' => 'schemax-base-menu',
    'link_path' => 'user/login',
    'router_path' => 'user',
    'link_title' => 'Login',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'schemax-base-menu_login:user/login',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: schemax-base-menu_register:user/register
  $menu_links['schemax-base-menu_register:user/register'] = array(
    'menu_name' => 'schemax-base-menu',
    'link_path' => 'user/register',
    'router_path' => 'user',
    'link_title' => 'Register',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'schemax-base-menu_register:user/register',
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
