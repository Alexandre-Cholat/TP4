#pragma once
#include <memory>
#include <vector>
#include "WeightedGraph.hpp"

class AdjacenceMatrixWeightedGraph : public WeightedGraph {
    private:
    
    // 2D vector for edges with weights
    std::vector<std::vector<size_t>> edges;

    public:

    // Constructor
    AdjacenceMatrixWeightedGraph(const std::vector<std::vector<size_t>>& matrix);

    ~AdjacenceMatrixWeightedGraph() = default;

    size_t size() const override;
    size_t nb_edges() const override;
    size_t edge_weight(size_t i, size_t j)override;

    bool edge_exists(size_t i, size_t j) const override;
    std::vector<size_t> get_neighbors(size_t i) const override;


};