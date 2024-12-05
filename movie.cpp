#include <iostream>
#include <cstring>
#include "movie.h"

using namespace std;

void Movie::createMedia(){
  cout << "What is this movie titled?" << endl;
  cin.getline(title,20);

  cout << "What year was this movie released?" << endl;
  cin >> year;
  fixInput();

  cout << "Who directed this movie?" << endl;
  cin.getline(director,20);

  cout << "How long is this movie? (Input as float)" << endl;
  cin >> duration;
  fixInput();

  cout << "What is this movie rated? (Input as float)" << endl;
  cin >> rating;
  fixInput();

  cout << endl;
  return;
}

void Movie::print(int n){
  cout << "Number: " << n << ",  Title: " << title << ",  Release date: " << year << ",  Director: " << director << ",  Duration: " << duration << ",  Rating: " << rating << endl;
  return;
}

Movie::~Movie(){
  delete title;
  delete director;
  return;
}
