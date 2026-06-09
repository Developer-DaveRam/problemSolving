function checkPrimeNumber(number){
    if(number <= 1){
        return "not prime"
    }
    for(let i = 2 ; i<number  ; i++ ){
        if( number % i ===0){
            return "Not primse"       
        }
        return "Prime"
    }
}

console.log(checkPrimeNumber(7))
console.log(checkPrimeNumber(8))