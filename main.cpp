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
    cin.ignore();
  } else if (cin.peek() == '\0') {
    cin.ignore();
  }
  return;
}

int main() {
  cout << "Would you like to add, search, delete media? Or quit? (ADD or SEARCH or DELETE or QUIT)" << endl;
  vector<Media*> mediaVector;
  bool running = true;
  while(running){
    char input[20];
    cin.getline(input,20);
    if(!strcmp(input,"ADD")){
      cout << "Would you like to add music, a game, or a movie? (MUSIC or VIDEO GAME or MOVIE)" << endl;
      cin.getline(input,20);
      if(!strcmp(input,"MUSIC")){
        Media* m = new Music();
        m->createMedia();
        mediaVector.push_back(m);
      }
      else if(!strcmp(input,"VIDEO GAME")){
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
      cout << "would you like to search by title or by year? (TITLE or YEAR)" << endl;
      cin.getline(input,20);
      if(!strcmp(input,"TITLE")){
        cout << "what title would you like to find?" << endl;
        cin.getline(input,20);
        int n = 0;
        for(Media* m : mediaVector){
          if(!strcmp(m->title,input)){
	    n++;
	    (m)->print(n);
          }
        }
      } else if(!strcmp(input,"YEAR")){
        cout << "what year was the media produced?" << endl;
        int numInput;
        cin >> numInput;
        int n = 0;
        for(Media* m : mediaVector) {
          if(m->year == numInput){
	    n++;
	    (m)->print(n);
          }
        }
      }
      cout << endl;
    }
    else if(!strcmp(input,"DELETE")){
      cout << "would you like to delete by title or by year? (TITLE or YEAR)" << endl;
      cin.getline(input,20);
      if(!strcmp(input,"TITLE")){
        cout << "What title would you like to delete?" << endl;
        cin.getline(input,20);
        vector<Media*>::iterator it;
        int n = 0;
        for(it = mediaVector.begin(); it != mediaVector.end(); ++it) {
	  if(!strcmp((*it)->title,input)){
	    n++;
	    (*it)->print(n);
	    cout << "Would you like to delete this title? (YES or NO)" << endl;
	    cin.getline(input,20);
	    if(!strcmp((*it)->title,input)){
	      mediaVector.erase(it);
	      --it;
	    }
	  }
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
	    n++;
	    (*it)->print(n);
	    cout << "Would you like to delete this title? (YES or NO)" << endl;
	    cin.getline(input,20);
	    if(!strcmp(input,"YES")){
	      mediaVector.erase(it);
	      --it;
	    }
          }
        }
      }
      cout << endl;
    }
    else if(!strcmp(input,"QUIT")){
      running = false;
    }
  }

  return 0;
}















