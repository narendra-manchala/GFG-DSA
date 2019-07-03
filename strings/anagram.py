from collections import Counter

def anargram(str1, str2):
    count = []
    if len(str1) != len(str2):
        return False
    for i in range(256):
        count.append(0)
    for i in list(str1):
        count[ord(i)] = 1
    for i in list(str2):
        count[ord(i)] = 0
        
    return True if sum(count) == 0 else False

def anagram2(str1, str2):
    return Counter(str1) == Counter(str2)