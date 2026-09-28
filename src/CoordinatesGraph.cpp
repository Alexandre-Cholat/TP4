#pragma once
#include <memory>
#include <vector>
#include "Graph.hpp"
#include "CompleteGraph.hpp"
#include <cstddef>


CoordinatesGraph::CoordinatesGraph(const std::vector<std::vector<size_t>>& matrix){
    points = matrix;
}

size_t CoordinatesGraph:: size() const{
    return points.size();
}

size_t CoordinatesGraph:: nb_edges() {
    if(points.size() < 1){return 0;}
    size_t product = 1
    for(size_t i = 2; i <= points.size(); i++){
        product = product * i;
    }
    return product;

}

std::vector<size_t> CoordinatesGraph:: get_neighbors(size_t i){
    // return vector of all points except point at index i
    return points.erase(points.begin()+i)
}


//Euclidean distance between two points of interest
size_t CoordinatesGraph:: distance(size_t x1, size_t y1, size_t x2, size_t y2){
    return std::sqrt(std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2));
}
