<?php
/**
 * @file
 * shop_cbf.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function shop_cbf_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'shop_cbf_node_to_product';
  $view->description = 'List the products associated with this node';
  $view->tag = 'default';
  $view->base_table = 'commerce_product';
  $view->human_name = 'Shop CBF Node to product';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_thumbnail_plugin_style';
  $handler->display->display_options['style_options']['columns_horizontal'] = '-1';
  $handler->display->display_options['style_options']['columns_vertical'] = '4';
  $handler->display->display_options['style_options']['columns_xs'] = '12';
  $handler->display->display_options['style_options']['columns_sm'] = '6';
  $handler->display->display_options['style_options']['columns_md'] = '6';
  $handler->display->display_options['style_options']['columns_lg'] = '4';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Commerce Product: Referencing Node */
  $handler->display->display_options['relationships']['field_products']['id'] = 'field_products';
  $handler->display->display_options['relationships']['field_products']['table'] = 'commerce_product';
  $handler->display->display_options['relationships']['field_products']['field'] = 'field_products';
  $handler->display->display_options['relationships']['field_products']['required'] = TRUE;
  /* Field: Commerce Product: SKU */
  $handler->display->display_options['fields']['sku']['id'] = 'sku';
  $handler->display->display_options['fields']['sku']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['sku']['field'] = 'sku';
  $handler->display->display_options['fields']['sku']['label'] = '';
  $handler->display->display_options['fields']['sku']['exclude'] = TRUE;
  $handler->display->display_options['fields']['sku']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['sku']['link_to_product'] = 0;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['path'] = 'product/[sku]';
  $handler->display->display_options['fields']['field_image']['alter']['alt'] = 'Click for details';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'content',
    'image_link' => '',
  );
  /* Field: Commerce Product revision: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'commerce_product_revision';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'product/[sku]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_product'] = 0;
  /* Field: Field: Subtitle */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  /* Field: Short description */
  $handler->display->display_options['fields']['field_short_form']['id'] = 'field_short_form';
  $handler->display->display_options['fields']['field_short_form']['table'] = 'field_data_field_short_form';
  $handler->display->display_options['fields']['field_short_form']['field'] = 'field_short_form';
  $handler->display->display_options['fields']['field_short_form']['ui_name'] = 'Short description';
  $handler->display->display_options['fields']['field_short_form']['label'] = '';
  $handler->display->display_options['fields']['field_short_form']['element_label_colon'] = FALSE;
  /* Field: Commerce Product: Add to Cart form */
  $handler->display->display_options['fields']['add_to_cart_form']['id'] = 'add_to_cart_form';
  $handler->display->display_options['fields']['add_to_cart_form']['table'] = 'views_entity_commerce_product';
  $handler->display->display_options['fields']['add_to_cart_form']['field'] = 'add_to_cart_form';
  $handler->display->display_options['fields']['add_to_cart_form']['label'] = '';
  $handler->display->display_options['fields']['add_to_cart_form']['exclude'] = TRUE;
  $handler->display->display_options['fields']['add_to_cart_form']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['add_to_cart_form']['show_quantity'] = 1;
  $handler->display->display_options['fields']['add_to_cart_form']['default_quantity'] = '1';
  $handler->display->display_options['fields']['add_to_cart_form']['combine'] = 1;
  $handler->display->display_options['fields']['add_to_cart_form']['display_path'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['line_item_type'] = 'product';
  /* Field: Commerce Product: Order URL */
  $handler->display->display_options['fields']['field_order_url']['id'] = 'field_order_url';
  $handler->display->display_options['fields']['field_order_url']['table'] = 'field_data_field_order_url';
  $handler->display->display_options['fields']['field_order_url']['field'] = 'field_order_url';
  $handler->display->display_options['fields']['field_order_url']['label'] = '';
  $handler->display->display_options['fields']['field_order_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_order_url']['empty'] = '[add_to_cart_form]';
  $handler->display->display_options['fields']['field_order_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_order_url']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_order_url']['multi_type'] = 'ul';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_products';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['shop_cbf_node_to_product'] = array(
    t('Master'),
    t('<none>'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Node referencing products from field_products'),
    t('Click for details'),
    t('[add_to_cart_form]'),
    t('All'),
    t('Block'),
  );
  $export['shop_cbf_node_to_product'] = $view;

  $view = new view();
  $view->name = 'shop_cbf_product';
  $view->description = 'List the products associated with this node';
  $view->tag = 'default';
  $view->base_table = 'commerce_product';
  $view->human_name = 'Shop CBF Product';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '[title]';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Commerce Product revision: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'commerce_product_revision';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_product'] = 0;
  /* Field: Field: Subtitle */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'content',
    'image_link' => '',
  );
  /* Field: Long description */
  $handler->display->display_options['fields']['field_sidebar_content']['id'] = 'field_sidebar_content';
  $handler->display->display_options['fields']['field_sidebar_content']['table'] = 'field_data_field_sidebar_content';
  $handler->display->display_options['fields']['field_sidebar_content']['field'] = 'field_sidebar_content';
  $handler->display->display_options['fields']['field_sidebar_content']['ui_name'] = 'Long description';
  $handler->display->display_options['fields']['field_sidebar_content']['label'] = '';
  $handler->display->display_options['fields']['field_sidebar_content']['element_label_colon'] = FALSE;
  /* Field: Download(s) */
  $handler->display->display_options['fields']['field_attachment']['id'] = 'field_attachment';
  $handler->display->display_options['fields']['field_attachment']['table'] = 'field_data_field_attachment';
  $handler->display->display_options['fields']['field_attachment']['field'] = 'field_attachment';
  $handler->display->display_options['fields']['field_attachment']['ui_name'] = 'Download(s)';
  $handler->display->display_options['fields']['field_attachment']['label'] = '';
  $handler->display->display_options['fields']['field_attachment']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_attachment']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_attachment']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_attachment']['multi_type'] = 'ul';
  /* Field: Commerce Product: Add to Cart form */
  $handler->display->display_options['fields']['add_to_cart_form']['id'] = 'add_to_cart_form';
  $handler->display->display_options['fields']['add_to_cart_form']['table'] = 'views_entity_commerce_product';
  $handler->display->display_options['fields']['add_to_cart_form']['field'] = 'add_to_cart_form';
  $handler->display->display_options['fields']['add_to_cart_form']['label'] = '';
  $handler->display->display_options['fields']['add_to_cart_form']['exclude'] = TRUE;
  $handler->display->display_options['fields']['add_to_cart_form']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['add_to_cart_form']['show_quantity'] = 1;
  $handler->display->display_options['fields']['add_to_cart_form']['default_quantity'] = '1';
  $handler->display->display_options['fields']['add_to_cart_form']['combine'] = 1;
  $handler->display->display_options['fields']['add_to_cart_form']['display_path'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['line_item_type'] = 'product';
  /* Field: Commerce Product: Order URL */
  $handler->display->display_options['fields']['field_order_url']['id'] = 'field_order_url';
  $handler->display->display_options['fields']['field_order_url']['table'] = 'field_data_field_order_url';
  $handler->display->display_options['fields']['field_order_url']['field'] = 'field_order_url';
  $handler->display->display_options['fields']['field_order_url']['label'] = '';
  $handler->display->display_options['fields']['field_order_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_order_url']['empty'] = '[add_to_cart_form]';
  $handler->display->display_options['fields']['field_order_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_order_url']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_order_url']['multi_type'] = 'ul';
  /* Contextual filter: Commerce Product: SKU */
  $handler->display->display_options['arguments']['sku']['id'] = 'sku';
  $handler->display->display_options['arguments']['sku']['table'] = 'commerce_product';
  $handler->display->display_options['arguments']['sku']['field'] = 'sku';
  $handler->display->display_options['arguments']['sku']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['sku']['summary']['format'] = 'default_summary';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'product/%';
  $translatables['shop_cbf_product'] = array(
    t('Master'),
    t('[title]'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('[add_to_cart_form]'),
    t('All'),
    t('Page'),
  );
  $export['shop_cbf_product'] = $view;

  return $export;
}
