"use strict";

      let useShip = document.getElementById("useShip").addEventListener("click", copyShippingToBilling, false);
//event lister for when  useShip is clicked and runs copyShippingToBilling function
      function copyShippingToBilling () 
      {
            if (document.getElementById("useShip").checked == true)
            {
                 document.getElementById("firstnameBill").value = document.getElementById("firstnameShip").value ;
                 document.getElementById("lastnameBill").value = document.getElementById("lastnameShip").value ;
                 document.getElementById("address1Bill").value  = document.getElementById("address1Ship").value ;
                 document.getElementById("address2Bill").value  = document.getElementById("address2Ship").value ;
                 document.getElementById("cityBill").value  = document.getElementById("cityShip").value ;
                 document.getElementById("countryBill").value  = document.getElementById("countryShip").value ;
                 document.getElementById("codeBill").value  = document.getElementById("codeShip").value ;

                 document.getElementById("stateBill").selectedIndex = document.getElementById("stateShip").selectedIndex
            }            
      }
// when box is checked transfer the value from one field to another

      let formElements = document.querySelectorAll("input[type='text']");
      
      let fieldCount = document.childNodes.length;

      let errorBox = document.getElementById("errorBox");

//  sets variables to certain part of the document  
      
      for(let i=0; i <fieldCount; i++)
      {
            formElements[i].addEventListener("invalid", showValidationError);
      }
// shows error if any of the fieds are left blank
      function showValidationError(evt)
      {
            evt.preventDefault();

            document.getElementById("errorBox").textContent = "Complete all highlighted fields";

      }
// function for to make error box conent to highlight all fields and  prevent browser from doing default error event