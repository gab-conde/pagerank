#include <string>
#include <map>
#include <set>

#include "Graph.h"

// Insert a new edge into the Graph
void Graph::InsertEdge(std::string from, std::string to) {

    AdjacencyList[to].emplace(std::make_pair(from, 0.0));

    if (Outdegrees.find(to) != Outdegrees.end()) {
        Outdegrees[to]++;
    }
    else {
        Outdegrees.emplace(to, 1);
    }
}

// Perform p power iterations and display results
void Graph::PageRank(int n){}