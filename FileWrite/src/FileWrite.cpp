/*
 * FileWrite.cpp
 *
 *  Created on: Oct 1, 2015
 *      Author: root
 */

#include "FileWrite.h"
#include "../../FileAccess/src/FileAccess.h"

#include <fstream>
#include <string>
#include <stdexcept>
#include <iostream>

namespace FileWrite
{

void FileWrite::write(std::string fileName, FileAccess::FileAccess* fa)
{
	std::ofstream writeTo("tmpFile");

	readFrom.open(fileName.c_str());

	if (readFrom.is_open())
	{
	}
	else
	{
		std::string eMessage = "File " + fileName + " not found.";
		std::runtime_error fileNotFound(eMessage);
		throw fileNotFound;
	}

	fa->access(readFrom, writeTo);

	readFrom.close();
	writeTo.close();
}

}



