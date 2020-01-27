# Enter your code here. Read input from STDIN. Print output to STDOUT

from itertools import combinations

def main():
    raw = input()
    raw = raw.split(' ')
    ans = []
    x = 1
    # ans = list(map("".join, permutations(sorted(lst[0]), int(lst[1]))))
    while x <= int(raw[1]):
        ans.extend(list(map(''.join, combinations(sorted(raw[0]),x))))
        x += 1
    print('\n'.join(ans))

if __name__== "__main__":
  main()
