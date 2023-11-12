#include <string>

#include "Graph.h"

// Insert a new edge into the Graph
void Graph::InsertEdge(std::string from, std::string to) {

    AdjacencyList[from].emplace(to);
}

// prints the PageRank of all pages after p powerIterations in ascending alphabetical order
//  of webpages and rounding rank to two decimal places
void Graph::PageRank(int n){ }