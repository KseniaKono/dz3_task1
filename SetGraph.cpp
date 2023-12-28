#include "SetGraph.h"

SetGraph::SetGraph(int size) : adjacencySets(size) {
}

SetGraph::SetGraph(const IGraph& graph) : adjacencySets(graph.VerticesCount()) {
    for (int from = 0; from < graph.VerticesCount(); ++from) {
        for (int to : graph.GetNextVertices(from)) {
            adjacencySets[from].insert(to);
        }
    }
}

SetGraph::~SetGraph() {
}

void SetGraph::AddEdge(int from, int to) {
    adjacencySets[from].insert(to);
}

int SetGraph::VerticesCount() const {
    return adjacencySets.size();
}

std::vector<int> SetGraph::GetNextVertices(int vertex) const {
    assert(0 <= vertex && vertex < VerticesCount());
    return std::vector<int>(adjacencySets[vertex].begin(), adjacencySets[vertex].end());
}

std::vector<int> SetGraph::GetPrevVertices(int vertex) const {
    assert(0 <= vertex && vertex < VerticesCount());
    std::vector<int> prevVertices;
    for (int from = 0; from < VerticesCount(); ++from) {
        if (adjacencySets[from].count(vertex) > 0) {
            prevVertices.push_back(from);
        }
    }
    return prevVertices;
}
