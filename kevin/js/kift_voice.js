// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   kift_voice.js                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/06/18 04:44:47 by jaleman           #+#    #+#             //
//   Updated: 2017/06/18 04:44:48 by jaleman          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

// Define the voice and the pitch level
var voice = "UK English Male";
var level = 1;

// Reads a kevin command.
$(document).ready(function() {
  $('.kevin_command').click(function(){
    responsiveVoice.speak($(this).text(), voice, {pitch: level});
  });
});

// Converts from text to speech.
function text2speech(id) {
	var text = document.getElementById(id).innerHTML;
	responsiveVoice.speak(text, voice, {pitch: level});
}
