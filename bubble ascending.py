''' make bubble short ascending '''
import random
import time
import sys

def bubble_sort(list):
    ''' bubble sort '''
    for i in range(len(list)):
        for j in range(len(list)-1):
            if list[j] > list[j+1]:
                list[j], list[j+1] = list[j+1], list[j]
    return list

def main():
    ''' main '''
    list = []
    for i in range(100):
        list.append(random.randint(1, 100))
    print(list)
    start = time.time()
    bubble_sort(list)
    end = time.time()
    print(list)
    print('time: ', end-start)

if __name__ == '__main__':
    main()

