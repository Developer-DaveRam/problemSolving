function checkLeapYear(year){
   if((year % 4 === 0 && year % 100 !== 0)||(year % 400 === 0) ){
    return "leap Year"
   }      
   return "not a leap Year"
}

console.log(checkLeapYear(2004))
console.log(checkLeapYear(2002))
console.log(checkLeapYear(1900));