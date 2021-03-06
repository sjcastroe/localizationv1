/*
 * Occurrence.cpp
 *
 *  Created on: Oct 2, 2015
 *      Author: root
 */

#include "Occurrence.h"
#include <string>

namespace Occurrence
{

template<typename OccType>
Occurrence<OccType>::Occurrence(OccType occ) : occurrence(occ) {}

template<typename OccType>
OccType Occurrence<OccType>::getOccurrence() const
{
	return occurrence;
}

template<typename OccType>
Occurrence<OccType>::~Occurrence() {}

}

template class Occurrence::Occurrence<std::string>;


