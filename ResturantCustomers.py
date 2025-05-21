def resturantCustomers():
    n = int(input())
    arrivalTimes = set()
    leavingTimes = set()
    lastPersonToArrive = 0
    for i in range(n):
        a, b = map(int, input().split())
        lastPersonToArrive = max(a, lastPersonToArrive)
        arrivalTimes.add(a)
        leavingTimes.add(b)

    counter = 0
    largestAmountOfCustomers = 0
    lastPersonToArrive += 1
    for i in range(lastPersonToArrive):
        if i in arrivalTimes:
            counter += 1
        if i in leavingTimes:
            counter -= 1
        largestAmountOfCustomers = max(counter, largestAmountOfCustomers)
    print(largestAmountOfCustomers)

def main():
    resturantCustomers()
main()