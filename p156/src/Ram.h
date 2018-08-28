/*
 * Ram.h
 *
 *  Created on: 2018. 8. 28.
 *      Author: daum
 */

#ifndef RAM_H_
#define RAM_H_

class Ram {
	char mem[100*1024];
	int size;
public:
	Ram();
	virtual ~Ram();
	char read(int address);
	void write(int address,char value);
};

#endif /* RAM_H_ */
