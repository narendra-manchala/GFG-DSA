import stack

def balancedParanthesis(string):
    openBrackets = "{[("
    closedBrackets = "}])"
    st = stack.Stack()
    if len(string) % 2 != 0: return "Not balanced"
    
    for char in list(string):
        if char in openBrackets:
            st.push(char)
        else:
            if openBrackets.index(st.top()) == closedBrackets.index(char):
                st.pop()
            else: return "Not balanced"
    
    return "Balanced" if not st.length else "Not balanced"