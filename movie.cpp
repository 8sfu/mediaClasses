#include <iostream>
#include <cstring>
#include "movie.h"

using namespace std;

void createMedia(){
  cout << "What is this movie titled?" << endl;
  cin.getline(title,20);

  cout << "What year was this movie released?" << endl;
  cin >> year;
  fixInput();

  cout << "Who directed this movie?" << endl;
  cin.getline(director,20);

  cout << "How long is this movie" << endl;
  cin >> duration;
  fixInput();

  cout << "What is this movie rated?" << endl;
  cin >> rating;
  fixInput();

  cout << endl;
  return;
}
