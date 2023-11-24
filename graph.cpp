#include "graph.h"

void Graph::addEdge(string u, string v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void Graph::BFS(string start) {
    unordered_map<string, bool> visited;
    for (auto i : adj)
        visited[i.first] = false;

    queue<pair<string, int>> q;
    visited[start] = true;
    q.push({ start, 0 });

    while (!q.empty()) {
        string node = q.front().first;
        int dist = q.front().second;
        q.pop();

        for (string i : adj[node]) {
            if (!visited[i]) {
                visited[i] = true;
                q.push({ i, dist + 1 });
            }
        }

        if (dist <= 3 && node != start)
            cout << start << " и " << node << " знакомы через " << dist << " рукопожатия" << endl;
    }
}