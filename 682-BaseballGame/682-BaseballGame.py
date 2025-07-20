# Last updated: 20/07/2025, 20:57:33
class Solution:
    def calPoints(self, operations: List[str]) -> int:
        score = []
        for c in operations:
            match c:
                case '+':
                    score.append(score[-1] + score[-2])
                case 'D':
                    score.append(2*score[-1])
                case 'C':
                    score.pop()
                case _:
                    score.append(int(c))
        return sum(score)