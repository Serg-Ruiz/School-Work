"use strict";
/*    JavaScript 7th Edition
      Chapter 9
      Project 09-03

      Project to retrieve date of last visit from web storage and mark new article
      Author: Sergio Ruiz
      Date:   October 31, 2022

      Filename: project09-03.js
*/

/* Page Objects */

let lastVisitDate = document.getElementById("lastVisitDate");
let articleDates = document.getElementsByClassName("posttime");

if (typeof localStorage.sblogger != "undefined")
{
      let storedLastDate = localStorage.getItem(sbloggerVisit);
      
      storedLastDate = lastVisitDate.textContent;

      let lastDate = new Date(storedLastDate);

      for (let item of articleDates)
      {
            let articleDate = new Date(item);

            if (articleDate > lastDate)
            {
                  item.innerHTML = "<strong>new</strong>";
            }
      }
}
else 
{
      lastVisitDate.textContent = "Welcome to Sblogger!";

      for (let item of articleDates)
      {
           item.insertAdjacentHTML("beforeEnd", "<strong>new</strong>") 
      }
}

let currentDate = new Date("9/12/2024");

localStorage.sbloggerVisit = currentDate.toLocaleDateString();