#include"Sequence.h"
#include <string>
#include<cstring>  
#include <fstream>  
#include <sstream>  
#include <iostream>  
#include<algorithm>
#include <stdlib.h>  
using namespace std;


  
Sequence::Sequence(string filename)
{
	ifstream infile;
	infile.open(filename);
	if(!infile)
	{	
		cout<<"The file could not open!"<<endl;
	}

	string temp;
	while(!infile.eof())
	{
		getline(infile,temp);
		strfile+=temp;
	}
	dnaLength=strfile.length();
        
}

int Sequence::length()
{
	return dnaLength;
}

int Sequence::numberOf(char base)
{
	int cA=0;
	int cT=0;
	int cC=0;
	int cG=0;

	for(int i=0;i<dnaLength;i++)
	{
	
 	switch(strfile[i])
	{
	case'A':
		cA+=1;break;
	case'T':
		cT+=1;break;
	case'C':
		cC+=1;break;
	case'G':
		cG+=1;break;
	default:return 0;break;
	}
        }

	switch(base)
	{
	case'A':
		return cA;break;
	case'T':
		return cT;break;
	case'C':
		return cC;break;
	case'G':
		return cG;break;
	}

}


string Sequence::longestConsecutive()
{
 	int longestlen=0;
	int acounter=1;
	char temp;
	char templong;
	char tempstr=strfile[0];
	
	for(int i=1;i<dnaLength;i++)
	{
	  if(strfile[i]==strfile[i-1])
	   {
		acounter++;
		temp=strfile[i];
	   }
          else
	  {
		if(acounter>longestlen)
		{
		  longestlen=acounter;
		  templong=temp;
		  acounter=1;
		  temp=strfile[i];
		}
		else
		{
        	temp=strfile[i];
	        acounter=1;
		}
	   }
	}
	
/*	char* a=&tempstr;
	char* b=&tempstr;
	for(int i=1;i<longestlen;i++)
	{
	  strcat(a,b);
	}
	string result;
	result=string(a);
*/


	string a,b;
	a=tempstr;
	for(int i=1;i<longestlen;i++)
	{
	  b+=a;
	}
return b;

}


int Sequence::longestConsecutivel()
{
        int longestlen=0;
        int acounter=1;
        char temp;
        char templong;
        char tempstr=strfile[0];


         for(int i=1;i<dnaLength;i++)
        {
          if(strfile[i]==strfile[i-1])
           {
                acounter++;
                temp=strfile[i];
           }
          else
          {
                if(acounter>longestlen)
                {
                  longestlen=acounter;
                  templong=temp;
                  acounter=1;
                  temp=strfile[i];
                }
                else
                {
                temp=strfile[i];
                acounter=1;
                }
           }
        }


        string a,b;
        a=tempstr;
        for(int i=1;i<longestlen;i++)
        {
          b+=a;
 	}

return longestlen;
}



string Sequence::longestRepeated()
{
	char** strings=new char*[dnaLength];

	for(int i=0;i<dnaLength;i++)
	{
	  strings[i]=&strfile[i];
	}

	sort(strings,strings+dnaLength);
	int templen=0;
	int longestlen=0;
	int index=0;
	int j=0;
	for( j;j<dnaLength-1;j++)
	{
	  if (strings[j]==strings[j+1])
	  {
		templen++;j++;
	  }
         else if(templen>longestlen)
	  {
		longestlen=templen;
		index=j;
	  }
	}

	char result[longestlen];
	strncpy(result,strings[index],longestlen);
	string b=result;

delete []strings;
return b;
}











	
