#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>

using namespace std;

class Graph {
public:
    unordered_map<string, vector<string>> adj;

    void addEdge(string u, string v);
    void BFS(string start);
};