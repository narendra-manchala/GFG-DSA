def all_subsets_of_string(str, index = 0, curr_sub_string = ""):
    if not len(str):
        return ""
    return all_subsets_of_string(str(0:), index + 1, curr_sub_string)