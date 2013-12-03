<?php
/**
 * @file
 * schemax_base.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function schemax_base_user_default_roles() {
  $roles = array();

  // Exported role: content author.
  $roles['content author'] = array(
    'name' => 'content author',
    'weight' => 7,
  );

  // Exported role: content manager.
  $roles['content manager'] = array(
    'name' => 'content manager',
    'weight' => 6,
  );

  return $roles;
}
