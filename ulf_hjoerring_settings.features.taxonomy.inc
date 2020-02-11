<?php

/**
 * @file
 * ulf_hjoerring_settings.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ulf_hjoerring_settings_taxonomy_default_vocabularies() {
  return array(
    'competencies' => array(
      'name' => 'Kompetenceområde',
      'machine_name' => 'competencies',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
