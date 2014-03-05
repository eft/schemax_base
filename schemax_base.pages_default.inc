<?php
/**
 * @file
 * schemax_base.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function schemax_base_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template_panel_context';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Default',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'omega:everywhere';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'branding' => NULL,
      'navigation' => NULL,
      'header' => NULL,
      'highlighted' => NULL,
      'help' => NULL,
      'content' => NULL,
      'footer' => NULL,
      'sidebar_first' => NULL,
      'sidebar_second' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '8d5c740a-9a99-4b5c-8a2c-225bd66b7757';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d9208420-3b44-4c70-8014-3617bae7aad6';
    $pane->panel = 'content';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => '',
      'override_title' => 1,
      'override_title_text' => '%title',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd9208420-3b44-4c70-8014-3617bae7aad6';
    $display->content['new-d9208420-3b44-4c70-8014-3617bae7aad6'] = $pane;
    $display->panels['content'][0] = 'new-d9208420-3b44-4c70-8014-3617bae7aad6';
    $pane = new stdClass();
    $pane->pid = 'new-0710e848-a00a-4817-a6b3-1f0caa8ce58c';
    $pane->panel = 'content';
    $pane->type = 'page_content';
    $pane->subtype = 'page_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_page_content_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0710e848-a00a-4817-a6b3-1f0caa8ce58c';
    $display->content['new-0710e848-a00a-4817-a6b3-1f0caa8ce58c'] = $pane;
    $display->panels['content'][1] = 'new-0710e848-a00a-4817-a6b3-1f0caa8ce58c';
    $pane = new stdClass();
    $pane->pid = 'new-3bf80c92-a5f3-4840-b375-3452a40237de';
    $pane->panel = 'header';
    $pane->type = 'block';
    $pane->subtype = 'menu-schemax-base-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3bf80c92-a5f3-4840-b375-3452a40237de';
    $display->content['new-3bf80c92-a5f3-4840-b375-3452a40237de'] = $pane;
    $display->panels['header'][0] = 'new-3bf80c92-a5f3-4840-b375-3452a40237de';
    $pane = new stdClass();
    $pane->pid = 'new-f0266333-3a0a-4554-927c-9b2d95c0c668';
    $pane->panel = 'help';
    $pane->type = 'page_help';
    $pane->subtype = 'page_help';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f0266333-3a0a-4554-927c-9b2d95c0c668';
    $display->content['new-f0266333-3a0a-4554-927c-9b2d95c0c668'] = $pane;
    $display->panels['help'][0] = 'new-f0266333-3a0a-4554-927c-9b2d95c0c668';
    $pane = new stdClass();
    $pane->pid = 'new-2174d2a4-4585-43c0-b8b7-51fa518563c9';
    $pane->panel = 'highlighted';
    $pane->type = 'pane_messages';
    $pane->subtype = 'pane_messages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2174d2a4-4585-43c0-b8b7-51fa518563c9';
    $display->content['new-2174d2a4-4585-43c0-b8b7-51fa518563c9'] = $pane;
    $display->panels['highlighted'][0] = 'new-2174d2a4-4585-43c0-b8b7-51fa518563c9';
    $pane = new stdClass();
    $pane->pid = 'new-92f02fba-4386-4ab6-9b4e-b223fd3e15ae';
    $pane->panel = 'navigation';
    $pane->type = 'block';
    $pane->subtype = 'menu-schemax-sports-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '92f02fba-4386-4ab6-9b4e-b223fd3e15ae';
    $display->content['new-92f02fba-4386-4ab6-9b4e-b223fd3e15ae'] = $pane;
    $display->panels['navigation'][0] = 'new-92f02fba-4386-4ab6-9b4e-b223fd3e15ae';
    $pane = new stdClass();
    $pane->pid = 'new-8a394fc2-fa9c-485c-ad11-2e44206db9fd';
    $pane->panel = 'navigation';
    $pane->type = 'views_panes';
    $pane->subtype = 'schemax_user_teams-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'logged-in-user',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8a394fc2-fa9c-485c-ad11-2e44206db9fd';
    $display->content['new-8a394fc2-fa9c-485c-ad11-2e44206db9fd'] = $pane;
    $display->panels['navigation'][1] = 'new-8a394fc2-fa9c-485c-ad11-2e44206db9fd';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['site_template_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template_panel_context_2';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Team Template',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'og_is_node_group_content',
          'settings' => NULL,
          'context' => 'node',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'og_is_node_group',
          'settings' => NULL,
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
    ),
  );
  $display = new panels_display();
  $display->layout = 'omega:everywhere';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'branding' => NULL,
      'navigation' => NULL,
      'header' => NULL,
      'highlighted' => NULL,
      'help' => NULL,
      'content' => NULL,
      'footer' => NULL,
      'sidebar_first' => NULL,
      'sidebar_second' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:og-group-ref';
  $display->uuid = '8d5c740a-9a99-4b5c-8a2c-225bd66b7757';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0710e848-a00a-4817-a6b3-1f0caa8ce58c';
    $pane->panel = 'content';
    $pane->type = 'page_content';
    $pane->subtype = 'page_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_page_content_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0710e848-a00a-4817-a6b3-1f0caa8ce58c';
    $display->content['new-0710e848-a00a-4817-a6b3-1f0caa8ce58c'] = $pane;
    $display->panels['content'][0] = 'new-0710e848-a00a-4817-a6b3-1f0caa8ce58c';
    $pane = new stdClass();
    $pane->pid = 'new-0288853b-b32e-4954-9c1f-7934dfcf111e';
    $pane->panel = 'header';
    $pane->type = 'block';
    $pane->subtype = 'menu-schemax-base-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0288853b-b32e-4954-9c1f-7934dfcf111e';
    $display->content['new-0288853b-b32e-4954-9c1f-7934dfcf111e'] = $pane;
    $display->panels['header'][0] = 'new-0288853b-b32e-4954-9c1f-7934dfcf111e';
    $pane = new stdClass();
    $pane->pid = 'new-f0266333-3a0a-4554-927c-9b2d95c0c668';
    $pane->panel = 'help';
    $pane->type = 'page_help';
    $pane->subtype = 'page_help';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f0266333-3a0a-4554-927c-9b2d95c0c668';
    $display->content['new-f0266333-3a0a-4554-927c-9b2d95c0c668'] = $pane;
    $display->panels['help'][0] = 'new-f0266333-3a0a-4554-927c-9b2d95c0c668';
    $pane = new stdClass();
    $pane->pid = 'new-2174d2a4-4585-43c0-b8b7-51fa518563c9';
    $pane->panel = 'highlighted';
    $pane->type = 'pane_messages';
    $pane->subtype = 'pane_messages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2174d2a4-4585-43c0-b8b7-51fa518563c9';
    $display->content['new-2174d2a4-4585-43c0-b8b7-51fa518563c9'] = $pane;
    $display->panels['highlighted'][0] = 'new-2174d2a4-4585-43c0-b8b7-51fa518563c9';
    $pane = new stdClass();
    $pane->pid = 'new-96cb5766-1d7b-4c78-b7da-8ccff559c989';
    $pane->panel = 'navigation';
    $pane->type = 'block';
    $pane->subtype = 'menu-schemax-sports-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '96cb5766-1d7b-4c78-b7da-8ccff559c989';
    $display->content['new-96cb5766-1d7b-4c78-b7da-8ccff559c989'] = $pane;
    $display->panels['navigation'][0] = 'new-96cb5766-1d7b-4c78-b7da-8ccff559c989';
    $pane = new stdClass();
    $pane->pid = 'new-81e4f51b-a87b-424d-9f15-b69802fa8c0d';
    $pane->panel = 'navigation';
    $pane->type = 'block';
    $pane->subtype = 'menu-schemax-team-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '81e4f51b-a87b-424d-9f15-b69802fa8c0d';
    $display->content['new-81e4f51b-a87b-424d-9f15-b69802fa8c0d'] = $pane;
    $display->panels['navigation'][1] = 'new-81e4f51b-a87b-424d-9f15-b69802fa8c0d';
    $pane = new stdClass();
    $pane->pid = 'new-8a394fc2-fa9c-485c-ad11-2e44206db9fd';
    $pane->panel = 'navigation';
    $pane->type = 'views_panes';
    $pane->subtype = 'schemax_user_teams-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'logged-in-user',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '8a394fc2-fa9c-485c-ad11-2e44206db9fd';
    $display->content['new-8a394fc2-fa9c-485c-ad11-2e44206db9fd'] = $pane;
    $display->panels['navigation'][2] = 'new-8a394fc2-fa9c-485c-ad11-2e44206db9fd';
    $pane = new stdClass();
    $pane->pid = 'new-ec6e17b0-de0d-4e84-8e88-c9e13c3f6491';
    $pane->panel = 'navigation';
    $pane->type = 'node_create_links';
    $pane->subtype = 'node_create_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'types' => array(
        'schemax_event' => 'schemax_event',
        'schemax_news' => 'schemax_news',
        'schemax_person' => 'schemax_person',
      ),
      'field_name' => 'og_group_ref',
      'context' => 'node',
      'override_title' => 1,
      'override_title_text' => 'Create:',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'ec6e17b0-de0d-4e84-8e88-c9e13c3f6491';
    $display->content['new-ec6e17b0-de0d-4e84-8e88-c9e13c3f6491'] = $pane;
    $display->panels['navigation'][3] = 'new-ec6e17b0-de0d-4e84-8e88-c9e13c3f6491';
    $pane = new stdClass();
    $pane->pid = 'new-d9208420-3b44-4c70-8014-3617bae7aad6';
    $pane->panel = 'navigation';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => '',
      'override_title' => 1,
      'override_title_text' => '%title',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'd9208420-3b44-4c70-8014-3617bae7aad6';
    $display->content['new-d9208420-3b44-4c70-8014-3617bae7aad6'] = $pane;
    $display->panels['navigation'][4] = 'new-d9208420-3b44-4c70-8014-3617bae7aad6';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-d9208420-3b44-4c70-8014-3617bae7aad6';
  $handler->conf['display'] = $display;
  $export['site_template_panel_context_2'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function schemax_base_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'front_page';
  $page->task = 'page';
  $page->admin_title = 'Front page';
  $page->admin_description = 'Front page for the site';
  $page->path = 'front';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'weight' => '0',
    'name' => 'navigation',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'weight' => 0,
      'name' => 'navigation',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_front_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'front_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => FALSE,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'middle' => NULL,
      'default' => NULL,
    ),
    'style' => 'default',
  );
  $display->cache = array();
  $display->title = 'fasd';
  $display->uuid = '8af369b3-9ee6-4a3a-a54d-dbafe58abf78';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e2ae407b-39e1-47b0-9941-7b3dc5c4c5bd';
    $pane->panel = 'middle';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'uuid:4416bae2-1ba5-4ac5-96ac-9bb95e0f1f9e';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'featured_content',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e2ae407b-39e1-47b0-9941-7b3dc5c4c5bd';
    $display->content['new-e2ae407b-39e1-47b0-9941-7b3dc5c4c5bd'] = $pane;
    $display->panels['middle'][0] = 'new-e2ae407b-39e1-47b0-9941-7b3dc5c4c5bd';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['front_page'] = $page;

  return $pages;

}
