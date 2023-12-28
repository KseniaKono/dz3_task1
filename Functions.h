#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "IGraph.h"
#include <vector>
#include <functional>
#include <deque>
#include <queue>

void BFS(const IGraph& graph, int vertex, std::vector<bool>& visited, std::function<void(int)>& func);

void BFS(const IGraph& graph, std::function<void(int)> func);

void DFS(const IGraph& graph, int vertex, std::vector<bool>& visited, std::function<void(int)>& func);

void DFS(const IGraph& graph, std::function<void(int)> func);

void topologicalSort(const IGraph& graph, int vertex, std::vector<bool>& visited, std::deque<int>& sorted);

std::deque<int> topologicalSort(const IGraph& graph);

#endif // FUNCTIONS_H
