class Node():
    def __init__(self, key):
        self.data = key
        self.right = None
        self.left = None

root = Node(10)
root.right = Node(3)
root.left = Node(5)
