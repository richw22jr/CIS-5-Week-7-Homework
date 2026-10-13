#include <iostream>
#include <cstdlib>
#include <ctime>

// Homework 7 — Richard Webster
// CIS 5 Week 07 · Odd and Even
using std::cout;
using std::endl;

int main() {

  const int N = 20;
  int values[N];
  int evens = 0;
  int odds = 0;

  srand(static_cast<unsigned>(time(nullptr)));
  for (int i = 0; i < N; ++i) {
    values[i] = rand() % 100;
    cout << "[" << i << "] " << values[i] << endl;
  }
  
  cout << "Evens: ";
  
  for (int i = 0; i < N; ++i)
  { evens = values[i]%2;
  if (evens == 0)
  {
    cout << values[i] << " ";
  }
  }
   
  cout << endl << "Odds: ";

   for (int i = 0; i < N; ++i)
   {
    evens = values[i]%2;
    if (evens != 0)
    { odds = values[i];
      cout << odds << " ";
    }
   }
   cout << endl;
  return 0;
}

