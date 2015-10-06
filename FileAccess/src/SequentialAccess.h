/*
 * SequentialAccess.h
 *
 *  Created on: Oct 1, 2015
 *      Author: root
 */

#ifndef FILEMANIP_SRC_SEQUENTIALACCESS_H_
#define FILEMANIP_SRC_SEQUENTIALACCESS_H_

#include "FileAccess.h"


namespace FileAccess
{

class SequentialAccess : public FileAccess
{
public:
	SequentialAccess(FileModify::FileModify* filemod);
	void access(std::ifstream& readFrom, std::ofstream& writeTo);
};

}


#endif /* FILEMANIP_SRC_SEQUENTIALACCESS_H_ */
