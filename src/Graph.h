#include <string>
#include <map>
#include <set>

class Graph {
    private:
        //Think about what member variables you need to initialize
        std::map<std::string, std::set<std::string>> AdjacencyList {};

    public:
        //Think about what helper functions you will need in the algorithm
        void InsertEdge(std::string from, std::string to);
        void PageRank(int n);
};