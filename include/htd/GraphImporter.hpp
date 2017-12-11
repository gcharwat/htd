/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   GraphImporter.hpp
 * Author: kreshnik
 *
 * Created on December 10, 2017, 4:26 PM
 */

#ifndef GRAPHIMPORTER_HPP
#define GRAPHIMPORTER_HPP

#include <htd/ITreeDecompositionAlgorithm.hpp>


namespace htd
{
    class GraphImporter : public htd::ITreeDecompositionAlgorithm{
        
    public:
        GraphImporter();
    
        htd::ITreeDecomposition * computeDecomposition(const htd::IMultiHypergraph) ;
        
//        htd::ITreeDecomposition * computeDecomposition(const htd::IMultiHypergraph & graph, const std::vector<htd::IDecompositionManipulationOperation *> & manipulationOperations) ;
//        htd::ITreeDecomposition * computeDecomposition(const htd::IMultiHypergraph & graph, const htd::IPreprocessedGraph & preprocessedGraph) ;
//        htd::ITreeDecomposition * computeDecomposition(const htd::IMultiHypergraph & graph, const htd::IPreprocessedGraph & preprocessedGraph, const std::vector<htd::IDecompositionManipulationOperation *> & manipulationOperations);
//
//        ITreeDecompositionAlgorithm * clone(void);
    };
    
    
}


#endif /* GRAPHIMPORTER_HPP */
