/* 
 * File:   OrderingAlgorithm.hpp
 *
 * Author: ABSEHER Michael (abseher@dbai.tuwien.ac.at)
 * 
 * Copyright 2015-2016, Michael Abseher
 *    E-Mail: <abseher@dbai.tuwien.ac.at>
 * 
 * This file is part of htd.
 * 
 * htd is free software: you can redistribute it and/or modify it under 
 * the terms of the GNU General Public License as published by the Free 
 * Software Foundation, either version 3 of the License, or (at your 
 * option) any later version.
 * 
 * htd is distributed in the hope that it will be useful, but WITHOUT 
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY 
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public 
 * License for more details.

 * You should have received a copy of the GNU General Public License
 * along with htd.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef HTD_HTD_IORDERINGALGORITHM_HPP
#define	HTD_HTD_IORDERINGALGORITHM_HPP

#include <htd/Globals.hpp>
#include <htd/IHypergraph.hpp>
#include <htd/ConstCollection.hpp>

namespace htd
{
    class IOrderingAlgorithm
    {
        public:
            virtual ~IOrderingAlgorithm() = 0;
            
            virtual htd::ConstCollection<htd::vertex_t> computeOrdering(const htd::IMultiHypergraph & graph) const = 0;

            virtual void writeOrderingTo(const htd::IMultiHypergraph & graph, std::vector<htd::vertex_t> & target) const = 0;

            virtual IOrderingAlgorithm * clone(void) const = 0;
    };

    inline htd::IOrderingAlgorithm::~IOrderingAlgorithm() { }
}

#endif /* HTD_HTD_IORDERINGALGORITHM_HPP */
