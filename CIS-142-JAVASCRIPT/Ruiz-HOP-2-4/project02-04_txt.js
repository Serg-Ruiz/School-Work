/*    JavaScript 7th Edition
      Chapter 2
      Project 02-04

      Application to calculate the cost of a restaurant order plus tax
      Author: Sergio Ruiz
      Date:   August 31, 2022

      Filename: project02-04.js
 */
let CHICKEN_PRICE = 10.95;
let HALBUT_PRICE = 13.95;
let BURGER_PRICE = 9.95;
let SALMON_PRICE = 18.95;
let SALAD_PRICE = 7.95;
let SALE_TAX = 0.07;

//function to calculate total cost and calculate tax and total cost of items with tax
function  calcTotal ()
{
   var cost = 0;

   var buyChicken = document.getElementById("chicken").checked;
   var buyHalibut = document.getElementById("halibut").checked;
   var buyBurger = document.getElementById("burger").checked;
   var buySalmon = document.getElementById("salmon").checked;
   var buySalad = document.getElementById("salad").checked;

// makes var true or false if box is checked 

   cost += buyChicken ? CHICKEN_PRICE : 0;
   cost += buyHalibut ? HALBUT_PRICE : 0;
   cost += buyBurger ? BURGER_PRICE : 0;
   cost += buySalmon ? SALMON_PRICE : 0;
   cost += buySalad ? SALAD_PRICE : 0;

// checks if id is true if it is adds price to cost if not adds 0

   document.getElementById("foodTotal").innerHTML = formatCurrency(cost);

   var tax = cost * SALE_TAX;

   document.getElementById("foodTax").innerHTML = formatCurrency(tax);

   var totalCost = cost + tax;

   document.getElementById("totalBill").innerHTML = formatCurrency(totalCost);

// changes value of the ids

}

   document.getElementById("chicken").addEventListener("click", calcTotal,false);
   document.getElementById("halibut").addEventListener("click", calcTotal,false);
   document.getElementById("burger").addEventListener("click", calcTotal,false);
   document.getElementById("salmon").addEventListener("click", calcTotal,false);
   document.getElementById("salad").addEventListener("click", calcTotal,false);
// checks if box is clicked and if it is to run caltotal function

// Function to display a numeric value as a text string in the format $##.## 
 function formatCurrency(value) 
 {
    return "$" + value.toFixed(2);
 }

