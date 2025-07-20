// Last updated: 20/07/2025, 20:57:51
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result;
        for (int i = 0; i+1 < numbers.size(); i++) {
            int l = i+1;
            int r = numbers.size()-1;
            int t = target - numbers[i];
            while (l<=r) {
                int m = (l+r)/2;
                if (numbers[m]==t) { 
                    result = {i+1,m+1};
                    return result;
                }
                else if (numbers[m]>t) r = m-1;
                else l = m+1;
            }
        }
        return result;
    }
};