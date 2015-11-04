#! /usr/bin/env python
# encoding: utf-8
__author__ = 'drinksober'

"""
@version: 0.1
@license: Apache Licence 
@contact: drinksober@foxmail.com
@site: drinksober.com
@file: quicksort.py
@time: 2015/10/19 21:22
"""
import time
import random

class QuickSort(object):
    def sub_sort(self, sub_array, low, high):
        key = sub_array[low]
        while low < high:
            while low < high and sub_array[high] >= key:
                high -= 1
            while low < high and sub_array[high] < key:
                sub_array[low] = sub_array[high]
                low += 1
                sub_array[high] = sub_array[low]
        sub_array[low] = key
        return low

    def quick_sort(self, array, low, high):
        if low < high:
            key_index = self.sub_sort(array, low, high)
            self.quick_sort(array, low, key_index)
            self.quick_sort(array, key_index+1, high)

if __name__=='__main__':
    list = []
    # for i in range(1,100):
    #     list.append(random.randint(i,100))

    test_array = [8, 10, 9, 6, 4, 16, 5, 13, 26, 18, 2, 45, 34, 23, 1, 7, 3]
    # print(len(test_array))
    test_array1 = [8, 8, 8, 8, 8, 8, 8, 8, 8]
    quicksort = QuickSort( )
    quicksort.quick_sort(test_array, 0 ,len(test_array)-1)
    print(test_array)
    # quicksort.quick_sort(list, 0 ,len(list)-1)
    # print('----\n')
    # print(list)
    print(5//2)
    def extendList(val, list=[]):
        list.append(val)
        return list

    list1 = extendList(10)
    list2 = extendList(123,[])
    list3 = extendList('a')

    print( "list1 = %s" % list1)
    print( "list2 = %s" % list2)
    print( "list3 = %s" % list3)
#
    def multipliers():
        return [lambda x : i * x for i in range(4)]

    print( [m(2) for m in multipliers()])


