/**
 * 
 * @param {array} arr - a list of unsorted element
 */
function selectionSort(arr){
  for(let i = 0; i < arr.length; i++){
    let currEle = arr[i]
    let j = i;
    while(arr[j-1] < currEle){
      arr[j] = arr[j-1]
      j--
    }
    arr[j+1] = currEle
  }
  console.log(arr)
  return arr
}

selectionSort([9,8,7,6,5,4])