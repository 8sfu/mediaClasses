#include <iostream>
#include <cstring>
#include "music.h"

using namespace std;

void createMedia(){
  cout << "What is this music titled?" << endl;
  cin.getline(title,20);

  cout << "What year was this music released?" << endl;
  cin >> year;
  fixInput();

  cout << "Who created this music?" << endl;
  cin.getline(artist,20);

  cout << "How long is this music?" << endl;
  cin >> duration;
  fixInput();

  cout << "Who published this music?" << endl;
  cin.getline(publisher,20);
  return;
}
