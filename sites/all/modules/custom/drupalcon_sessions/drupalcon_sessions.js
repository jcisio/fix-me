/**
 * Update attendance to avoid caching
 */
Drupal.behaviors.drupalcon_attendance = {
    attach: function (context, settings) {
        jQuery('.sessions_jumpmenu_options').change(function() {
          document.location.href = jQuery(this).val();
        });
    }
};
