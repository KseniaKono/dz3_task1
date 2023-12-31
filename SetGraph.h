#ifndef SETGRAPH_H
#define SETGRAPH_H

#include "IGraph.h"
#include <unordered_set>
#include <vector>
#include <cassert>

class SetGraph : public IGraph {
public:
    SetGraph(int size);
    SetGraph(const IGraph& graph);
    ~SetGraph();

    void AddEdge(int from, int to) override;
    int VerticesCount() const override;
    std::vector<int> GetNextVertices(int vertex) const override;
    std::vector<int> GetPrevVertices(int vertex) const override;

private:
    std::vector<std::unordered_set<int>> adjacencySets;
};

#endif // SETGRAPH_H
