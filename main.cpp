#include "graph.h"

int main() {
    setlocale(LC_ALL, " ");
    Graph g;
    g.addEdge("����", "�����");
    g.addEdge("�����", "����");
    g.addEdge("����", "�����");
    g.addEdge("�����", "����");

    for (auto i : g.adj)
        g.BFS(i.first);

    return 0;
}