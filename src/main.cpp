#include <string>
#include <iostream>

#include "Graph.h"

int main() {

    int no_of_lines, power_iterations;
    std::string from, to;

    std::cin >> no_of_lines;
    std::cin >> power_iterations;

    Graph pages;

    for(int i = 0; i < no_of_lines; i++) {

        std::cin >> from;
        std::cin >> to;
        pages.InsertEdge(from, to);
    }

    //Create a graph object
    pages.PageRank(power_iterations);
}