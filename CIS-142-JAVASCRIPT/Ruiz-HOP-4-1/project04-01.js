"use strict";
/*    JavaScript 7th Edition
      Chapter 4
      Project 04-01

      Application to calculate total moving cost
      Author: Sergio Ruiz
      Date:   September 25, 2022

      Filename: project04-01.js
*/

// Global Constants
let COST_PER_LB = .50;
let COST_PER_MILE = .75;
let SETUP_COST = 500;

// Global Variables
let wgtBox = document.getElementById("wgtBox");
let distBox = document.getElementById("distBox");
let msgBox = document.getElementById("msgBox");


// Event Handlers
document.getElementById("wgtBox").onchange = calcTotal;
document.getElementById("distBox").onchange = calcTotal;
document.getElementById("setupBox").onclick = calcTotal;

// Function to calculate an estimate of the total moving cost
function calcTotal() {
   let totalCost = 0;      // Set the initial estimate to $0
   msgBox.innerHTML = "";  // Erase any warnings in the message box

   try
   {
      if(!(wgtBox.value > 0))
      {
         throw "!! Enter a positive weight";
      }

      if(!(distBox.value > 0))
      {
         throw "!! Enter  a positive mileage";
      }

         totalCost += wgtBox.value * COST_PER_LB;      
         totalCost += distBox.value * COST_PER_MILE;   
   
      
      if (document.getElementById("setupBox").checked) {
         totalCost += SETUP_COST
      }
      
      // Display the moving cost estimate in the totalBox, formatted as currency
      document.getElementById("totalBox").innerHTML = formatCurrency(totalCost);

   }
   catch(error)
   {
      msgBox.innerHTML = error;
   }
}



 // Function to display a numeric value as a text string in the format $##.## 
 function formatCurrency(value) {
    return "$" + value.toFixed(2);
 }