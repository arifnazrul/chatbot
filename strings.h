/*
 * strings.h
 *
 *  Created on: Jan 23, 2020
 *      Author: sarwar
 */

#ifndef STRINGS_H_
#define STRINGS_H_

#pragma warning(disable: 4786)
#include <string>
#include <vector>

const int MAX_RESP = 4;

typedef std::vector<std::string> vstring;


bool isPunc(char c);
void cleanString( std::string &str );
void UpperCase( std::string &str );
void copy(char *array[], vstring &v);

template<typename T>
void shuffle(T &array, size_t size) {
	for(size_t i = 0; i < size; ++i) {
		int index = rand() % size;
		std::swap(array[i], array[index]);
	}
}

#endif /* STRINGS_H_ */
