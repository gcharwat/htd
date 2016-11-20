/*
 * File:   LabeledPathFactory.hpp
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

#ifndef HTD_HTD_LABELEDPATHFACTORY_HPP
#define HTD_HTD_LABELEDPATHFACTORY_HPP

#include <htd/Globals.hpp>
#include <htd/IMutableLabeledPath.hpp>

namespace htd
{
    /**
     *  Factory class for the default implementation of the IMutableLabeledPath interface.
     */
    class LabeledPathFactory
    {
        public:
            /**
             *  Constructor for the factory class.
             *
             *  @param[in] manager   The management instance to which the new factory class belongs.
             */
            HTD_API LabeledPathFactory(const htd::LibraryInstance * const manager);

            /**
             *  Copy constructor for the factory class.
             *
             *  @param[in] original The original factory class which shall be copied.
             */
            HTD_API LabeledPathFactory(const LabeledPathFactory & original);

            /**
             *  Copy assignment operator for the factory class.
             *
             *  @param[in] original The original factory class which shall be copied.
             */
            HTD_API LabeledPathFactory & operator=(const LabeledPathFactory & original);

            /**
             *  Destructor of the factory class.
             */
            HTD_API virtual ~LabeledPathFactory();

            /**
             *  Create a new IMutableLabeledPath object.
             *
             *  @return A new IMutableLabeledPath object.
             */
            HTD_API htd::IMutableLabeledPath * getLabeledPath(void) const;

            /**
             *  Create a new IMutableLabeledPath object.
             *
             *  @param[in] original The original labeled path acting as template for the created graph.
             *
             *  @return A new IMutableLabeledPath object identical to the given original graph.
             */
            HTD_API htd::IMutableLabeledPath * getLabeledPath(const htd::ILabeledPath & original) const;

            /**
             *  Set the default implementation of the IMutableLabeledPath interface.
             *
             *  @note When calling this method the control over the memory regions of the object instance of the original implementation
             *  is transferred to the factory class. Deleting the object instance provided to this method outside the factory class or
             *  assigning the same object instance multiple times will lead to undefined behavior.
             *
             *  @param[in] original The new default implementation of the IMutableLabeledPath interface.
             */
            HTD_API void setConstructionTemplate(htd::IMutableLabeledPath * original);

            /**
             *  Access the mutable interface of a given labeled path.
             *
             *  @return The mutable interface of the given labeled path.
             */
            HTD_API htd::IMutableLabeledPath & accessMutableLabeledPath(htd::ILabeledPath & original) const;

            /**
             *  Access the mutable interface of a given labeled path.
             *
             *  @return The mutable interface of the given labeled path.
             */
            HTD_API const htd::IMutableLabeledPath & accessMutableLabeledPath(const htd::ILabeledPath & original) const;

        private:
            /**
             *  A pointer to a clean instance of the default implementation.
             */
            htd::IMutableLabeledPath * constructionTemplate_;
    };
}

#endif /* HTD_HTD_LABELEDPATHFACTORY_HPP */
