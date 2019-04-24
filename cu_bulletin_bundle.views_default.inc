<?php

/**
 * @file
 * cu_bulletin_bundle.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function cu_bulletin_bundle_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'bulletins';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Bulletins';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Bulletins';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => 'wysiwyg',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
    'field_bulletin_category_value' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_bulletin_audience_value' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no bulletins that match your selection.';
  $handler->display->display_options['empty']['area']['format'] = 'wysiwyg';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'bulletin' => 'bulletin',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Category (field_bulletin_category) */
  $handler->display->display_options['filters']['field_bulletin_category_value']['id'] = 'field_bulletin_category_value';
  $handler->display->display_options['filters']['field_bulletin_category_value']['table'] = 'field_data_field_bulletin_category';
  $handler->display->display_options['filters']['field_bulletin_category_value']['field'] = 'field_bulletin_category_value';
  $handler->display->display_options['filters']['field_bulletin_category_value']['group'] = 2;
  $handler->display->display_options['filters']['field_bulletin_category_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_bulletin_category_value']['expose']['operator_id'] = 'field_bulletin_category_value_op';
  $handler->display->display_options['filters']['field_bulletin_category_value']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_bulletin_category_value']['expose']['operator'] = 'field_bulletin_category_value_op';
  $handler->display->display_options['filters']['field_bulletin_category_value']['expose']['identifier'] = 'field_bulletin_category_value';
  $handler->display->display_options['filters']['field_bulletin_category_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_bulletin_category_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    8 => 0,
    14 => 0,
    6 => 0,
    15 => 0,
    11 => 0,
    4 => 0,
    7 => 0,
    12 => 0,
    13 => 0,
    17 => 0,
    16 => 0,
  );
  /* Filter criterion: Content: Audience (field_bulletin_audience) */
  $handler->display->display_options['filters']['field_bulletin_audience_value']['id'] = 'field_bulletin_audience_value';
  $handler->display->display_options['filters']['field_bulletin_audience_value']['table'] = 'field_data_field_bulletin_audience';
  $handler->display->display_options['filters']['field_bulletin_audience_value']['field'] = 'field_bulletin_audience_value';
  $handler->display->display_options['filters']['field_bulletin_audience_value']['group'] = 2;
  $handler->display->display_options['filters']['field_bulletin_audience_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_bulletin_audience_value']['expose']['operator_id'] = 'field_bulletin_audience_value_op';
  $handler->display->display_options['filters']['field_bulletin_audience_value']['expose']['label'] = 'Audience';
  $handler->display->display_options['filters']['field_bulletin_audience_value']['expose']['operator'] = 'field_bulletin_audience_value_op';
  $handler->display->display_options['filters']['field_bulletin_audience_value']['expose']['identifier'] = 'field_bulletin_audience_value';
  $handler->display->display_options['filters']['field_bulletin_audience_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_bulletin_audience_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    8 => 0,
    14 => 0,
    6 => 0,
    15 => 0,
    11 => 0,
    4 => 0,
    7 => 0,
    12 => 0,
    13 => 0,
    17 => 0,
    16 => 0,
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'bulletins';
  $export['bulletins'] = $view;

  $view = new view();
  $view->name = 'cu_bulletin_bundle_administration_overview';
  $view->description = 'Emulates the Drupal content administration page.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Bulletin Administration Overview';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Bulletins';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer nodes';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'name' => 'name',
    'title' => 'title',
    'timestamp' => 'title',
    'type' => 'type',
    'realname' => 'realname',
    'field_ldap_last_name' => 'field_ldap_last_name',
    'field_bulletin_approved' => 'field_bulletin_approved',
    'status' => 'status',
    'publish_on' => 'publish_on',
    'changed' => 'changed',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'changed';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'timestamp' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'realname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ldap_last_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bulletin_approved' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'publish_on' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['empty_table'] = TRUE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No content available.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Has new content */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'history';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = 'New?';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: Realname: Real name */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  $handler->display->display_options['fields']['realname']['relationship'] = 'uid';
  $handler->display->display_options['fields']['realname']['label'] = 'Author';
  $handler->display->display_options['fields']['realname']['exclude'] = TRUE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_ldap_last_name']['id'] = 'field_ldap_last_name';
  $handler->display->display_options['fields']['field_ldap_last_name']['table'] = 'field_data_field_ldap_last_name';
  $handler->display->display_options['fields']['field_ldap_last_name']['field'] = 'field_ldap_last_name';
  $handler->display->display_options['fields']['field_ldap_last_name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_ldap_last_name']['label'] = 'Author';
  $handler->display->display_options['fields']['field_ldap_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ldap_last_name']['alter']['text'] = '[realname]';
  $handler->display->display_options['fields']['field_ldap_last_name']['element_type'] = '0';
  $handler->display->display_options['fields']['field_ldap_last_name']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_ldap_last_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ldap_last_name']['field_api_classes'] = TRUE;
  /* Field: Content: Approved */
  $handler->display->display_options['fields']['field_bulletin_approved']['id'] = 'field_bulletin_approved';
  $handler->display->display_options['fields']['field_bulletin_approved']['table'] = 'field_data_field_bulletin_approved';
  $handler->display->display_options['fields']['field_bulletin_approved']['field'] = 'field_bulletin_approved';
  $handler->display->display_options['fields']['field_bulletin_approved']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_bulletin_approved']['alter']['text'] = 'Yes';
  $handler->display->display_options['fields']['field_bulletin_approved']['element_type'] = '0';
  $handler->display->display_options['fields']['field_bulletin_approved']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_bulletin_approved']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_bulletin_approved']['empty'] = 'No';
  $handler->display->display_options['fields']['field_bulletin_approved']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_bulletin_approved']['type'] = 'list_key';
  $handler->display->display_options['fields']['field_bulletin_approved']['field_api_classes'] = TRUE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Scheduler: Publish on */
  $handler->display->display_options['fields']['publish_on']['id'] = 'publish_on';
  $handler->display->display_options['fields']['publish_on']['table'] = 'scheduler';
  $handler->display->display_options['fields']['publish_on']['field'] = 'publish_on';
  $handler->display->display_options['fields']['publish_on']['date_format'] = 'cu_short_date';
  $handler->display->display_options['fields']['publish_on']['second_date_format'] = 'cu_long_date';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'cu_short_date_time';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'cu_long_date';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    8 => 0,
    9 => 0,
    6 => 0,
    10 => 0,
    11 => 0,
    4 => 0,
    7 => 0,
    3 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'bulletin' => 'bulletin',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    8 => 0,
    9 => 0,
    6 => 0,
    10 => 0,
    11 => 0,
    4 => 0,
    7 => 0,
    3 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Approved (field_bulletin_approved) */
  $handler->display->display_options['filters']['field_bulletin_approved_value']['id'] = 'field_bulletin_approved_value';
  $handler->display->display_options['filters']['field_bulletin_approved_value']['table'] = 'field_data_field_bulletin_approved';
  $handler->display->display_options['filters']['field_bulletin_approved_value']['field'] = 'field_bulletin_approved_value';
  $handler->display->display_options['filters']['field_bulletin_approved_value']['group'] = 1;
  $handler->display->display_options['filters']['field_bulletin_approved_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_bulletin_approved_value']['expose']['operator_id'] = 'field_bulletin_approved_value_op';
  $handler->display->display_options['filters']['field_bulletin_approved_value']['expose']['label'] = 'Approved';
  $handler->display->display_options['filters']['field_bulletin_approved_value']['expose']['operator'] = 'field_bulletin_approved_value_op';
  $handler->display->display_options['filters']['field_bulletin_approved_value']['expose']['identifier'] = 'field_bulletin_approved_value';
  $handler->display->display_options['filters']['field_bulletin_approved_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    8 => 0,
    14 => 0,
    6 => 0,
    15 => 0,
    11 => 0,
    4 => 0,
    7 => 0,
    12 => 0,
    13 => 0,
    17 => 0,
    16 => 0,
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: Realname: Name */
  $handler->display->display_options['filters']['realname']['id'] = 'realname';
  $handler->display->display_options['filters']['realname']['table'] = 'realname';
  $handler->display->display_options['filters']['realname']['field'] = 'realname';
  $handler->display->display_options['filters']['realname']['relationship'] = 'uid';
  $handler->display->display_options['filters']['realname']['operator'] = 'contains';
  $handler->display->display_options['filters']['realname']['group'] = 1;
  $handler->display->display_options['filters']['realname']['exposed'] = TRUE;
  $handler->display->display_options['filters']['realname']['expose']['operator_id'] = 'realname_op';
  $handler->display->display_options['filters']['realname']['expose']['label'] = 'Author';
  $handler->display->display_options['filters']['realname']['expose']['operator'] = 'realname_op';
  $handler->display->display_options['filters']['realname']['expose']['identifier'] = 'realname';
  $handler->display->display_options['filters']['realname']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['realname']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    4 => 0,
    7 => 0,
    3 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['operator'] = 'not in';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'webform' => 'webform',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;

  /* Display: Page db */
  $handler = $view->new_display('page', 'Page db', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'admin/content/bulletins';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Bulletins';
  $handler->display->display_options['menu']['weight'] = '100';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['cu_bulletin_bundle_administration_overview'] = $view;

  return $export;
}
