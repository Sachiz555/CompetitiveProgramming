
def diceCombinations():
    dp = [1]
    for i in range(int(input())):
        dp.append(sum(dp[-6:]) % (10**9 + 7))
    print(dp[-1])
diceCombinations()