class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        c = 0
        i = -1
        while s[i] == ' ':
            i -= 1
        while i >= -len(s) and s[i] != ' ':
            c += 1
            i -= 1
        return c