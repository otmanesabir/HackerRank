def main(s):
    lvl = 0
    down = 0
    up = 0
    j = 0
    while j < n:
        if s[j] == 'U':
            lvl += 1
            up += 1
        elif s[j] == 'D':
            lvl -= 1
            down += 1
        i = j
        while lvl != 0:
            i += 1
            if s[i] == 'U':
                lvl += 1
            elif s[i] == 'D':
                lvl -= 1
        j = i + 1
    return down

if __name__ == '__main__':
