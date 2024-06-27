class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int, int>degree;

    for (auto& edge : edges) {
        int u = edge[0];
        int v = edge[1];
        degree[u]++;
        degree[v]++;
    }
   
    for (auto& entry : degree) {
        if (entry.second == edges.size()) {
            return entry.first;
        }
    }
    
    return -1;
    }
};