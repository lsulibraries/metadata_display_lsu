<?php
/**
 * @file
 * metadata_display_lsu.features.inc
 */

/**
 * Implements hook_islandora_solr_metadata_configurations_default_fields().
 */
function metadata_display_lsu_islandora_solr_metadata_configurations_default_fields() {
 return array(
  'department' => array(
    'fields' => array(
      'MADS_department_ms' => array(
        'solr_field' => 'MADS_department_ms',
        'data' => 'a:2:{s:13:"display_label";s:4:"Name";s:9:"hyperlink";i:0;}',
        'weight' => 2,
        'display_label' => 'Name',
        'hyperlink' => 0,
      ),
      'MADS_date_ms' => array(
        'solr_field' => 'MADS_date_ms',
        'data' => 'a:2:{s:13:"display_label";s:4:"Date";s:9:"hyperlink";i:0;}',
        'weight' => 3,
        'display_label' => 'Date',
        'hyperlink' => 0,
      ),
      'MADS_historical_mt' => array(
        'solr_field' => 'MADS_historical_mt',
        'data' => 'a:2:{s:13:"display_label";s:15:"Historical Note";s:9:"hyperlink";i:0;}',
        'weight' => 4,
        'display_label' => 'Historical Note',
        'hyperlink' => 0,
      ),
      'MADS_url_ms' => array(
        'solr_field' => 'MADS_url_ms',
        'data' => 'a:2:{s:13:"display_label";s:3:"URL";s:9:"hyperlink";i:1;}',
        'weight' => 5,
        'display_label' => 'URL',
        'hyperlink' => 1,
      ),
      'MADS_parent_institution_ms' => array(
        'solr_field' => 'MADS_parent_institution_ms',
        'data' => 'a:2:{s:13:"display_label";s:21:"Parent school/faculty";s:9:"hyperlink";i:0;}',
        'weight' => 6,
        'display_label' => 'Parent school/faculty',
        'hyperlink' => 0,
      ),
    ),
    'cmodels' => array(
      'islandora:organizationCModel' => array(
        'cmodel' => 'islandora:organizationCModel',
      ),
    ),
    'description' => array(
      'description_field' => NULL,
      'description_label' => NULL,
      'description_data' => NULL,
    ),
    'name' => 'Department',
  ),
  'image' => array(
    'fields' => array(
      'mods_titleInfo_title_ms' => array(
        'solr_field' => 'mods_titleInfo_title_ms',
        'data' => 'a:3:{s:13:"display_label";s:5:"Title";s:9:"hyperlink";i:0;s:10:"truncation";a:5:{s:15:"truncation_type";s:21:"separate_value_option";s:10:"max_length";i:0;s:9:"word_safe";i:0;s:8:"ellipsis";i:0;s:19:"min_wordsafe_length";i:1;}}',
        'weight' => 2,
        'display_label' => 'Title',
        'hyperlink' => 0,
        'truncation' => array(
          'truncation_type' => 'separate_value_option',
          'max_length' => 0,
          'word_safe' => 0,
          'ellipsis' => 0,
          'min_wordsafe_length' => 1,
        ),
      ),
      'mods_subject_topic_authority_loc_ms' => array(
        'solr_field' => 'mods_subject_topic_authority_loc_ms',
        'data' => 'a:3:{s:13:"display_label";s:7:"Subject";s:9:"hyperlink";i:0;s:10:"truncation";a:5:{s:15:"truncation_type";s:21:"separate_value_option";s:10:"max_length";i:0;s:9:"word_safe";i:0;s:8:"ellipsis";i:0;s:19:"min_wordsafe_length";i:1;}}',
        'weight' => 3,
        'display_label' => 'Subject',
        'hyperlink' => 0,
        'truncation' => array(
          'truncation_type' => 'separate_value_option',
          'max_length' => 0,
          'word_safe' => 0,
          'ellipsis' => 0,
          'min_wordsafe_length' => 1,
        ),
      ),
      'mods_originInfo_dateCreated_ms' => array(
        'solr_field' => 'mods_originInfo_dateCreated_ms',
        'data' => 'a:3:{s:13:"display_label";s:4:"Date";s:9:"hyperlink";i:0;s:10:"truncation";a:5:{s:15:"truncation_type";s:21:"separate_value_option";s:10:"max_length";i:0;s:9:"word_safe";i:0;s:8:"ellipsis";i:0;s:19:"min_wordsafe_length";i:1;}}',
        'weight' => 4,
        'display_label' => 'Date',
        'hyperlink' => 0,
        'truncation' => array(
          'truncation_type' => 'separate_value_option',
          'max_length' => 0,
          'word_safe' => 0,
          'ellipsis' => 0,
          'min_wordsafe_length' => 1,
        ),
      ),
      'mods_name_personal_namePart_ms' => array(
        'solr_field' => 'mods_name_personal_namePart_ms',
        'data' => 'a:3:{s:13:"display_label";s:22:"Creator Name and Dates";s:9:"hyperlink";i:0;s:10:"truncation";a:5:{s:15:"truncation_type";s:21:"separate_value_option";s:10:"max_length";i:0;s:9:"word_safe";i:0;s:8:"ellipsis";i:0;s:19:"min_wordsafe_length";i:1;}}',
        'weight' => 5,
        'display_label' => 'Creator Name and Dates',
        'hyperlink' => 0,
        'truncation' => array(
          'truncation_type' => 'separate_value_option',
          'max_length' => 0,
          'word_safe' => 0,
          'ellipsis' => 0,
          'min_wordsafe_length' => 1,
        ),
      ),
      'mods_physicalDescription_form_ms' => array(
        'solr_field' => 'mods_physicalDescription_form_ms',
        'data' => 'a:3:{s:13:"display_label";s:4:"Form";s:9:"hyperlink";i:0;s:10:"truncation";a:5:{s:15:"truncation_type";s:21:"separate_value_option";s:10:"max_length";i:0;s:9:"word_safe";i:0;s:8:"ellipsis";i:0;s:19:"min_wordsafe_length";i:1;}}',
        'weight' => 6,
        'display_label' => 'Form',
        'hyperlink' => 0,
        'truncation' => array(
          'truncation_type' => 'separate_value_option',
          'max_length' => 0,
          'word_safe' => 0,
          'ellipsis' => 0,
          'min_wordsafe_length' => 1,
        ),
      ),
      'mods_physicalDescription_extent_ms' => array(
        'solr_field' => 'mods_physicalDescription_extent_ms',
        'data' => 'a:3:{s:13:"display_label";s:6:"Extent";s:9:"hyperlink";i:0;s:10:"truncation";a:5:{s:15:"truncation_type";s:21:"separate_value_option";s:10:"max_length";i:0;s:9:"word_safe";i:0;s:8:"ellipsis";i:0;s:19:"min_wordsafe_length";i:1;}}',
        'weight' => 7,
        'display_label' => 'Extent',
        'hyperlink' => 0,
        'truncation' => array(
          'truncation_type' => 'separate_value_option',
          'max_length' => 0,
          'word_safe' => 0,
          'ellipsis' => 0,
          'min_wordsafe_length' => 1,
        ),
      ),
      'mods_physicalDescription_note_content_ms' => array(
        'solr_field' => 'mods_physicalDescription_note_content_ms',
        'data' => 'a:3:{s:13:"display_label";s:17:"Scope and Content";s:9:"hyperlink";i:0;s:10:"truncation";a:5:{s:15:"truncation_type";s:21:"separate_value_option";s:10:"max_length";i:0;s:9:"word_safe";i:0;s:8:"ellipsis";i:0;s:19:"min_wordsafe_length";i:1;}}',
        'weight' => 8,
        'display_label' => 'Scope and Content',
        'hyperlink' => 0,
        'truncation' => array(
          'truncation_type' => 'separate_value_option',
          'max_length' => 0,
          'word_safe' => 0,
          'ellipsis' => 0,
          'min_wordsafe_length' => 1,
        ),
      ),
      'mods_accessCondition_restriction_on_access_mlt' => array(
        'solr_field' => 'mods_accessCondition_restriction_on_access_mlt',
        'data' => 'a:3:{s:13:"display_label";s:21:"Restriction on access";s:9:"hyperlink";i:0;s:10:"truncation";a:5:{s:15:"truncation_type";s:21:"separate_value_option";s:10:"max_length";i:0;s:9:"word_safe";i:0;s:8:"ellipsis";i:0;s:19:"min_wordsafe_length";i:1;}}',
        'weight' => 9,
        'display_label' => 'Restriction on access',
        'hyperlink' => 0,
        'truncation' => array(
          'truncation_type' => 'separate_value_option',
          'max_length' => 0,
          'word_safe' => 0,
          'ellipsis' => 0,
          'min_wordsafe_length' => 1,
        ),
      ),
      'mods_location_holdingSimple_copyInformation_subLocation_ms' => array(
        'solr_field' => 'mods_location_holdingSimple_copyInformation_subLocation_ms',
        'data' => 'a:3:{s:13:"display_label";s:8:"Location";s:9:"hyperlink";i:0;s:10:"truncation";a:5:{s:15:"truncation_type";s:21:"separate_value_option";s:10:"max_length";i:0;s:9:"word_safe";i:0;s:8:"ellipsis";i:0;s:19:"min_wordsafe_length";i:1;}}',
        'weight' => 10,
        'display_label' => 'Location',
        'hyperlink' => 0,
        'truncation' => array(
          'truncation_type' => 'separate_value_option',
          'max_length' => 0,
          'word_safe' => 0,
          'ellipsis' => 0,
          'min_wordsafe_length' => 1,
        ),
      ),
      'mods_location_holdingSimple_copyInformation_shelfLocator_ms' => array(
        'solr_field' => 'mods_location_holdingSimple_copyInformation_shelfLocator_ms',
        'data' => 'a:3:{s:13:"display_label";s:5:"Shelf";s:9:"hyperlink";i:0;s:10:"truncation";a:5:{s:15:"truncation_type";s:21:"separate_value_option";s:10:"max_length";i:0;s:9:"word_safe";i:0;s:8:"ellipsis";i:0;s:19:"min_wordsafe_length";i:1;}}',
        'weight' => 11,
        'display_label' => 'Shelf',
        'hyperlink' => 0,
        'truncation' => array(
          'truncation_type' => 'separate_value_option',
          'max_length' => 0,
          'word_safe' => 0,
          'ellipsis' => 0,
          'min_wordsafe_length' => 1,
        ),
      ),
      'mods_accessCondition_use_and_reproduction_mlt' => array(
        'solr_field' => 'mods_accessCondition_use_and_reproduction_mlt',
        'data' => 'a:3:{s:13:"display_label";s:20:"Use and Reproduction";s:9:"hyperlink";i:0;s:10:"truncation";a:5:{s:15:"truncation_type";s:21:"separate_value_option";s:10:"max_length";i:0;s:9:"word_safe";i:0;s:8:"ellipsis";i:0;s:19:"min_wordsafe_length";i:1;}}',
        'weight' => 12,
        'display_label' => 'Use and Reproduction',
        'hyperlink' => 0,
        'truncation' => array(
          'truncation_type' => 'separate_value_option',
          'max_length' => 0,
          'word_safe' => 0,
          'ellipsis' => 0,
          'min_wordsafe_length' => 1,
        ),
      ),
    ),
    'cmodels' => array(
      'islandora:sp_basic_image' => array(
        'cmodel' => 'islandora:sp_basic_image',
      ),
    ),
    'description' => array(
      'description_field' => 'mods_physicalDescription_note_content_ms',
      'description_label' => 'Description',
      'description_data' => array(
        'truncation' => array(
          'truncation_type' => 'separate_value_option',
          'max_length' => 0,
          'word_safe' => 0,
          'ellipsis' => 0,
          'min_wordsafe_length' => 1,
        ),
      ),
    ),
    'name' => 'image',
  ),
  'scholar' => array(
    'fields' => array(
      'MADS_title_ms' => array(
        'solr_field' => 'MADS_title_ms',
        'data' => 'a:2:{s:13:"display_label";s:4:"Name";s:9:"hyperlink";i:0;}',
        'weight' => 2,
        'display_label' => 'Name',
        'hyperlink' => 0,
      ),
      'MADS_email_ms' => array(
        'solr_field' => 'MADS_email_ms',
        'data' => 'a:2:{s:13:"display_label";s:5:"Email";s:9:"hyperlink";i:0;}',
        'weight' => 3,
        'display_label' => 'Email',
        'hyperlink' => 0,
      ),
      'MADS_position_ms' => array(
        'solr_field' => 'MADS_position_ms',
        'data' => 'a:2:{s:13:"display_label";s:8:"Position";s:9:"hyperlink";i:0;}',
        'weight' => 4,
        'display_label' => 'Position',
        'hyperlink' => 0,
      ),
      'MADS_organization_ms' => array(
        'solr_field' => 'MADS_organization_ms',
        'data' => 'a:2:{s:13:"display_label";s:13:"Department(s)";s:9:"hyperlink";i:0;}',
        'weight' => 5,
        'display_label' => 'Department(s)',
        'hyperlink' => 0,
      ),
      'MADS_phone_ms' => array(
        'solr_field' => 'MADS_phone_ms',
        'data' => 'a:2:{s:13:"display_label";s:5:"Phone";s:9:"hyperlink";i:0;}',
        'weight' => 6,
        'display_label' => 'Phone',
        'hyperlink' => 0,
      ),
      'MADS_address_ms' => array(
        'solr_field' => 'MADS_address_ms',
        'data' => 'a:2:{s:13:"display_label";s:8:"Building";s:9:"hyperlink";i:0;}',
        'weight' => 7,
        'display_label' => 'Building',
        'hyperlink' => 0,
      ),
      'MADS_url_ms' => array(
        'solr_field' => 'MADS_url_ms',
        'data' => 'a:2:{s:13:"display_label";s:3:"URL";s:9:"hyperlink";i:1;}',
        'weight' => 8,
        'display_label' => 'URL',
        'hyperlink' => 1,
      ),
    ),
    'cmodels' => array(
      'islandora:personCModel' => array(
        'cmodel' => 'islandora:personCModel',
      ),
    ),
    'description' => array(
      'description_field' => NULL,
      'description_label' => NULL,
      'description_data' => NULL,
    ),
    'name' => 'Scholar',
  ),
);
}
