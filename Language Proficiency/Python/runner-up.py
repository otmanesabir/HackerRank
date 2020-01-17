def second_min(l):
    first = min(l)
    second = first
    for x in l:
        if x > first:
            second = first
            first = x
        elif second < x and first != x:
            second = x
    return second


if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())
    l = list(arr)
    print(second_min(l))

