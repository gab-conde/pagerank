#include <string>
#include <map>
#include <set>

#include "Graph.h"

// Insert a new edge into the Graph
void Graph::InsertEdge(std::string from, std::string to) {

    AdjacencyList[to].emplace(std::make_pair(from, 0.0));
}

// prints the PageRank of all pages after p powerIterations in ascending alphabetical order
//  of webpages and rounding rank to two decimal places
void Graph::PageRank(int n){ }