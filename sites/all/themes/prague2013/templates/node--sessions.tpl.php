<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <?php print $user_picture; ?>

  <?php print render($title_prefix); ?>
  <?php if (!$page): ?>
    <h2<?php print $title_attributes; ?>><?php print $title; ?></h2>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

  <?php if ($display_submitted): ?>
    <div class="submitted">
      <?php print $submitted; ?>
    </div>
  <?php endif; ?>
  <?php if (user_is_logged_in()) { ?>
    <?php if (module_exists('flag') == TRUE ) { ?>
      <div class="session-eval">
        <?php print flag_create_link('session_schedule', $node->nid); ?>
      </div>
    <?php } ?>
  <?php } ?>
  <?php if (isset($content['links']['drupalcon_session_evaluations_feedback']) && !empty($content['links']['drupalcon_session_evaluations_feedback']['#links'])) { ?>
    <div class="session-eval">
      <?php print render($content['links']['drupalcon_session_evaluations_feedback']); ?>
    </div>
  <?php } ?>

  <div class="content"<?php print $content_attributes; ?>>
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      print render($content);
    ?>
  </div>
  <?php print $tags; ?>


  <?php print render($content['comments']); ?>

</div>
