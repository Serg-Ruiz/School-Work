"use strict";
/*    JavaScript 7th Edition
      Chapter 7
      Project 07-04

      Project to create a customer queue
      Author: Sergio Ruiz
      Date:   October 22, 2022

      Filename: project07-04.js
*/

let customers = ["Alisha Jordan","Kurt Cunningham", "Ricardo Lopez", "Chanda Rao",
                 "Kevin Grant", "Thomas Bey", "Elizabeth Anderson", "Shirley Falk",
                 "David Babin", "Arthur Blanding", "Brian Vick", "Jaime Aguilar",
                 "Eileen Rios", "Gail Watts", "Margaret Wolfe", "Kathleen Newman",
                 "Jason Searl", "Stephen Gross", "Robin Steinfeldt", "Jacob Bricker",
                 "Gene Bearden", "Charles Sorensen", "John Hilton", "David Johnson",
                 "Wesley Cho"];

let customerName = document.getElementById("customerName");
let customerList = document.getElementById("customerList");
let addButton = document.getElementById("addButton");
let searchButton = document.getElementById("searchButton");
let removeButton = document.getElementById("removeButton");
let topButton = document.getElementById("topButton");

let status = document.getElementById("status");

generateCustomerList();

// Function to generate the ordered list based on the contents of the customers array
function generateCustomerList() {
   customerList.innerHTML = "";
   for (let i = 0; i < customers.length; i++) {
      let customerItem = document.createElement("li");      
      customerItem.textContent = customers[i];     
      customerList.appendChild(customerItem);
   }
}

addButton.addEventListener("click", function () 
{
   customers.push(customerName.value);
   status.innerHTML = "customer added to the end of the queue"
   generateCustomerList();
});
   
// when button is clicked pushes the customer entered to end of array and genereates the new lsit

searchButton.addEventListener("click", function () 
{
   let place = customers.indexOf(customerName.value) + 1;

   if (place != "0") 
   {
      status.innerHTML = "customer found in " + place + " place of the queue"
   } 
   else 
   {
      status.innerHTML = "customer is not found in the queue"
   }
   generateCustomerList();
});
   
// when search button is pressed looks for where name is stored in array returns value and adds 1 and if its greater than -1 its in array
// and shows where and if not says not in queue

removeButton.addEventListener("click", function () 
{

   let index = customers.indexOf(customerName.value);

   if (index != "-1") 
   {
      let id = customers.indexOf(customerName.value);
      index = customers.splice(id, 1);
      status.innerHTML = "customer removed from the queue";
      generateCustomerList();
   } 
   else 
   {
      status.innerHTML = "customer is not found in the queue"
   }
});
   
// when remove button is pressed  searches the arary for custom and if its in the array it removes that from array and generates lsit again
   
topButton.addEventListener("click", function () 
{
   let topCustomer  = customers.shift();
   status.innerHTML = topCustomer + " from the queue"
   generateCustomerList();
});
// removes topcustomer from array and then displays it out
