$(document).ready(function(){
  $('#prev').css({'cursor':'pointer'});  
  $('#next').css({'cursor':'pointer'}); 
  $('#slideshow').cycle({
    fx:       'fade',
    timeout:   10000,
    prev:      '#prev',
    next:      '#next',
  });
});
