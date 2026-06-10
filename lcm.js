function gcd(a,b){
    return b === 0 ? a :(gcd(b,a%b))
    
}

function lcm(a,b){
    if(a==0 || b ==0) return 0
    return (a/gcd(a,b))*b
}

console.log(lcm(12,15))