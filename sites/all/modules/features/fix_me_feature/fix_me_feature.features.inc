<?php
/**
 * @file
 * fix_me_feature.features.inc
 */

/**
 * Implements hook_views_api().
 */
function fix_me_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function fix_me_feature_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'drupalcons' => array(
      'name' => t('Drupalcons'),
      'base' => 'node_content',
      'description' => t('Content type to describe drupalcons'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'drupalistas' => array(
      'name' => t('Drupalistas'),
      'base' => 'node_content',
      'description' => t('People that go to Drupalcons'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'news' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => t('News about DCON'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'sessions' => array(
      'name' => t('Sessions'),
      'base' => 'node_content',
      'description' => t('Sessions presented in Drupalcon'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
