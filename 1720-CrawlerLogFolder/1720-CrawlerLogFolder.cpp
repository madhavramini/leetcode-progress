// Last updated: 17/08/2025, 20:25:51
class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> dirLevel;
        for (string op : logs) {
            if (op != "./" && op != "../") dirLevel.push(op);
            if (op == "./") continue;
            if (op == "../" && !dirLevel.empty()) dirLevel.pop();
        }
        return dirLevel.size();
    }
};