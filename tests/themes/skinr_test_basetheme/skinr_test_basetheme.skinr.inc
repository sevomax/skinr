<?php
// $Id$

/**
 * Implements hook_skinr_skin_info().
 */
function skinr_test_basetheme_skinr_skin_info() {
  $skins['skinr_test_basetheme'] = array(
    'title' => 'Base theme skin',
    'default_status' => 1,
  );
  return $skins;
}
