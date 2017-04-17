#include <iostream>
using namespace std;



int main () {
  int numberOfCases, fig1, fig2, aux;;

  std::cin >> numberOfCases;
  for(int i = 0 ; i < numberOfCases ; i++){
    std::cin >> fig1;
    std::cin >> fig2;
    if (fig1 > fig2) {
      while (fig2 != 0) {
        aux = fig2;
        fig2 = fig1%fig2;
        fig1 = aux;
      }
      cout << fig1 << endl;
    }
    else {
      while (fig1 != 0) {
        aux = fig1;
        fig1 = fig2%fig1;
        fig2 = aux;
      }
      cout << fig2 << endl;
    }
  }
  return 0;
}
