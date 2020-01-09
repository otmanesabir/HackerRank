#!/bin/python3

import math
import os
import random
import re
import sys


# Complete the miniMaxSum function below.
def miniMaxSum(arr):
    min_val = arr[0]
    max_val = arr[0]
    for x in arr:
        if min_val > x:
            min_val = x
        if max_val < x:
            max_val = x
    total = sum(arr)
    print(total-max_val, end = ' ')
    print(total-min_val)

if __name__ == '__main__':
    arr = list(map(int, input().rstrip().split()))

    miniMaxSum(arr)
