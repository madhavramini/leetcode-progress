// Last updated: 20/07/2025, 20:57:17
class Solution {
public:
    long long calculateScore(vector<string>& instructions, vector<int>& values) {
        long long score = 0;
        long long i = 0;
        unordered_map<int, bool> visited;
        while(i<instructions.size())
        {
            if(visited[i]) break;
            else if(instructions[i]=="add")
            {
                visited[i]=true;
                score+=values[i];
                i++;
            }
            else if(instructions[i]=="jump")
            {
                visited[i]=true;
                i+=values[i];
            }
            else
            {}
        }
        return score;
    }
};