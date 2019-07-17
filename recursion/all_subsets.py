def all_subsets_of_string(str, index = 0, curr_sub_string = ""):
    if len(str) == index:
        print(curr_sub_string)
        return ""
    all_subsets_of_string(str, index + 1, curr_sub_string)
    all_subsets_of_string(str, index + 1, curr_sub_string + str[index])

all_subsets_of_string("abc")