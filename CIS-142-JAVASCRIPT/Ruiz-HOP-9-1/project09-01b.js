"use strict";
/*    JavaScript 7th Edition
      Chapter 9
      Project 09-01

      Project to read field values from a query string
      Author: Sergio Ruiz
      Date:   October 30, 2022

      Filename: project09-01b.js
*/

let query = location.search.slice(1);

// makes a string of the query string 

query = query.replace(/\+/g, " ");

query = decodeURIComponent(query);

// replaces + in string with space and decoes the query string

let cardFields = query.split(/&/g);

//splits different parts of the string based one where the & symbol is located

for (let i=0; i < cardFields.length; i++)
{
    let nameValue = cardFields[i].split(/=/); 
    
    let name = nameValue[0];
    let value = nameValue[1];

    let documentPart = document.getElementById(name);

    documentPart.textContent = value;
}
// for loop that goes through cards field array seperating into two parts one to search document and one to add text content
