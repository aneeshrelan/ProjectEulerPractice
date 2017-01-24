#! /usr/bin/python

file = "13-data.txt"

nums = []

with open(file) as f:
	for line in f:
		nums.append(int(line))

print str(sum(nums))[:10]
