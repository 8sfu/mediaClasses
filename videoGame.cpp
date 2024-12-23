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

  cout << "What is this video game rated? (Input as float)" << endl;
  cin >> rating;
  fixInput();
  return;
}

void VideoGame::print(int n){
  cout << "Number: " << n << ",  Title: " << title << ",  Release date: " << year << ",  Publisher: " << publisher << ",  Rating: " << rating << endl;
  return;
}

VideoGame::~VideoGame(){
  delete title;
  delete publisher;
  return;
}
