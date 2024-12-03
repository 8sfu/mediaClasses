#include <iostream>
#include <cstring>
#include <vector>
#include "media.h"
#include "videoGame.h"
#include "music.h"
#include "movie.h"

using namespace std;

void fixInput();

void fixInput() {
  if(cin.peek() == '\n'){
    //cout << "the newline character is screwing it up" << endl;                              
    cin.ignore();
  } else if (cin.peek() == '\0') {
    //cout << "the null character is screwing it up" << endl;                                 
    cin.ignore();
  } else {
    cout << "The next character is not the null character or newline." << endl;
  }
  return;
}

int main() {
  cout << "Initialized." << endl;
  vector<Media*> mediaVector;
  bool running = true;
  while(running){

    char input[20];
    cin.getline(input,20);
    //cout << "INPUT " << input << endl;                                                      

    if(!strcmp(input,"ADD")){
      cout << "Would you like to add music, a game, or a movie?" << endl;
      cin.getline(input,20);
      //cout << "INPUT 2 " << input << endl;                                                  
      if(!strcmp(input,"MUSIC")){
        Media* m = new Music();
        m->createMedia();
        mediaVector.push_back(m);
      }
      else if(!strcmp(input,"GAME")){
        Media* m = new VideoGame();
        m->createMedia();
        mediaVector.push_back(m);
      }
      else if(!strcmp(input,"MOVIE")){
        Media* m = new Movie();
        m->createMedia();
        mediaVector.push_back(m);
      }
      cout << endl;
    }
    else if(!strcmp(input,"SEARCH")){
      cout << "would you like to search by title or by year?" << endl;
      cin.getline(input,20);
      if(!strcmp(input,"TITLE")){
        cout << "what title would you like to find?" << endl;
        cin.getline(input,20);
        cout << "you are searching for " << input << endl;
        int n = 0;
        for(Media* m : mediaVector){
          if(!strcmp(m->title,input)){
            n++;
          }
        }
        if(n == 0){
          cout << "There are no titles with that name." << endl;
        } else {
          cout << "There are " << n << " titles with that name" << endl;
        }
      } else if(!strcmp(input,"YEAR")){
        cout << "what year was the media produced?" << endl;
        int numInput;
        cin >> numInput;
        int n = 0;
        for(Media* m : mediaVector) {
          if(m->year == numInput){
            n++;
          }
        }
        if(n == 0){
          cout << "None of the media was produced in " << numInput << endl;
        } else {
          cout << n << " media found produced in " << numInput << endl;
        }
      }

    } else if(!strcmp(input,"DELETE")){
      cout << "would you like to delete by title or by year?" << endl;
      cin.getline(input,20);
      if(!strcmp(input,"TITLE")){
        cout << "What title would you like to delete?" << endl;
        cin.getline(input,20);
        vector<Media*>::iterator it;
        int n = 0;
        for(it = mediaVector.begin(); it != mediaVector.end(); ++it) {
          if(!strcmp((*it)->title,input)){
            mediaVector.erase(it);
            --it;
            n++;
          }
        }
        if(!n){
          cout << "There were no titles named " << input << endl;
        } else {
          cout << n << " media named " << input << " deleted." << endl;
        }
      }
      else if(!strcmp(input,"YEAR")){
        cout << "What year was the media produced in?" << endl;
        int numInput;
        cin >> numInput;
        fixInput();
        vector<Media*>::iterator it;
        int n = 0;
        for(it = mediaVector.begin(); it != mediaVector.end(); ++it) {
          if((*it)->year == numInput){
	    (*it)->print();
	    mediaVector.erase(it);
            --it;
            n++;
          }
        }
        if(!n){
          cout << "There were no titles produced in " << numInput << endl;
        } else {
          cout << n << " media produced in " << numInput << " deleted." << endl;
        }
      }
    }
    else if(!strcmp(input,"QUIT")){
      running = false;
    }
  }

  return 0;
}















