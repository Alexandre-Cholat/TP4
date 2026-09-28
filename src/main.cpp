#include <iostream>
#include "AdjacenceMatrixWeightedGraph.hpp"
#include "utils.hpp"
#include <memory>
#include <vector>

int main() {
    std::vector<std::vector<size_t>> vec = {
         {0, 12, 51},
         {1, 0, 5},
         {45, 14, 0}
    };
    AdjacenceMatrixWeightedGraph tram_net(vec);


    std::cout << "Time from a to c: " << (tram_net.edge_weight(0, 2)) << " minutes." << std::endl; 
    return EXIT_SUCCESS; 

}