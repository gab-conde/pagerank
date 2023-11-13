#include <string>
#include <map>
#include <set>

#include "Graph.h"

// Insert a new edge into the Graph
void Graph::InsertEdge(std::string from, std::string to) {

    AdjacencyList[to].emplace(std::make_pair(from, 0.0));
}

// Perform p power iterations and display results
void Graph::PageRank(int n){}