/*
 * FileWrite.h
 *
 *  Created on: Oct 1, 2015
 *      Author: root
 */

#ifndef FILEWRITE_SRC_FILEWRITE_H_
#define FILEWRITE_SRC_FILEWRITE_H_

#include "../../FileAccess/src/FileAccess.h"

namespace FileWrite
{

class FileWrite
{
public:
	void write(std::string fileName, FileAccess::FileAccess* fa);
private:
	std::ifstream readFrom;
};

}

#endif /* FILEWRITE_SRC_FILEWRITE_H_ */
