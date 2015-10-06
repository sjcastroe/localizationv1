/*
 * Seeker.h
 *
 *  Created on: Oct 1, 2015
 *      Author: root
 */

#ifndef SEEKER_H_
#define SEEKER_H_

#include "../../Occurrence/src/Occurrence.h"
#include "../../Controller/src/Controller.h"
#include <string>
#include <vector>

namespace FileModify
{

class FileModify
{
public:
	void addOccurrence(Occurrence::Occurrence<std::string>* occ);
	void modify(std::string& data);
	void setController(Controller::Controller* control);

private:
	bool seek(const char* data, const char* occ);
	Controller::Controller* controller;
	std::vector<Occurrence::Occurrence<std::string>*> occurrences;
};

}

#endif /* SEEKER_H_ */
