class Stack():
    def __init__(self):
        self.arr = []
        self.length = 0

    def push(self, ele):
        self.arr.append(ele)
        self.length += 1
        return self.arr

    def pop(self):
        if self.length:
            self.length -= 1
            return self.arr.pop()
        else:
            return "Stack is empty"

    def size(self):
        return self.length

    def isEmpty(self):
        return not bool(self.length)

    def top(self):
        return self.arr[self.length - 1] if self.length else "Stack is empty"


s = Stack()
