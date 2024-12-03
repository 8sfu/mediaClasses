#include <iostream>
#include <cstring>
#include "media.h"

using namespace std;

void Media::fixInput() {
  if(cin.peek() == '\n'){
    //cout << "the newline character is screwing it up" << endl;               \

    cin.ignore();
  } else if (cin.peek() == '\0') {
    //cout << "the null character is screwing it up" << endl;                  \

    cin.ignore();
  } else {
    cout << "The next character is not the null character or newline." << endl;
  }
  return;
}

void Media::createMedia(){
  return;
}

void Media::print(){
  return;
}

Media::~Media(){
  return;
}
