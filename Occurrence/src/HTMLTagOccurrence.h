/*
 * WildcardOccurrence.h
 *
 *  Created on: Oct 1, 2015
 *      Author: root
 */

#ifndef OCCURRENCE_SRC_HTMLTAGOCCURRENCE_H_
#define OCCURRENCE_SRC_HTMLTAGOCCURRENCE_H_


#include "Occurrence.h"
#include <string>

namespace Occurrence
{

class HTMLTagOccurrence : public Occurrence<std::string>
{
public:
	HTMLTagOccurrence(std::string occ);
	void handle(std::string& data);
};

}


#endif /* OCCURRENCE_SRC_HTMLTAGOCCURRENCE_H_ */
