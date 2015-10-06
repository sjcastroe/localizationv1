/*
 * FileAccess.h
 *
 *  Created on: Oct 1, 2015
 *      Author: root
 */

#ifndef FILEMANIP_SRC_FILEACCESS_H_
#define FILEMANIP_SRC_FILEACCESS_H_

#include <fstream>
#include "../../FileModify/src/FileModify.h"

namespace FileAccess
{

class FileAccess
{
public:
	FileAccess(FileModify::FileModify* filemod);
	virtual FileModify::FileModify* getFileModify() const;
	virtual void access(std::ifstream& readFrom, std::ofstream& writeTo) = 0;
	virtual ~FileAccess();
private:
	FileModify::FileModify* fm;
};

}


#endif /* FILEMANIP_SRC_FILEACCESS_H_ */
