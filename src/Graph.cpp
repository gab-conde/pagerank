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

    if (Outdegrees.find(from) != Outdegrees.end()) {
        Outdegrees[from]++;
    }
    else {
        Outdegrees.emplace(from, 1);
    }
}

// Perform p power iterations and display results
void Graph::PageRank(int n){

    RankPages();
    InitializeRankList();

    for (int i = 1; i < n; i++) {

        std::map<std::string, float> newRanks;

        for (auto page : AdjacencyList) {

            float sum = 0;

            for (auto pair : page.second) {

                sum += pair.second * RankList[pair.first];
            }

            newRanks.emplace(page.first, sum);
        }

        for (auto page : newRanks) {

            RankList[page.first] = page.second;
        }
    }

    PrintRanks();
}

// Calculate the rank of each page
void Graph::RankPages() {
    
    for (auto& page : AdjacencyList) {

        for (auto& pair : page.second) {
            
            pair.second = 1.0 / Outdegrees[pair.first];
        }
    }
}

// Initialize all power iteration ranks to 1/|V|
void Graph::InitializeRankList() {

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