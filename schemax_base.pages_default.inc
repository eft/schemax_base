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
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'Default',
    'no_blocks' => 1,
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
      'foo' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '8d5c740a-9a99-4b5c-8a2c-225bd66b7757';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-03f0753b-3077-4f4a-b0d0-8bfe6a21b74d';
    $pane->panel = 'branding';
    $pane->type = 'page_logo';
    $pane->subtype = 'page_logo';
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
    $pane->uuid = '03f0753b-3077-4f4a-b0d0-8bfe6a21b74d';
    $display->content['new-03f0753b-3077-4f4a-b0d0-8bfe6a21b74d'] = $pane;
    $display->panels['branding'][0] = 'new-03f0753b-3077-4f4a-b0d0-8bfe6a21b74d';
    $pane = new stdClass();
    $pane->pid = 'new-d5d1cc98-d118-454f-9561-64ae818cc817';
    $pane->panel = 'branding';
    $pane->type = 'page_site_name';
    $pane->subtype = 'page_site_name';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd5d1cc98-d118-454f-9561-64ae818cc817';
    $display->content['new-d5d1cc98-d118-454f-9561-64ae818cc817'] = $pane;
    $display->panels['branding'][1] = 'new-d5d1cc98-d118-454f-9561-64ae818cc817';
    $pane = new stdClass();
    $pane->pid = 'new-ddb3c287-9e82-4f23-b549-a0a872b782ee';
    $pane->panel = 'branding';
    $pane->type = 'block';
    $pane->subtype = 'menu-schemax-user-menu';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'ddb3c287-9e82-4f23-b549-a0a872b782ee';
    $display->content['new-ddb3c287-9e82-4f23-b549-a0a872b782ee'] = $pane;
    $display->panels['branding'][2] = 'new-ddb3c287-9e82-4f23-b549-a0a872b782ee';
    $pane = new stdClass();
    $pane->pid = 'new-a4c28a32-c527-4f7c-9294-c83aec089cea';
    $pane->panel = 'branding';
    $pane->type = 'views_panes';
    $pane->subtype = 'schemax_user_teams-panel_pane_my_teams_short';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'a4c28a32-c527-4f7c-9294-c83aec089cea';
    $display->content['new-a4c28a32-c527-4f7c-9294-c83aec089cea'] = $pane;
    $display->panels['branding'][3] = 'new-a4c28a32-c527-4f7c-9294-c83aec089cea';
    $pane = new stdClass();
    $pane->pid = 'new-2174d2a4-4585-43c0-b8b7-51fa518563c9';
    $pane->panel = 'content';
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
    $display->panels['content'][0] = 'new-2174d2a4-4585-43c0-b8b7-51fa518563c9';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd9208420-3b44-4c70-8014-3617bae7aad6';
    $display->content['new-d9208420-3b44-4c70-8014-3617bae7aad6'] = $pane;
    $display->panels['content'][1] = 'new-d9208420-3b44-4c70-8014-3617bae7aad6';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '0710e848-a00a-4817-a6b3-1f0caa8ce58c';
    $display->content['new-0710e848-a00a-4817-a6b3-1f0caa8ce58c'] = $pane;
    $display->panels['content'][2] = 'new-0710e848-a00a-4817-a6b3-1f0caa8ce58c';
    $pane = new stdClass();
    $pane->pid = 'new-548e942f-9f9c-4501-b60e-fab57e02c2eb';
    $pane->panel = 'footer';
    $pane->type = 'block';
    $pane->subtype = 'fboauth-login';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
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
    $pane->uuid = '548e942f-9f9c-4501-b60e-fab57e02c2eb';
    $display->content['new-548e942f-9f9c-4501-b60e-fab57e02c2eb'] = $pane;
    $display->panels['footer'][0] = 'new-548e942f-9f9c-4501-b60e-fab57e02c2eb';
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
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Team Template',
    'no_blocks' => 1,
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
    $pane->pid = 'new-5d42bf1e-c75a-493d-be9e-8e01aaaff33b';
    $pane->panel = 'branding';
    $pane->type = 'page_logo';
    $pane->subtype = 'page_logo';
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
    $pane->uuid = '5d42bf1e-c75a-493d-be9e-8e01aaaff33b';
    $display->content['new-5d42bf1e-c75a-493d-be9e-8e01aaaff33b'] = $pane;
    $display->panels['branding'][0] = 'new-5d42bf1e-c75a-493d-be9e-8e01aaaff33b';
    $pane = new stdClass();
    $pane->pid = 'new-4e5a57bd-a547-40ce-88c8-1f802cd11bf2';
    $pane->panel = 'branding';
    $pane->type = 'page_site_name';
    $pane->subtype = 'page_site_name';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '4e5a57bd-a547-40ce-88c8-1f802cd11bf2';
    $display->content['new-4e5a57bd-a547-40ce-88c8-1f802cd11bf2'] = $pane;
    $display->panels['branding'][1] = 'new-4e5a57bd-a547-40ce-88c8-1f802cd11bf2';
    $pane = new stdClass();
    $pane->pid = 'new-2e150d8f-05eb-416a-b063-594091a092cf';
    $pane->panel = 'branding';
    $pane->type = 'block';
    $pane->subtype = 'menu-schemax-user-menu';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '2e150d8f-05eb-416a-b063-594091a092cf';
    $display->content['new-2e150d8f-05eb-416a-b063-594091a092cf'] = $pane;
    $display->panels['branding'][2] = 'new-2e150d8f-05eb-416a-b063-594091a092cf';
    $pane = new stdClass();
    $pane->pid = 'new-2eff8627-93e4-4af8-8c30-bc67ae5c4fab';
    $pane->panel = 'branding';
    $pane->type = 'views_panes';
    $pane->subtype = 'schemax_user_teams-panel_pane_my_teams_short';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '2eff8627-93e4-4af8-8c30-bc67ae5c4fab';
    $display->content['new-2eff8627-93e4-4af8-8c30-bc67ae5c4fab'] = $pane;
    $display->panels['branding'][3] = 'new-2eff8627-93e4-4af8-8c30-bc67ae5c4fab';
    $pane = new stdClass();
    $pane->pid = 'new-2174d2a4-4585-43c0-b8b7-51fa518563c9';
    $pane->panel = 'content';
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
    $display->panels['content'][0] = 'new-2174d2a4-4585-43c0-b8b7-51fa518563c9';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd9208420-3b44-4c70-8014-3617bae7aad6';
    $display->content['new-d9208420-3b44-4c70-8014-3617bae7aad6'] = $pane;
    $display->panels['content'][1] = 'new-d9208420-3b44-4c70-8014-3617bae7aad6';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '0710e848-a00a-4817-a6b3-1f0caa8ce58c';
    $display->content['new-0710e848-a00a-4817-a6b3-1f0caa8ce58c'] = $pane;
    $display->panels['content'][2] = 'new-0710e848-a00a-4817-a6b3-1f0caa8ce58c';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'ec6e17b0-de0d-4e84-8e88-c9e13c3f6491';
    $display->content['new-ec6e17b0-de0d-4e84-8e88-c9e13c3f6491'] = $pane;
    $display->panels['navigation'][2] = 'new-ec6e17b0-de0d-4e84-8e88-c9e13c3f6491';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-d9208420-3b44-4c70-8014-3617bae7aad6';
  $handler->conf['display'] = $display;
  $export['site_template_panel_context_2'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template_panel_context_3';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Store Template',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Taxonomy vocabulary',
        'keyword' => 'taxonomy_vocabulary',
        'name' => 'entity:taxonomy_vocabulary',
        'entity_id' => '6',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'store
store/*
catalog/*
cart',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'schemax_product_display' => 'schemax_product_display',
            ),
          ),
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
      'foo' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '8d5c740a-9a99-4b5c-8a2c-225bd66b7757';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-03f0753b-3077-4f4a-b0d0-8bfe6a21b74d';
    $pane->panel = 'branding';
    $pane->type = 'page_logo';
    $pane->subtype = 'page_logo';
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
    $pane->uuid = '03f0753b-3077-4f4a-b0d0-8bfe6a21b74d';
    $display->content['new-03f0753b-3077-4f4a-b0d0-8bfe6a21b74d'] = $pane;
    $display->panels['branding'][0] = 'new-03f0753b-3077-4f4a-b0d0-8bfe6a21b74d';
    $pane = new stdClass();
    $pane->pid = 'new-d5d1cc98-d118-454f-9561-64ae818cc817';
    $pane->panel = 'branding';
    $pane->type = 'page_site_name';
    $pane->subtype = 'page_site_name';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd5d1cc98-d118-454f-9561-64ae818cc817';
    $display->content['new-d5d1cc98-d118-454f-9561-64ae818cc817'] = $pane;
    $display->panels['branding'][1] = 'new-d5d1cc98-d118-454f-9561-64ae818cc817';
    $pane = new stdClass();
    $pane->pid = 'new-ddb3c287-9e82-4f23-b549-a0a872b782ee';
    $pane->panel = 'branding';
    $pane->type = 'block';
    $pane->subtype = 'menu-schemax-user-menu';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'ddb3c287-9e82-4f23-b549-a0a872b782ee';
    $display->content['new-ddb3c287-9e82-4f23-b549-a0a872b782ee'] = $pane;
    $display->panels['branding'][2] = 'new-ddb3c287-9e82-4f23-b549-a0a872b782ee';
    $pane = new stdClass();
    $pane->pid = 'new-a4c28a32-c527-4f7c-9294-c83aec089cea';
    $pane->panel = 'branding';
    $pane->type = 'views_panes';
    $pane->subtype = 'schemax_user_teams-panel_pane_my_teams_short';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'a4c28a32-c527-4f7c-9294-c83aec089cea';
    $display->content['new-a4c28a32-c527-4f7c-9294-c83aec089cea'] = $pane;
    $display->panels['branding'][3] = 'new-a4c28a32-c527-4f7c-9294-c83aec089cea';
    $pane = new stdClass();
    $pane->pid = 'new-2174d2a4-4585-43c0-b8b7-51fa518563c9';
    $pane->panel = 'content';
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
    $display->panels['content'][0] = 'new-2174d2a4-4585-43c0-b8b7-51fa518563c9';
    $pane = new stdClass();
    $pane->pid = 'new-0710e848-a00a-4817-a6b3-1f0caa8ce58c';
    $pane->panel = 'content';
    $pane->type = 'page_content';
    $pane->subtype = 'page_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_page_content_1',
      'override_title' => 0,
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
    $pane->pid = 'new-e32599fc-9f6c-46f9-9824-d53fae48350e';
    $pane->panel = 'sidebar_first';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'junk',
      'title' => '',
      'body' => 'Cras ipsum quam, commodo et magna sed, eleifend gravida felis. Integer iaculis felis non justo imperdiet lacinia. Duis vel porta mi. Fusce luctus nisl nec ligula fringilla, at dapibus metus rhoncus. Maecenas ornare vitae dolor non tempor. Nam sagittis sapien quis eleifend dictum. Aenean aliquet nisl in tempor fermentum. Maecenas sed blandit odio, eu vestibulum velit.',
      'format' => 'filtered_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e32599fc-9f6c-46f9-9824-d53fae48350e';
    $display->content['new-e32599fc-9f6c-46f9-9824-d53fae48350e'] = $pane;
    $display->panels['sidebar_first'][0] = 'new-e32599fc-9f6c-46f9-9824-d53fae48350e';
    $pane = new stdClass();
    $pane->pid = 'new-8f6a9fc5-c092-4bb4-bd99-62eef77bbff1';
    $pane->panel = 'sidebar_first';
    $pane->type = 'views_panes';
    $pane->subtype = 'schemax_catalog-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8f6a9fc5-c092-4bb4-bd99-62eef77bbff1';
    $display->content['new-8f6a9fc5-c092-4bb4-bd99-62eef77bbff1'] = $pane;
    $display->panels['sidebar_first'][1] = 'new-8f6a9fc5-c092-4bb4-bd99-62eef77bbff1';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-0710e848-a00a-4817-a6b3-1f0caa8ce58c';
  $handler->conf['display'] = $display;
  $export['site_template_panel_context_3'] = $handler;

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
    $pane->pid = 'new-92f1e904-c899-40f7-ac1d-1f018722a5e1';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'featured_products-panel_pane_1';
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
    $pane->uuid = '92f1e904-c899-40f7-ac1d-1f018722a5e1';
    $display->content['new-92f1e904-c899-40f7-ac1d-1f018722a5e1'] = $pane;
    $display->panels['middle'][0] = 'new-92f1e904-c899-40f7-ac1d-1f018722a5e1';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['front_page'] = $page;

  return $pages;

}
