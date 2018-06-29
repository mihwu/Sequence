#include"Sequence.h"
#include<iostream>
using namespace std;



int main()
{

	Sequence t("dna.txt");
	cout<<"sum:"<<t.length()<<endl;
	cout<<"number of A:"<<t.numberOf('A')<<endl;
	cout<<"number of T:"<<t.numberOf('T')<<endl;
	cout<<"number of C:"<<t.numberOf('C')<<endl;
	cout<<"number of G:"<<t.numberOf('G')<<endl;
	cout<<"The longest initial sequence:"<<t.longestConsecutive()<<endl;
	cout<<"The length of the sequence:"<<t.longestConsecutivel()<<endl;
	cout<<t.longestRepeated()<<endl;
return 0;
}
