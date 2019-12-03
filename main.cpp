#include <iostream>

//魚尾短くします
using std::cout;
using std::cin;

int main() {
  char response;
  cout << "これにより、メモリ陸が発生します。本気ですか？　";
  cin >> response;
  
  //大文字と小文字尾区別する
  if (response == 'Y' || response == 'y') {
    while(true) new int;
  } else if (response == 'N' || response == 'n') {
    cout << "Exit\n";
    return 0;
  } else {
    return 1;
  }
}
