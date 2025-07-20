// Last updated: 20/07/2025, 20:57:38
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for(int num : nums)
        {
            freq[num] = 0;
        }
        for(int num : nums)
        {
            freq[num]++;
        }
        vector<int> ans;
        priority_queue<pair<int,int>> pq;
        for(auto& pair: freq)
        {
            pq.push({pair.second, pair.first});
        }

        while(k--) {
            int el = pq.top().second;
            pq.pop();
            ans.push_back(el);
        }

        return ans;
    }
};