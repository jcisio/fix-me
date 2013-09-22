/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - http://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
(function ($, Drupal, window, document, undefined) {

  $(window).load(function() {
    
    // Initialise carousel
    if($('.flexslider')) {
      $('.flexslider').flexslider({
        animation: "fade",
        direction: "vertical",
        smoothHeight: false
      });
    }
    
    // Mobile menu toggle
    $('.nav-toggle').click(function(){
      $('#navigation').slideToggle();
      
      if($('#secondary-menu').css('display') == 'block') {
        $('#secondary-menu').slideUp();
      }
    });
    
    // Mobile user menu toggle
    $('.user-nav-toggle').click(function(){
      $('#secondary-menu').slideToggle();
      
      if($('#navigation').css('display') == 'block') {
        $('#navigation').slideUp();
      }
    });

    // Set up sub menus to be expandable on mobile
    function setMobileMenu() {
      var $subMenu = $('#navigation ul li.expanded');
      
      if($('.expand-button').length == 0 && $subMenu.css('display') == 'block') {
        
        $subMenu.each(function(){
          var expandButton = $('<span>');
          
          if($(this).hasClass('active-trail') || $(this).hasClass('active')) {
            expandButton.addClass('open');
            expandButton.text('-');
          } else {
            expandButton.text('+');
          }
          
          expandButton.addClass('expand-button');
          expandButton.click(function(){
            $(this).toggleClass('open').siblings('ul').slideToggle();            
          });
          
          $(this).prepend(expandButton);
        })
      }
    }
    
    setMobileMenu();
    
    $(window).resize(function(){
      setMobileMenu();
    });
    
    // Open/close for track filters on schedule
    $('.view-drupalcon-schedule .views-exposed-widgets > .views-exposed-widget > label').click(function(){
      $(this).toggleClass('open');
      $('.form-item-field-track-value').slideToggle();
    }); 
  }); // window.load

})(jQuery, Drupal, this, this.document);
