const sum = (...args) => {
  let totalSum = 0;
  for (const numbers of args) {
      totalSum += numbers;
    }
  return totalSum
};
console.log('The sum is', sum(2, 4, 6, 20))
