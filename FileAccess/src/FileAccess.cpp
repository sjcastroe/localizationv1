/*
 * FileAccess.cpp
 *
 *  Created on: Oct 2, 2015
 *      Author: root
 */

#include "FileAccess.h"

namespace FileAccess
{

FileAccess::FileAccess(FileModify::FileModify* filemod) : fm(filemod) {}

FileModify::FileModify* FileAccess::getFileModify() const
{
	return fm;
}

FileAccess::~FileAccess() {}

}
