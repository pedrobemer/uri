#include <fstream>
#include <iostream>
#include <string>
using namespace std;
 
int main () {

   int numberOfCases, shiftNumber, codeLen, impossibleShift;
   string code;

   cin >> numberOfCases;
   for(int i = 0; i < numberOfCases; i++)
   {
	   	cin >> code;
	   	cin >> shiftNumber;
	   	codeLen = code.size();
		for(int j = 0; j < (codeLen/2) ; j++)
   		{
   			if (int(code[j]) - shiftNumber  < 65)
   			{
   				impossibleShift = 65 - (int(code[j]) - shiftNumber);
				code[j] = char(91 - impossibleShift);
   			}
   			else
   				code[j] = char(int(code[j]) - shiftNumber);

   			if (int(code[codeLen - 1 - j]) - shiftNumber < 65)
   			{
   				impossibleShift = 65 - (int(code[codeLen - 1 - j]) - shiftNumber);
				code[codeLen - 1 - j] = char(91 - impossibleShift);
   			}
   			else
   				code[codeLen - 1 - j] = char(int(code[codeLen - 1 - j]) - shiftNumber);
   		}
   		if (codeLen % 2 != 0)
   		{
   			if(int(code[codeLen/2]) - shiftNumber < 65)
   			{
   				impossibleShift = 65 - (int(code[codeLen/2]) - shiftNumber);
   				code[codeLen/2] = char(91 - impossibleShift);
   			}
   			else
		   		code[codeLen/2] = char(int(code[codeLen/2]) - shiftNumber);


   		}
	   	cout << code << endl;	
   }


   return 0;
}