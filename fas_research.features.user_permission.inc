<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function fas_research_user_default_permissions() {
  $permissions = array();

  // Exported permission: create rschproj content
  $permissions['create rschproj content'] = array(
    'name' => 'create rschproj content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'developer',
      '2' => 'editor',
      '3' => 'staff',
    ),
  );

  // Exported permission: delete any rschproj content
  $permissions['delete any rschproj content'] = array(
    'name' => 'delete any rschproj content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: delete own rschproj content
  $permissions['delete own rschproj content'] = array(
    'name' => 'delete own rschproj content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: edit any rschproj content
  $permissions['edit any rschproj content'] = array(
    'name' => 'edit any rschproj content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'developer',
    ),
  );

  // Exported permission: edit field_rsch_other
  $permissions['edit field_rsch_other'] = array(
    'name' => 'edit field_rsch_other',
    'roles' => array(
      '0' => 'admin',
      '1' => 'developer',
      '2' => 'editor',
      '3' => 'staff',
    ),
  );

  // Exported permission: edit field_rsch_status
  $permissions['edit field_rsch_status'] = array(
    'name' => 'edit field_rsch_status',
    'roles' => array(
      '0' => 'admin',
      '1' => 'developer',
      '2' => 'editor',
      '3' => 'staff',
    ),
  );

  // Exported permission: edit field_rsch_users
  $permissions['edit field_rsch_users'] = array(
    'name' => 'edit field_rsch_users',
    'roles' => array(
      '0' => 'admin',
      '1' => 'developer',
      '2' => 'editor',
      '3' => 'staff',
    ),
  );

  // Exported permission: edit own rschproj content
  $permissions['edit own rschproj content'] = array(
    'name' => 'edit own rschproj content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'developer',
      '2' => 'editor',
      '3' => 'staff',
    ),
  );

  // Exported permission: view field_rsch_other
  $permissions['view field_rsch_other'] = array(
    'name' => 'view field_rsch_other',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_rsch_status
  $permissions['view field_rsch_status'] = array(
    'name' => 'view field_rsch_status',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_rsch_users
  $permissions['view field_rsch_users'] = array(
    'name' => 'view field_rsch_users',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  return $permissions;
}
