#include "MatrixGraph.h"
#include "ListGraph.h"
#include "ArcGraph.h"
#include "SetGraph.h"
#include <iostream>
#include "Functions.h"


int main(int argc, const char* argv[]) {
    ListGraph ListGraph1(9);
    ListGraph1.AddEdge(0, 1);
    ListGraph1.AddEdge(0, 5);
    ListGraph1.AddEdge(1, 2);
    ListGraph1.AddEdge(1, 3);
    ListGraph1.AddEdge(1, 5);
    ListGraph1.AddEdge(1, 6);
    ListGraph1.AddEdge(3, 2);
    ListGraph1.AddEdge(3, 4);
    ListGraph1.AddEdge(3, 6);
    ListGraph1.AddEdge(5, 4);
    ListGraph1.AddEdge(5, 6);
    ListGraph1.AddEdge(6, 4);
    ListGraph1.AddEdge(7, 8);

    std::cout << std::endl << "ListGraph original vertices:" << ListGraph1.VerticesCount() << std::endl;
    BFS(ListGraph1, [](int vertex) { std::cout << vertex << " "; });
    std::cout << std::endl;
    DFS(ListGraph1, [](int vertex) { std::cout << vertex << " "; });
    std::cout << std::endl;
    for (int vertex : topologicalSort(ListGraph1)) {
        std::cout << vertex << " ";
    }
    std::cout << std::endl;

    ListGraph ListGraph2(ListGraph1);
    std::cout << std::endl << "ListGraph copy vertices:" << ListGraph1.VerticesCount() << std::endl;
    BFS(ListGraph1, [](int vertex) { std::cout << vertex << " "; });
    std::cout << std::endl;
    DFS(ListGraph1, [](int vertex) { std::cout << vertex << " "; });
    std::cout << std::endl;
    for (int vertex : topologicalSort(ListGraph1)) {
        std::cout << vertex << " ";
    }
    std::cout << std::endl;

    MatrixGraph MatrixGraph1(ListGraph1);
    std::cout << std::endl << "MatrixGraph copy vertices:" << MatrixGraph1.VerticesCount() << std::endl;
    BFS(MatrixGraph1, [](int vertex) { std::cout << vertex << " "; });
    std::cout << std::endl;
    DFS(MatrixGraph1, [](int vertex) { std::cout << vertex << " "; });
    std::cout << std::endl;
    for (int vertex : topologicalSort(MatrixGraph1)) {
        std::cout << vertex << " ";
    }
    std::cout << std::endl;

    ArcGraph ArcGraph1(MatrixGraph1);
    std::cout << std::endl << "ArcGraph copy vertices:" << ArcGraph1.VerticesCount() << std::endl;
    BFS(ArcGraph1, [](int vertex) { std::cout << vertex << " "; });
    std::cout << std::endl;
    DFS(ArcGraph1, [](int vertex) { std::cout << vertex << " "; });
    std::cout << std::endl;
    for (int vertex : topologicalSort(ArcGraph1)) {
        std::cout << vertex << " ";
    }
    std::cout << std::endl;

    SetGraph SetGraph1(ArcGraph1);
    std::cout << std::endl << "SetGraph copy vertices:" << SetGraph1.VerticesCount() << std::endl;
    BFS(SetGraph1, [](int vertex) { std::cout << vertex << " "; });
    std::cout << std::endl;
    DFS(SetGraph1, [](int vertex) { std::cout << vertex << " "; });
    std::cout << std::endl;
    for (int vertex : topologicalSort(SetGraph1)) {
        std::cout << vertex << " ";
    }
    std::cout << std::endl;

    return 0;
}
