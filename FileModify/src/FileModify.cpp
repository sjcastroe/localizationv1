/*
 * Seeker.cpp
 *
 *  Created on: Oct 2, 2015
 *      Author: root
 */

#include "../../Wildcard/src/Wildcard.h"
#include "FileModify.h"
#include <iostream>
#include <stdexcept>


namespace FileModify
{

void FileModify::addOccurrence(Occurrence::Occurrence<std::string>* occ)
{
	occurrences.push_back(occ);
}

void FileModify::modify(std::string& data)
{
	if (controller == NULL)
	{
		std::string eMessage = "Must set Controller for FileModify. Use FileModify::setController(Controller* controller).";
		std::runtime_error ControllerNotSet(eMessage);
		throw ControllerNotSet;

	}
	const char* datachar = data.c_str();

	for(unsigned int i = 0; i < occurrences.size(); i++)
	{
		Occurrence::Occurrence<std::string>* occ = occurrences[i];
		const char* occchar = occ->getOccurrence().c_str();

		if ( seek(datachar, occchar) )
		{
			if(controller->prompt(datachar, occchar))
				occ->handle(data);
		}
	}
}

void FileModify::setController(Controller::Controller* control)
{
	controller = control;
}

bool FileModify::seek(const char* data, const char* occ)
{
	Wildcard::Wildcard wc;
	return wc.eval(occ, data);
}

}





