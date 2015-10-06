/*
 * Occurrence.h
 *
 *  Created on: Oct 1, 2015
 *      Author: root
 */

#ifndef OCCURRENCE_SRC_OCCURRENCE_H_
#define OCCURRENCE_SRC_OCCURRENCE_H_

namespace Occurrence
{

template<typename OccType>
class Occurrence
{
public:
	Occurrence(OccType occ);
	virtual OccType getOccurrence() const;
	virtual void handle(OccType& data) = 0;
	virtual ~Occurrence();
private:
	const OccType occurrence;
};

}


#endif /* OCCURRENCE_SRC_OCCURRENCE_H_ */
