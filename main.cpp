#include "graph.h"

int main() {
    setlocale(LC_ALL, " ");
    Graph g;
    g.addEdge("Олег", "Никита");
    g.addEdge("Никита", "Иван");
    g.addEdge("Иван", "Роман");
    g.addEdge("Роман", "Женя");

    for (auto i : g.adj)
        g.BFS(i.first);

    return 0;
}