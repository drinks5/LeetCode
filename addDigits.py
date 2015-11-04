"""
字符数组相加
"""
class Solution(object):
    def addDigits(self, num):
        if num == 1:
			return 1
		elif num < 0:
			return 0
		else:
			while( len(str(num))>1 ):
				tmp = 0
				for var in str(num):
					tmp += int(var)
				num = tmp
			return num