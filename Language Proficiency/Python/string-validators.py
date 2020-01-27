if __name__ == '__main__':
    s = raw_input()
    alphanum = False
    alphabet = False
    digit = False
    lower = False
    upper = False
    for x in s:
        if x.isdigit():
            digit = True
            alphanum = True
        elif x.isalpha():
            alphanum = True
            alphabet = True
            if x.islower():
                lower = True
            elif x.isupper():
                upper = True
    print(alphanum)
    print(alphabet)
    print(digit)
    print(lower)
    print(upper)

