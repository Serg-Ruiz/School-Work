"use strict";
/*    JavaScript 7th Edition
      Chapter 11
      Project 11-01

      Project to retrieve the Astronomy Picture of the Day from NASA
      Author: Sergio Ruiz
      Date:   November 6, 2022

      Filename: project11-01.js
*/

let imageBox = document.getElementById("nasaImage");
let dateBox = document.getElementById("dateBox");

dateBox.onchange = function (e) 
{
      var dateStr = e.target.value;
      fetch(`https://api.nasa.gov/planetary/apod?api_key=DEMO_KEY&&date=`+dateStr)
          .then(response => response.json())
          .then(data => showPicture(data))
          .catch((error) => {
              console.debug(error);
          })
      // gets info from nasa website entering date to the url then turn info to json then call show picture functoin with json parameter. 
  }
function showPicture (json) 
{
      if (json.media_type === "video") 
      {
            imageBox.innerHTML = '<iframe src="'+json.url+'"></iframe><h1>'+json.title+'</h1><p>'+json.explanation+'</p>';
      }
       else if (json.media_type === "image") 
      {
            imageBox.innerHTML = '<img src="'+json.url+'"/><h1>'+json.title+'</h1><p>'+json.explanation+'</p>';
      }
       else 
      {
          imageBox.innerHTML == "Image not Available";
      }
      // if else statement that changes inner html based on what media type json info is and displays it to html page
}



