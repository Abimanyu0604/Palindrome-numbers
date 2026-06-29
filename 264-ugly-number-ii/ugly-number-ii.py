class Solution:
    def nthUglyNumber(self, n: int) -> int:
        ugly = [1] * n

        p2 = 0
        p3 = 0
        p5 = 0

        for i in range(1, n):
            n2 = ugly[p2] * 2
            n3 = ugly[p3] * 3
            n5 = ugly[p5] * 5

            ugly[i] = min(n2, n3, n5)

            if ugly[i] == n2:
                p2 += 1

            if ugly[i] == n3:
                p3 += 1

            if ugly[i] == n5:
                p5 += 1

        return ugly[n - 1]