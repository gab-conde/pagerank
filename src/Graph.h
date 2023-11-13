#include <string>
#include <vector>
#include <map>

class Graph {
    private:
        std::map<std::string, std::vector<std::pair<std::string, float>>> AdjacencyList {};
        std::map<std::string, int> Outdegrees {};
        std::map<std::string, float> RankList {};

    public:
        void InsertEdge(std::string from, std::string to);
        void PageRank(int n);

    private:
        void RankPages();
        void InitializeRankList();
        void PrintRanks() const;
};