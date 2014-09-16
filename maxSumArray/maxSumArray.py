#!/usr/bin/python
#^_^*--coding:utf8

def get_max_sum(a):
	imax = a[0]
	isum = 0

	for i in a:
		if isum < 0:
			isum = i
		else:
			isum = isum+i

		if isum > imax:
			imax = isum
	
	return isum

t = [2,-1,4,-3,5,0]

print get_max_sum(t)

