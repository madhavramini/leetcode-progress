# Last updated: 20/07/2025, 20:58:05
class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        digits = map(str, digits)
        num = ""
        for digit in digits:
            num += digit
        num = str(int(num) + 1)
        new = []
        for digit in num:
            new.append(int(digit))
        return new