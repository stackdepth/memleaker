#include <iostream>

using std::cout;
using std::cin;

int main() {
  char response;
  cout << "This will force memory leak . Are you sure ? ";
  cin >> response;
  
  if (response == 'Y' || response == 'y') {
    while(true) new int;
  } else if (response == 'N' || response == 'n') {
    cout << "Exit\n";
    return 0;
  } else {
    return 1;
  }
}
