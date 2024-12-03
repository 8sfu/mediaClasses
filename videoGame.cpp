#include <iostream>
#include <cstring>
#include "videoGame.h"

using namespace std;

void VideoGame::createMedia(){
  cout << "What is this video game titled?" << endl;
  cin.getline(title,20);

  cout << "What year was this video game released?"<<endl;
  cin >> year;
  fixInput();

  cout << "Who published this video game?" << endl;
  cin.getline(publisher,20);

  cout << "What is this video game rated?" << endl;
  cin >> rating;
  fixInput();
  return;
}

void VideoGame::print(){
  return;
}
