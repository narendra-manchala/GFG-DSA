function revAnArrayTailRec(arr, revArr=[]) {
  console.log(arr, revArr)
  if (!arr.length) {
    return revArr
  }
  // revArr.unshift(arr[0])
  revArr.splice(0, 0, arr[0])
  return revAnArrayTailRec(arr.slice(1, arr.length), revArr.splice(0, 0, arr[0]))
}

console.log(revAnArrayTailRec([1,2,3,4,5]))