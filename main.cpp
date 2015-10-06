/*
 * main.cpp
 *
 *  Created on: Sep 29, 2015
 *      Author: root
 */
#include <iostream>
#include <stdexcept>

#include "FileWrite/src/FileWrite.h"
#include "FileAccess/src/SequentialAccess.h"
#include "FileModify/src/FileModify.h"
#include "Occurrence/src/HTMLTagOccurrence.h"
#include "Controller/src/Controller.h"

int main(int argc, char* argv[])
{
	try
	{
		Occurrence::Occurrence<std::string>* pear = new Occurrence::HTMLTagOccurrence("*pears*");

		FileModify::FileModify* fm = new FileModify::FileModify();
		Controller::Controller* cont = new Controller::Controller();
		fm->setController(cont);
		fm->addOccurrence(pear);

		FileAccess::FileAccess* fa = new FileAccess::SequentialAccess(fm);
		FileWrite::FileWrite fw;
		fw.write("readfrom", fa);

		delete fa;
		delete pear;
		delete fm;
	}
	catch(std::runtime_error& error)
	{
		std::cout << error.what();
	}
	return 0;
}
