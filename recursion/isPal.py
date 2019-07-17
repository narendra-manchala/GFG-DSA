def isPal(string):
    start = 0
    end = len(string) - 1
    def isPalRec(string, start, end):
        if start > end or start == end:
            return True
        if (string[start] == string[end]):
            return isPalRec(string, start + 1, end - 1)
        else:
            return False

    return isPalRec(string, start, end)

print(isPal("abcdba"))