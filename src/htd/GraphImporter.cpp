/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <htd/GraphImporter.hpp>

namespace htd
{
    class GraphImporter{
       
    public:
        
        htd::GraphImporter *computeDecomposition(const htd::IMultiHypergraph & graph) 
            {
                std::cout<<"a";
            };
           
//        htd::ITreeDecomposition * computeDecomposition(const htd::IMultiHypergraph & graph, const std::vector<htd::IDecompositionManipulationOperation *> & manipulationOperations) {};
//        htd::ITreeDecomposition * computeDecomposition(const htd::IMultiHypergraph & graph, const htd::IPreprocessedGraph & preprocessedGraph) {};
//        htd::ITreeDecomposition * computeDecomposition(const htd::IMultiHypergraph & graph, const htd::IPreprocessedGraph & preprocessedGraph, const std::vector<htd::IDecompositionManipulationOperation *> & manipulationOperations){};
//
//        ITreeDecompositionAlgorithm * clone(void) {};
    };
}