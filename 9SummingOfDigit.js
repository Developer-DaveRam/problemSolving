function summing(n){

    let string = String(n)
    let length = string.length;

    let totla = 0
    for(let i = 0 ;i < length; i++){
        totla += Number(string[i])
    }
    return totla
}

console.log('s', summing(1234))