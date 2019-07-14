function nearestGreaterElementOnRight(arr){
  let greaterElements = []
  let stack = []
  for (let i = 0; i< arr.length; i++){
    console.log('******', stack)
    
    if (stack.length !== 0){
      while (arr[stack[stack.length - 1]] < arr[i]){
        greaterElements.push({[arr[stack.pop()]]: arr[i]})
        console.log("---pop---", stack)
      }
      // if (arr[stack[stack.length - 1]] > arr[i]){
        if (i === arr.length - 1){
          greaterElements.push({[arr[i]]: -1})
        } else{
          stack.push(i)
          console.log("+++push+++", stack)
        }
        
      // }
    } else {
      stack.push(i)
    }
  }
  console.log(greaterElements)
  return greaterElements
}

nearestGreaterElementOnRight([5, 10, 7, 8, 3, 2, 12])