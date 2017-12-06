<?php
/**
 * @file
 * luggage_bean_card.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function luggage_bean_card_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_card_image'.
  $field_bases['field_card_image'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_card_image',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_card_label_icon'.
  $field_bases['field_card_label_icon'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_card_label_icon',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'fa-book ' => ' Book',
        'fa-pencil ' => ' Pencil',
        'fa-leaf ' => ' Leaf',
        'fa-coffee ' => ' Coffee',
        'fa-desktop' => 'Computer',
        'fa-play-circle ' => ' Play Button',
        'fa-universal-access' => 'Universal Accessibility',
        'fa-newspaper-o' => 'Newspaper',
        'fa-calendar' => 'Calendar',
        'fa-file-text-o' => 'Text Document',
        'fa-envelope-o' => 'Envelope',
        'fa-phone' => 'Phone',
        'fa-star-o' => 'Star',
        'fa-heart-o' => 'Heart',
        'fa-map-marker' => 'Map Marker',
        'fa-book' => 'Book',
        'fa-graduation-cap' => 'Graduation Cap',
        'fa-area-chart' => 'Area Chart',
        'fa-bar-chart' => 'Bar Chart',
        'fa-pie-chart' => 'Pie Chart',
        'fa-facebook-official' => 'Facebook',
        'fa-twitter' => 'Twitter',
        'fa-youtube' => 'YouTube',
        
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_card_url'.
  $field_bases['field_card_url'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_card_url',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
  );

  // Exported field_base: 'field_card_label_icon'.
  $field_bases['field_card_style'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_card_style',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'bean-card_red' => 'Red Label',
        'bean-card_blue' => 'Blue Label',
        'bean-card_green' => 'Green Label',
        'bean-card_dark-red' => 'Dark Red Label',
        'bean-card_dark-blue' => 'Dark Blue Label',
        'bean-card_dark-green' => 'Dark Green Label',
        'bean-card_dark-overlay_left' => 'Overlay Left',
        'bean-card_dark-overlay_bottom' => 'Overlay Bottom',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}