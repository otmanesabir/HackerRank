

def wrap(string, max_width):
    n = max_width
    res = '\n'.join(map(str, [(string[i:i+n]) for i in range(0, len(string), n)]))
    return res

