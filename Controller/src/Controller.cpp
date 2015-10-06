/*
 * Controller.cpp
 *
 *  Created on: Oct 5, 2015
 *      Author: root
 */

#include "Controller.h"
#include <iostream>
#include <stdexcept>

namespace Controller
{

bool Controller::prompt(const char* line, const char* occurrence)
{
	std::cout << "An Occurrence \"" << occurrence << "\" has been found in the following line: \n" << line << "\nShould it be be handled? (y/n)";
	char response;
	std::cin >> response;
	if(response == 'y' || response == 'Y')
		return true;
	else if (response == 'n' || response == 'N')
		return false;
	else
	{
		std::string eMessage = "Invalid response. Please try again.";
		std::runtime_error InvalidResponse(eMessage);
		throw InvalidResponse;
	}
}

Controller::~Controller() {}

}


