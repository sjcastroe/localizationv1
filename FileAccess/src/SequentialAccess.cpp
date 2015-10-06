/*
 * SequentialAccess.cpp
 *
 *  Created on: Oct 1, 2015
 *      Author: root
 */

#include <string>
#include "SequentialAccess.h"

namespace FileAccess
{

SequentialAccess::SequentialAccess(FileModify::FileModify* filemod) : FileAccess(filemod) {}

void SequentialAccess::access(std::ifstream& readFrom, std::ofstream& writeTo)
{
	while (true)
		{
			std::string line;
			getline(readFrom, line);

			FileAccess::getFileModify()->modify(line);

			if (readFrom.eof())
				break;

			writeTo << line << std::endl;
		}
}

}



