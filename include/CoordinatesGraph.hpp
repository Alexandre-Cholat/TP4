#pragma once
#include <memory>
#include <vector>
#include "Graph.hpp"
#include "CompleteGraph.hpp"
#include <cstddef>


class  CoordinatesGraph: public Graph, public CompleteGraph {
    private:
    
    // 2D vector for n points (2*n) with x and y coord for each
    std::vector<std::vector<size_t>> points;


    public:

    // Constructor
    CoordinatesGraph(const std::vector<std::vector<size_t>>& matrix);


    ~CoordinatesGraph() = default;

    size_t edge_weight(size_t i, size_t j) override;

    size_t size() const override;
    size_t nb_edges() override;
    std::vector<size_t> get_neighbors(size_t i) override;

    size_t distance(size_t x1, size_t y1, size_t x2, size_t y2);




};