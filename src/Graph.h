#include <string>
#include <map>
#include <set>

class Graph {
    private:
        std::map<std::string, std::set<std::pair<std::string, float>>> AdjacencyList {};
        std::map<std::string, int> Outdegrees {};

    public:
        void InsertEdge(std::string from, std::string to);
        void PageRank(int n);
};