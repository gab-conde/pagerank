#include <string>
#include <map>
#include <set>
#include <iostream>
#include <iomanip>
#include <algorithm>

#include "Graph.h"

// Insert a new edge into the Graph
void Graph::InsertEdge(std::string from, std::string to) {

    AdjacencyList[to].push_back(std::make_pair(from, 0.0f));
    sort(AdjacencyList[to].begin(), AdjacencyList[to].end());

    if (Outdegrees.find(to) != Outdegrees.end()) {
        Outdegrees[to]++;
    }
    else {
        Outdegrees.emplace(to, 1);
    }
}

// Perform p power iterations and display results
void Graph::PageRank(int n){}

// Calculate the rank of each page
void Graph::RankPages() {
    
    for (auto page : AdjacencyList) {

        for (auto pair : page.second) {
            
            pair.second = 1.0 / Outdegrees[pair.first];
        }
    }
}

// Initialize all power iteration ranks to 1/|V|
void Graph::InitializeRanks() {

    int V = AdjacencyList.size();

    for (auto iter = AdjacencyList.begin(); iter != AdjacencyList.end(); iter++) {

        RankList.emplace(iter->first, 1.0f / V);
    }
}

// Print all pages and ranks
void Graph::PrintRanks() const {

    for (auto iter = RankList.begin(); iter != RankList.end(); iter++) {

        std::cout << iter->first << " " << std::fixed << std::setprecision(2) << iter->second << std::endl;
    }
}