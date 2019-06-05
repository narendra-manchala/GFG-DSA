def search(arr, x):
    for i in arr:
        if i == x:
            print("Element Found")
            return True
    print("Element not found.")
    return False

search([1,2,3,4,5], 3)