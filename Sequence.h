#ifndef SEQUENCE_H
#define SEQUENCE_H
#include<iostream>
#include<string>
using namespace std;

class Sequence
{
private:
	string strfile;
	int dnaLength;
public:
	Sequence(string filename);
 	int length();
	int numberOf(char base);
	string longestConsecutive();
	string longestRepeated();
	int longestConsecutivel();
};

#endif 
