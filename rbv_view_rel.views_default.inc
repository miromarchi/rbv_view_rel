<?php
/**
 * @file
 * rbv_view_rel.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function rbv_view_rel_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'grouprelations';
  $view->description = 'Org → org relations';
  $view->tag = 'relation';
  $view->base_table = 'node';
  $view->human_name = 'Relazioni';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Relazioni';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_rel_source' => 'field_rel_source',
    'field_rel_categories' => 'field_rel_categories',
    'field_rel_target' => 'field_rel_target',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_rel_source' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_rel_categories' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_rel_target' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: target */
  $handler->display->display_options['relationships']['field_rel_target_target_id']['id'] = 'field_rel_target_target_id';
  $handler->display->display_options['relationships']['field_rel_target_target_id']['table'] = 'field_data_field_rel_target';
  $handler->display->display_options['relationships']['field_rel_target_target_id']['field'] = 'field_rel_target_target_id';
  $handler->display->display_options['relationships']['field_rel_target_target_id']['ui_name'] = 'target';
  $handler->display->display_options['relationships']['field_rel_target_target_id']['label'] = 'target';
  /* Field: Content: Soggetto 1 */
  $handler->display->display_options['fields']['field_rel_source']['id'] = 'field_rel_source';
  $handler->display->display_options['fields']['field_rel_source']['table'] = 'og_membership';
  $handler->display->display_options['fields']['field_rel_source']['field'] = 'field_rel_source';
  $handler->display->display_options['fields']['field_rel_source']['label'] = '';
  $handler->display->display_options['fields']['field_rel_source']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rel_source']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Relazione */
  $handler->display->display_options['fields']['field_rel_categories']['id'] = 'field_rel_categories';
  $handler->display->display_options['fields']['field_rel_categories']['table'] = 'field_data_field_rel_categories';
  $handler->display->display_options['fields']['field_rel_categories']['field'] = 'field_rel_categories';
  $handler->display->display_options['fields']['field_rel_categories']['label'] = '';
  $handler->display->display_options['fields']['field_rel_categories']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rel_categories']['delta_offset'] = '0';
  /* Field: Content: Soggetto 2 */
  $handler->display->display_options['fields']['field_rel_target']['id'] = 'field_rel_target';
  $handler->display->display_options['fields']['field_rel_target']['table'] = 'field_data_field_rel_target';
  $handler->display->display_options['fields']['field_rel_target']['field'] = 'field_rel_target';
  $handler->display->display_options['fields']['field_rel_target']['label'] = '';
  $handler->display->display_options['fields']['field_rel_target']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rel_target']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Soggetto 1 (field_rel_source) */
  $handler->display->display_options['sorts']['field_rel_source_target_id']['id'] = 'field_rel_source_target_id';
  $handler->display->display_options['sorts']['field_rel_source_target_id']['table'] = 'og_membership';
  $handler->display->display_options['sorts']['field_rel_source_target_id']['field'] = 'field_rel_source_target_id';
  /* Sort criterion: Content: Soggetto 2 (field_rel_target) */
  $handler->display->display_options['sorts']['field_rel_target_target_id']['id'] = 'field_rel_target_target_id';
  $handler->display->display_options['sorts']['field_rel_target_target_id']['table'] = 'field_data_field_rel_target';
  $handler->display->display_options['sorts']['field_rel_target_target_id']['field'] = 'field_rel_target_target_id';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_rel_target_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'org' => 'org',
    'project' => 'project',
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
    'relation' => 'relation',
  );

  /* Display: Page: this group as source */
  $handler = $view->new_display('page', 'Page: this group as source', 'page');
  $handler->display->display_options['display_description'] = 'All the relations of this group as source';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: source */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['ui_name'] = 'source';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['label'] = 'source';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Soggetto 1 (field_rel_source) */
  $handler->display->display_options['sorts']['field_rel_source_target_id']['id'] = 'field_rel_source_target_id';
  $handler->display->display_options['sorts']['field_rel_source_target_id']['table'] = 'og_membership';
  $handler->display->display_options['sorts']['field_rel_source_target_id']['field'] = 'field_rel_source_target_id';
  /* Sort criterion: Content: Soggetto 2 (field_rel_target) */
  $handler->display->display_options['sorts']['field_rel_target_target_id']['id'] = 'field_rel_target_target_id';
  $handler->display->display_options['sorts']['field_rel_target_target_id']['table'] = 'field_data_field_rel_target';
  $handler->display->display_options['sorts']['field_rel_target_target_id']['field'] = 'field_rel_target_target_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['nid']['title'] = 'Relazioni di %1';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'org' => 'org',
    'project' => 'project',
  );
  $handler->display->display_options['path'] = 'node/%/relazioni';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Relazioni';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Attachment: this group as target */
  $handler = $view->new_display('attachment', 'Attachment: this group as target', 'attachment_1');
  $handler->display->display_options['display_description'] = 'All the relations of this group as target';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Soggetto 1 (field_rel_source) */
  $handler->display->display_options['sorts']['field_rel_source_target_id']['id'] = 'field_rel_source_target_id';
  $handler->display->display_options['sorts']['field_rel_source_target_id']['table'] = 'og_membership';
  $handler->display->display_options['sorts']['field_rel_source_target_id']['field'] = 'field_rel_source_target_id';
  /* Sort criterion: Content: Soggetto 2 (field_rel_target) */
  $handler->display->display_options['sorts']['field_rel_target_target_id']['id'] = 'field_rel_target_target_id';
  $handler->display->display_options['sorts']['field_rel_target_target_id']['table'] = 'field_data_field_rel_target';
  $handler->display->display_options['sorts']['field_rel_target_target_id']['field'] = 'field_rel_target_target_id';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_arguments'] = FALSE;

  /* Display: Page: all relations */
  $handler = $view->new_display('page', 'Page: all relations', 'page_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'relazioni';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Relazioni';
  $handler->display->display_options['menu']['description'] = 'Visualizza tutte le relazioni di collaborazione tra le organizzazioni della società civile';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['grouprelations'] = $view;

  return $export;
}
