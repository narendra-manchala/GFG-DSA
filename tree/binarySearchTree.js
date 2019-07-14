class Node{
  constructor(val){
    this.data = val
    this.left = null
    this.right = null
  }
}

class BinarySearchTree{
  constructor(){
    this.root = null
  }

  insert(value){
    let newNode = new Node(value)
    if (!this.root){
      this.root = newNode;
    } else {
      var currentNode = this.root
      while(true){
        if (value < currentNode.data){
          if (!currentNode.left){
            currentNode.left = newNode
            // console.log(" ")
            // console.log(JSON.stringify(this))
            return this
          }
          currentNode = currentNode.left
        } else {
          if (!currentNode.right){
            currentNode.right = newNode
            // console.log(" ")
            // console.log(JSON.stringify(this))
            return this
          }
          currentNode = currentNode.right
        }
      }
    }
  }

  search(value){
    let currentNode = this.root
    while (true){
      if (!currentNode){
        console.log("not found")
        return "not found"
      }
      if (currentNode.data === value){
        console.log(currentNode.data + " - found")
        return currentNode.data
      }
      if (value < currentNode.data){
        currentNode = currentNode.left
      } else {
        currentNode = currentNode.right
      }
    }
  }
}

var bst = new BinarySearchTree()
bst.insert(8)
bst.insert(7)
bst.insert(9)
bst.insert(5)
bst.insert(11)
bst.insert(5)
bst.search(5)
bst.search(11)