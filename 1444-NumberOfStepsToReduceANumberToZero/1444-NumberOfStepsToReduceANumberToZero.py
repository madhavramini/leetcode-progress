# Last updated: 20/07/2025, 20:57:21
class Solution:
    def numberOfSteps(self, num: int) -> int:
        steps = 0
        while(num!=0):
            if num%2 != 0:
                num-=1

            else:
                num/=2
            steps+=1
        return steps
        