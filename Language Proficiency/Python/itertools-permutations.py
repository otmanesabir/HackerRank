# Enter your code here. Read input from STDIN. Print output to STDOUT
from itertools import permutations


def main(string):
    lst = string.split(' ')
    ans = list(map("".join, permutations(sorted(lst[0]), int(lst[1]))))
    print("\n".join(ans))


if __name__ == '__main__':
    n = input()
    main(n)
