#include<bits/stdc++.h>
using namespace std;
class Graph
{
    vector<pair<int,pair<int, int>>> neighbours(int u)// neighbour, weight, node
    {

        vector<pair<int,pair<int, int>>> neigh;
        if(u >= nodes) return neigh;
        for(int v=0; v < nodes; v++)
            if(adjMat[u][v].first!=0)
                neigh.push_back({v, {adjMat[u][v].first, adjMat[u][v].second}});
        
        return neigh;
    }
};
//Time Constrained Roadmap Feature:
vector<vector<int>> pathways;
vector<pair<int, int>> getPathScores(vector<vector<int>>& paths) 
{
    vector<pair<int, int>> scores;
    for (auto& p:paths) 
    {
        int time=0;
        int importance=0;
        for(int topic:p)
        {
            time+=topicTime[topic];
            importance+=topicImportance[topic];
        }
        scores.push_back({time, importance});
    }
    return scores;
}

map<string, int> importance;
void dfsPaths(string cur, string tar, unordered_map<string, bool>& visited, vector<string>& path, vector<vector<string>>& allPaths)
{
    if(cur == tar)
    {
        allPaths.push_back(path);
        return;
    } 
    int u=node_name[cur];
    for(string &n: graph.neighbours(u))
    {
        if(!visited[n])
        {
            visited[n]= true;
            path.push_back(n);
            dfsPaths(n, tar, visited, path, allPaths);
            path.pop_back();
            visited[n]= false;
        }
    }
}

optimalPath()

int main()
{
    return 0;
}