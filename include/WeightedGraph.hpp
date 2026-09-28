#pragma once
#include <memory>
#include <vector>
#include "Graph.hpp"
#include <cstddef> // Required for size_t



// abstract class: at leat one virtual method (virtual void foo() = 0;)
class WeightedGraph : public Graph {
    public:
    
    WeightedGraph() = default;

    virtual ~WeightedGraph() = default;

    virtual size_t edge_weight(size_t i, size_t j) = 0;


};