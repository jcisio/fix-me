Drupal.behaviors.drupalcon_attendance = {
        
        attach: function (context, settings) {
          req = jQuery.ajax({
            url: '/drupalcon/attendance/42002',
            dataType: "json",
            type: "GET",
            success: function(data) {
              jQuery('.attendance_number').html(data.data);
            }  
          });

	}
};
