<?php
/**
 * @file
 * Metatag integration for the Metatag:Facebook module.
 */

/**
 * Implements hook_metatag_info().
 */
function metatag_ebi_metatag_info() {
  $info['groups']['ebi'] = array(
    'label' => t('EBI'),
    'description' => t("Meta tags used to integrate with EBI's content lifecycle. <a href='@sample-page'>Details on it's use are here</a>.", array(
      '@sample-page' => 'http://ebiwd.github.io/EBI-Framework/#metacopy')),
    'form' => array(
      '#weight' => 55,
      '#collapsed' => FALSE,  
    ),
  );

  // EBI meta tags stack after the simple tags.
  $weight = 20;

  // Default values for each meta tag.
  $tag_info_defaults = array(
    'description' => '',
    'class' => 'DrupalTextMetaTag',
    'group' => 'ebi',
    'element' => array(
      '#theme' => 'metatag_property',
    ),
  );

  $info['tags']['ebi:owner'] = array(
    'label' => t('Owner'),
    'description' => t('The name of the content owner, group, or team.'),
    'weight' => ++$weight,
    'multiple' => TRUE,
  ) + $tag_info_defaults;

  $info['tags']['ebi:review-cycle'] = array(
    'label' => t('Review cycle'),
    'description' => t('In days, how often should the content be reviewed?'),
    'weight' => ++$weight,
    'multiple' => TRUE,
  ) + $tag_info_defaults;

  $info['tags']['ebi:last-review'] = array(
    'label' => t('Last review'),
    'description' => t('The last time the content was reviewed, format: 2015-12-20'),
    'weight' => ++$weight,
    'multiple' => TRUE,
  ) + $tag_info_defaults;

  $info['tags']['ebi:expiry'] = array(
    'label' => t('Expiry'),
    'description' => t('When this content is no longer relevant, format: 2016-01-20.'),
    'weight' => ++$weight,
    'multiple' => TRUE,
  ) + $tag_info_defaults;

  $info['tags']['ebi-localmasthead-color'] = array(
    'label' => t('Local masthead colour'),
    'description' => t('Local header background colour. format: #091314'),
    'weight' => ++$weight,
    'multiple' => TRUE,
  ) + $tag_info_defaults;

  $info['tags']['ebi-localmasthead-image'] = array(
    'label' => t('Local masthead image'),
    'description' => t('Local header custom backgrond image. <a href="@sample-page">Sample here</a>.', array(
      '@sample-page' => 'http://drupal.org/handbooks')),
    'weight' => ++$weight,
    'multiple' => TRUE,
  ) + $tag_info_defaults;


  return $info;
}
