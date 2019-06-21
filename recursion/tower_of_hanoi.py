def toh(n, fr, aux, to):
    """
        1. toh(n-1, fr, to, aux) // moving n-1 to "aux" by using "to" as auxilary
        2. move nth disk to to // fr - 0, aux - [3,2,1], to - [4]
        3. toh(n-1, aux, to, fr ) // moving n-1 to fr using "to" as aux
        4. move nth from aux - to // fr - [2,1], aux-0, to - [4,3]
        5. toh(n-1, fr, to, aux) // repeat 1
        6. repeat 2 // fr - 0, aux - [1], to - [4,3,2]
        7. repeat 3 // base case if n - 1 is 0  --> move n to "to"
    """
    if (len(p) == 1):
        d.append(p[0])
    