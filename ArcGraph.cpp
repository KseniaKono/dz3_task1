#include "ArcGraph.h"

ArcGraph::ArcGraph(int size) : pairs(size) {
}

ArcGraph::ArcGraph(const IGraph& graph) : pairs() {
    for (int from = 0; from < graph.VerticesCount(); ++from) {
        for (int to : graph.GetNextVertices(from)) {
            pairs.push_back(std::make_pair(from, to));
        }
    }
}

ArcGraph::~ArcGraph() {
}

void ArcGraph::AddEdge(int from, int to) {
    pairs.push_back(std::make_pair(from, to));
}

int ArcGraph::VerticesCount() const {
    int countVertex = 0;
    for (const auto& pair : pairs) {
        countVertex = std::max({ countVertex, pair.first, pair.second });
    }
    return countVertex + 1;
}

std::vector<int> ArcGraph::GetNextVertices(int vertex) const {
    assert(0 <= vertex && vertex < VerticesCount());
    std::vector<int> nextVertices;
    for (const auto& pair : pairs) {
        if (pair.first == vertex) {
            nextVertices.push_back(pair.second);
        }
    }
    return nextVertices;
}

std::vector<int> ArcGraph::GetPrevVertices(int vertex) const {
    assert(0 <= vertex && vertex < VerticesCount());
    std::vector<int> prevVertices;
    for (const auto& pair : pairs) {
        if (pair.second == vertex) {
            prevVertices.push_back(pair.first);
        }
    }
    return prevVertices;
}
