#include "AdjacenceMatrixWeightedGraph.hpp"
#include <iostream>
#include <cstddef>
#include <memory>


AdjacenceMatrixWeightedGraph::AdjacenceMatrixWeightedGraph(const std::vector<std::vector<size_t>>& matrix) 
    : edges(matrix) 
{
}

size_t AdjacenceMatrixWeightedGraph:: size() const{
    return edges.size();
}
size_t AdjacenceMatrixWeightedGraph:: nb_edges() const {
    // increment nume for every weighted connection)
    size_t nume = 0;
    for(size_t i = 0; i < size(); i++){
        for(size_t j =0; j < size(); j++){
            if (edges[i][j] != 0){
                nume++;
            }
        }
    }

    return nume;
}

bool AdjacenceMatrixWeightedGraph:: edge_exists(size_t i, size_t j) const {
    return (edges[i][j] > 0);
}
std::vector<size_t> AdjacenceMatrixWeightedGraph:: get_neighbors(size_t i)  const{
    std::vector<size_t> neighbors;
    
    if (i < edges.size()) {
        for (size_t j = 0; j < edges[i].size(); ++j) {

            // if weight diff than 0
            if (edge_exists(i,j) && edges[i][j] != 0 ) {
                neighbors.push_back(j);
            }
        }
    }
    
    return neighbors;
}

size_t AdjacenceMatrixWeightedGraph:: edge_weight(size_t i, size_t j){
    size_t weight = 0;
    if(edge_exists(i,j)){
        weight = edges[i][j];
    }
    
    return weight;

}
