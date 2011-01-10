<?php
// $Id$

/**
 * @file
 * Default group implementation.
 */

/**
 * Implements hook_skinr_group_PLUGIN_info().
 */
function skinr_skinr_group_default_info() {
  $groups['general'] = array(
    'title' => t('General'),
    'description' => t('Styles for content such as lists, buttons, margins, padding, etc.'),
  );
  $groups['box'] = array(
    'title' => t('Box styles'),
    'description' => t('Presentational styles for the container.'),
  );
  $groups['typography'] = array(
    'title' => t('Typography'),
    'description' => t('Fonts, styles, sizes and other typography related skins.'),
  );
  $groups['layout'] = array(
    'title' => t('Layout'),
    'description' => t('Grid, layout and other structural related skins.'),
  );
  return $groups;
}
