#pragma once
#include <memory>
#include <vector>
#include "Graph.hpp"
#include <cstddef>


class CompleteGraph : public Graph {


    CompleteGraph() = default;

    virtual ~CompleteGraph() = default;

    bool edge_exists((void) size_t i, (void)size_t j) const override{return true;}

};