#!/bin/python3

import os
import sys

# Complete the solve function below.
def solve(n, operations):
    S=0
    for i in operations:
        a=i[0]
        b=i[1]
        jars=(b-a)+1
        S+=jars*i[2]
    return((S//n))
    

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    nm = input().split()

    n = int(nm[0])

    m = int(nm[1])

    operations = []

    for _ in range(m):
        operations.append(list(map(int, input().rstrip().split())))

    result = solve(n, operations)

    fptr.write(str(result) + '\n')

    fptr.close()
