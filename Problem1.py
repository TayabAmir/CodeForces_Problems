def SieveOfEratosthenes(num):
    prime = [True for i in range(num+1)]
    p = 2
    while (p * p <= num):
        if (prime[p] == True):
            for i in range(p * p, num+1, p):
                prime[i] = False
        p += 1
    prime[0] = prime[1] = False
    return prime

if __name__ == "__main__":
    t = int(input())
    test_case = 1
    
    with open("output.txt", "w") as file:
        while test_case <= t:
            n = int(input())
            primes = SieveOfEratosthenes(n)
            ans = 0
            for i in range(2, len(primes)):
                if primes[i] and primes[i-2]:
                    ans += 1
            if n >= 5:
                ans += 1
            file.write(f"Case #{test_case}: {ans}\n")
            test_case += 1