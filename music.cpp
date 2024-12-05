#include <iostream>
#include <cstring>
#include "music.h"

using namespace std;

void Music::createMedia(){
  cout << "What is this music titled?" << endl;
  cin.getline(title,20);

  cout << "What year was this music released?" << endl;
  cin >> year;
  fixInput();

  cout << "Who created this music?" << endl;
  cin.getline(artist,20);

  cout << "How long is this music? (Input as float)" << endl;
  cin >> duration;
  fixInput();

  cout << "Who published this music? (Input as float)" << endl;
  cin.getline(publisher,20);
  return;
}

void Music::print(int n){
  cout << "Number: " << n << ",  Title: " << title << ",  Release date: " << year << ", Artist: " << artist << ",  Publisher: " << publisher << endl;
  return;
}

Music::~Music(){
  delete title;
  delete artist;
  delete publisher;
  return;
}
