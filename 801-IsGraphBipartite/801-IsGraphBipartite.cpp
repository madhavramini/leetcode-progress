// Last updated: 17/08/2025, 20:26:02
class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        vector<int> colors(100,0);
        queue<int> q; 
        for (int i = 0; i < graph.size(); i++) {
            if (colors[i] != 0) continue;
            q.push(i);
            colors[i] = 1;
            while (!q.empty()) {
                int node = q.front();
                q.pop();
                for (int nei : graph[node]) {
                    if (colors[nei] == colors[node]) return false;
                    else if (colors[nei] == 0) {
                        q.push(nei);
                        colors[nei] = -1 * colors[node];
                    }
                }
            }
        }
        return true;
    }
};