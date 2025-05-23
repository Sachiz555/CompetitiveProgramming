MOD = 10**9+7
def CoinCombinations():
    n, x = map(int, input().split())
    arr = list(map(int, input().split()))
    dp = [x]
    counter = 0
    dpLength = len(dp)
    i = 0
    while i < dpLength:
        for value in arr:
            if dp[i]-value == 0:
                counter += 1
                continue
            elif dp[i]-value < 0:
                continue
            dp.append((dp[i]-value) % MOD)
        dpLength = len(dp)
        print(len(dp))
        i += 1
    print(counter % MOD)

    

CoinCombinations()