#include "MatrixGraph.h"
#include "ListGraph.h"
#include "ArcGraph.h"
#include "SetGraph.h"
#include <iostream>
#include "Functions.h"


int main(int argc, const char* argv[]) {
    MatrixGraph ListGraph(9);
    ListGraph.AddEdge(0, 1);
    ListGraph.AddEdge(0, 5);
    ListGraph.AddEdge(1, 2);
    ListGraph.AddEdge(1, 3);
    ListGraph.AddEdge(1, 5);
    ListGraph.AddEdge(1, 6);
    ListGraph.AddEdge(3, 2);
    ListGraph.AddEdge(3, 4);
    ListGraph.AddEdge(3, 6);
    ListGraph.AddEdge(5, 4);
    ListGraph.AddEdge(5, 6);
    ListGraph.AddEdge(6, 4);
    ListGraph.AddEdge(7, 8);

    BFS(ListGraph, [](int vertex) { std::cout << vertex << " "; });
    std::cout << std::endl;
    DFS(ListGraph, [](int vertex) { std::cout << vertex << " "; });
    std::cout << std::endl;
    for (int vertex : topologicalSort(ListGraph)) {
        std::cout << vertex << " ";
    }
    std::cout << std::endl;

    MatrixGraph matrixGraph(9);
    matrixGraph.AddEdge(0, 1);
    matrixGraph.AddEdge(0, 5);
    matrixGraph.AddEdge(1, 2);
    matrixGraph.AddEdge(1, 3);
    matrixGraph.AddEdge(1, 5);
    matrixGraph.AddEdge(1, 6);
    matrixGraph.AddEdge(3, 2);
    matrixGraph.AddEdge(3, 4);
    matrixGraph.AddEdge(3, 6);
    matrixGraph.AddEdge(5, 4);
    matrixGraph.AddEdge(5, 6);
    matrixGraph.AddEdge(6, 4);
    matrixGraph.AddEdge(7, 8);

    BFS(matrixGraph, [](int vertex) { std::cout << vertex << " "; });
    std::cout << std::endl;
    DFS(matrixGraph, [](int vertex) { std::cout << vertex << " "; });
    std::cout << std::endl;
    for (int vertex : topologicalSort(matrixGraph)) {
        std::cout << vertex << " ";
    }
    std::cout << std::endl;

    ArcGraph ArcGraph(9);
    ArcGraph.AddEdge(0, 1);
    ArcGraph.AddEdge(0, 5);
    ArcGraph.AddEdge(1, 2);
    ArcGraph.AddEdge(1, 3);
    ArcGraph.AddEdge(1, 5);
    ArcGraph.AddEdge(1, 6);
    ArcGraph.AddEdge(3, 2);
    ArcGraph.AddEdge(3, 4);
    ArcGraph.AddEdge(3, 6);
    ArcGraph.AddEdge(5, 4);
    ArcGraph.AddEdge(5, 6);
    ArcGraph.AddEdge(6, 4);
    ArcGraph.AddEdge(7, 8);

    BFS(ArcGraph, [](int vertex) { std::cout << vertex << " "; });
    std::cout << std::endl;
    DFS(ArcGraph, [](int vertex) { std::cout << vertex << " "; });
    std::cout << std::endl;
    for (int vertex : topologicalSort(ArcGraph))
    {
        std::cout << vertex << " ";
    }
    std::cout << std::endl;

    SetGraph setGraph(9);
    setGraph.AddEdge(0, 1);
    setGraph.AddEdge(0, 5);
    setGraph.AddEdge(1, 2);
    setGraph.AddEdge(1, 3);
    setGraph.AddEdge(1, 5);
    setGraph.AddEdge(1, 6);
    setGraph.AddEdge(3, 2);
    setGraph.AddEdge(3, 4);
    setGraph.AddEdge(3, 6);
    setGraph.AddEdge(5, 4);
    setGraph.AddEdge(5, 6);
    setGraph.AddEdge(6, 4);
    setGraph.AddEdge(7, 8);

    BFS(setGraph, [](int vertex) { std::cout << vertex << " "; });
    std::cout << std::endl;
    DFS(setGraph, [](int vertex) { std::cout << vertex << " "; });
    std::cout << std::endl;
    for (int vertex : topologicalSort(setGraph))
    {
        std::cout << vertex << " ";
    }
    std::cout << std::endl;

    return 0;
}
