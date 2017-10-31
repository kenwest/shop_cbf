<?php
/**
 * @file
 * shop_cbf.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function shop_cbf_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-shop_cbf_node_to_product-block'] = array(
    'cache' => -1,
    'css_class' => 'content-full-width unbounded',
    'custom' => 0,
    'delta' => 'shop_cbf_node_to_product-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'cbootf' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'cbootf',
        'weight' => -69,
      ),
      'garland' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'garland',
        'weight' => 0,
      ),
      'logoslive' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'logoslive',
        'weight' => 0,
      ),
      'reaching' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'reaching',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'smith' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'smith',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
