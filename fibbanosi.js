function Fibonacci(n) {
  if (n < 2) {
    return n;
  }
  const fib = [0, 1];

  for (let i = 2; i < n; i++) {
    fib[i] = fib[i - 1] + fib[i - 2];
    if (fib[i] > n) {
      fib.pop(fib[i]);
      break;
    }
  }
  return fib;
}

console.log(Fibonacci(50));
