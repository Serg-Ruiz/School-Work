"use strict";
/*    JavaScript 7th Edition
      Chapter 5
      Project 05-03

      Project to create a table of headings from an article
      Author: Sergio Ruiz
      Date:   October 1, 2022

      Filename: project05-03.js
*/

let sourceDoc = document.getElementById("source_doc");
let toc = document.getElementById("toc");
let headingCount = 1;
let CONST_HEADING = "H2";

for (let i=0;i<sourceDoc.childNodes.length;i++) 
{
      let n = sourceDoc.childNodes[i];

      if (n.nodeName == CONST_HEADING)
      {
            const anchor = document.createElement("a");
            anchor.setAttribute("name", "doclink"  + headingCount);
            n.insertBefore(anchor, n.children[0]);
            const listItem = document.createElement("li");
            const link = document.createElement("a");
            listItem.appendChild(link);
            link.textContent = n.textContent;
            link.href = "#doclink" + headingCount;
            toc.appendChild(listItem);
            headingCount++; 
      }
}