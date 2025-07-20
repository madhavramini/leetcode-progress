// Last updated: 20/07/2025, 20:58:10
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        for (auto x: strs)
        {
            string word = x;
            sort(word.begin(), word.end());
            mp[word].push_back(x);
        }

        vector<vector<string>> group;
        for(auto x:mp)
        {
            group.push_back(x.second);
        }
        return group;
    }
};