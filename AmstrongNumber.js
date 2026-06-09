function amstrongNumber(number){
    let digits = number.toString()
    let power = digits.length
    let sum = 0

    for (let digit of digits){
        sum += Number(digit) ** power 
    }

    return sum === number ? "AmStrong Number":"Not an Am strong"
}

console.log(amstrongNumber(153))
console.log(amstrongNumber(370)); 
console.log(amstrongNumber(123)); 