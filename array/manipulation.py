#!/usr/bin/env python

n, m = map(int, input().split())
arr = []

for i in range(n + 10):
	arr.append(0)

max = 0
for i in range(m):
	a,b,k = map(int, input().split())
	for j in range(a, b+1):
		arr[j] += k
		if arr[j] >= max:
			max = arr[j]

print(max)