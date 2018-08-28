/*
 * Ram.cpp
 *
 *  Created on: 2018. 8. 28.
 *      Author: daum
 */
#include <iostream>
using namespace std;

#include "Ram.h"

Ram::Ram() {
	// TODO Auto-generated constructor stub
	size = 100*1024;
}

Ram::~Ram() {
	// TODO Auto-generated destructor stub
	cout << "메모리 제거됨" << endl;
}

char Ram::read(int address){
	return mem[address];
}

void Ram::write(int address,char value){
	mem[address] = value;
}
