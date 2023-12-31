#ifndef MATRIXGRAPH_H
#define MATRIXGRAPH_H

#include <iostream>
#include <vector>
#include <queue>
#include <deque>
#include <functional>
#include <cassert>
#include "IGraph.h"


struct MatrixGraph : public IGraph {
public:
    MatrixGraph(int size);
    MatrixGraph(const IGraph& graph);
    ~MatrixGraph();

    void AddEdge(int from, int to) override;

    int VerticesCount() const override;

    std::vector<int> GetNextVertices(int vertex) const override;

    std::vector<int> GetPrevVertices(int vertex) const override;

private:
    std::vector<std::vector<int>> matrix;
};

#endif // MATRIXGRAPH_H
