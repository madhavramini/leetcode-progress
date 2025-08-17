// Last updated: 17/08/2025, 20:26:20
class Solution {
public:
    
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> indegree(numCourses);
        vector<vector<int>> dirGraph(numCourses);
        unordered_set<int> taken;
        int numTaken = 0;
        for (int i = 0; i < prerequisites.size(); i++) {
            dirGraph[prerequisites[i][1]].push_back(prerequisites[i][0]);
            indegree[prerequisites[i][0]]++;
        }
        queue<int> courseList;
        for (int c = 0; c < numCourses; c++) {
            if (indegree[c] == 0) courseList.push(c);
        }
        while (!courseList.empty()) {
            int n = courseList.size();
            for (int i = 0; i < n; i++) {
                int course = courseList.front();
                if (taken.count(course)) return false;
                courseList.pop();
                numTaken++;
                taken.insert(course);
                if (dirGraph[course].empty()) continue;
                for (int nc : dirGraph[course]) {
                    indegree[nc]--;
                    if (indegree[nc] == 0) {
                        courseList.push(nc);
                    }
                }
                dirGraph[course].clear();
            }
        }
        return numTaken == numCourses;
    }
};