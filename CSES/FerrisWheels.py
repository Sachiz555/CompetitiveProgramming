# https://cses.fi/problemset/task/1090
def FerrisWheels():
    n, k = map(int, input().split())
    sortedList = list(map(int, input().split()))
    sortedList.sort()
    l = 0
    r = len(sortedList)-1
    counter = 0
    while(l <= r):
        if l == r:
            counter += 1
            break
        if sortedList[l] + sortedList[r] > k:
            r -= 1
        else:
            l += 1
            r -= 1
        counter += 1
    return counter
print(FerrisWheels())