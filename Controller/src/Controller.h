/*
 * Controller.h
 *
 *  Created on: Oct 5, 2015
 *      Author: root
 */

#ifndef CONTROLLER_SRC_CONTROLLER_H_
#define CONTROLLER_SRC_CONTROLLER_H_

namespace Controller
{

class Controller
{
public:
	virtual bool prompt(const char* line, const char* occurrence);
	virtual ~Controller();
};

}



#endif /* CONTROLLER_SRC_CONTROLLER_H_ */
