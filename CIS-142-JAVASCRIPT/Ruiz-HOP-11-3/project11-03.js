"use strict";
/*    JavaScript 7th Edition
      Chapter 11
      Project 11-03

      Project to retrieve order history from a web server
      Author: Sergio Ruiz
      Date:   November 6, 2022

      Filename: project11-03.js
*/

let orderResult = document.getElementById("orderResult");
let userIDBox = document.getElementById("userID");
let pwdBox = document.getElementById("pwd");


// Retrieve order history when the View Orders button is clicked
viewOrders.onclick = function() 
{
      let user = userIDBox.textContent;
      let pwd = pwdBox.textContent;

      fetch('wworders.pl?id='+user+'&pwd='+pwd)
            .then(response => response.json)
            .then(data => buildOrderTable(data))
            .catch((error) => {
                  console.debug(error);
              })
}

// Function to display order history within web tables
function buildOrderTable(obj) 
{

      if (obj.status === "Orders Not Found")
      {
            orderResult.innerHTML = "No orders Found for this user id and password";       
      }
      else
      {
            let htmlCode = '<table id ="summary"><tr><th>Name</th><td>'+obj.username+'</td><tr><th>Total Charges</th><td>' + obj.totalCharges + '</td></tr></table>';

            for (let i=0;obj.orderHistory[i];i++)
            {
                  htmlCode + '<table class="orderList"><tr><th colspan="2">'+obj.orderDate+'</th><th colspan-"2">'+obj.orderCost+'</th></tr><tr><th>Description</th><th>Qty</th><th>Price</th><th>Total</th></tr>';

                  for (let i=0; obj.products[i];i++)
                  {
                        htmlCode + '<tr><td>'+obj.products[i].description+'</td><td>'+obj.products[i].qty+'</td><td>'+obj.products[i].price+'</td><td>'+obj.products[i].total+'</td></tr>';
                  }
                  htmlCode + '</table>';
            }

            htmlCode = orderResult.innerHTML;
      }

}

