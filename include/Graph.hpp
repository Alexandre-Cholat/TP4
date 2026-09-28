#pragma once
#include <memory>
#include <vector>

// abstract class: at leat one virtual method (virtual void foo() = 0;)
class Graph {

    public:

    // Constructor
    Graph() = default;

    virtual ~Graph() = default;
    virtual size_t size() const = 0;
    virtual size_t nb_edges() const = 0;
    virtual bool edge_exists(size_t i, size_t j) const = 0;
    virtual std::vector<size_t> get_neighbors(size_t i) const = 0;


};