#include <string>
#include <map>
#include <set>

class Graph {
    private:
        std::map<std::string, std::set<std::string>> AdjacencyList {};

    public:
        void InsertEdge(std::string from, std::string to);
        void PageRank(int n);
};