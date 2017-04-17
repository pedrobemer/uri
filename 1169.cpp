#include <fstream>
#include <iostream>
#include <string>
#include <cstdint>
#include <cmath>
using namespace std;

int main () {

   int numberOfCases, x;
   uint64_t resultGrains, GrainsInKg;
   string code;

   cin >> numberOfCases;
   for (int i = 0; i < numberOfCases; i++){
     cin >> x;
     resultGrains = 0;
     if (x % 2 == 0){
       for(int j = 0; j < x/2; j++){
         resultGrains = resultGrains + pow(2,x-j-1) + pow(2,j);
       }
     }
     else{
       for(int j = 0; j< x/2; j++){
         resultGrains = resultGrains + pow(2,x-j-1) + pow(2,j);
       }
       resultGrains = resultGrains + pow(2,ceil(x/2));
     }
    GrainsInKg = resultGrains/12000;
    cout << GrainsInKg << " kg" << endl;
   }

   return 0;
}
