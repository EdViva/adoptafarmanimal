Drupal.Imagecrop = Drupal.Imagecrop || {};
Drupal.Imagecrop.hasUnsavedChanges = false;

(function($) { 

$(document).ready(function() {
  
  $("#imagecrop-style-selection-form #edit-styles").change(function() { Drupal.Imagecrop.changeViewedImage($(this).val()); });
  if (Drupal.settings.imagecrop.cropped) {
    if (Drupal.Imagecrop.forceUpdate) {
      $('img', '#imagecrop-preview').bind('load', Drupal.Imagecrop.forceUpdate);      
    }
    $('#cancel-crop').html(Drupal.t('Done cropping'));
  }
  
});

/**
 * Event listener, go to the view url when user selected a style.
 */
Drupal.Imagecrop.changeViewedImage = function(style_name) {
  document.location = $("input[name=imagecrop-url]").val().replace('/style_name/', '/' + style_name + '/');
}

/**
 * Refresh the given image
 */
Drupal.Imagecrop.refreshImage = function() {
  var source = $(this).attr('src');
  var delimiter = source.indexOf('?') === -1 ? '?' : '&';
  $(this).attr('src', (source + delimiter + 'time=' + new Date().getTime()));
}

})(jQuery); 
