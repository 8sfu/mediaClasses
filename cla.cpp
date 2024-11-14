#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

class Media {
public:
  char* title = new char[20];
  int year;

  
  virtual void createMedia(){};
  char* getTitle();
  int getYear();
};

class VideoGame : public Media {
public:
  char* publisher = new char[20];
  double rating;

  void createMedia(){
    cout << "will create Video Game." << endl;
  }
  char* getPublisher(){
    return publisher;
  }
  double getRating(){
    return rating;
  }
};

class Music : public Media {
public:
  char* artist = new char[20];
  double duration;
  char* publisher = new char[20];

  void createMedia(){
    cout << "will create Music." << endl;
  }
  char* getArtist() {
    return artist;
  }
  float getDuration(){
    return duration;
  }
  char* getPublisher(){
    return publisher;
  }
};

class Movie : public Media {
  char* director = new char[20];
  float duration;
  float rating;

  void createMedia(){
    cout << "What is this movie titled?" << endl;
    cin.getline(title,20);
    cout << "What year was this movie released?" << endl;
    char* yearString = new char[20];
    cin.getline(yearString,20);

    //TBC HERE NEED TO CONVERT PROPERLY
    cout << "Who directed this movie?" << endl;
    cin.getline(director,20);
    cout << "How long is this movie" << endl;
    cin >> duration;
    cout << "What is this movie rated?" << endl;
    cin >> rating;
  }
  char* getDirector() {
    return director;
  }
  float getDuration(){
    return duration;
  }
  float getRating(){
    return rating;
  }
};



int main() {
  cout << "Initialized." << endl;
  vector<Media*> mediaVector;
  bool running = true;
  while(running){
    
    char input[20];
    cin.getline(input,20);
    cout << "INPUT " << input << endl;
    
    
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
    }
    else if(!strcmp(input,"SEARCH")){
      cout << "would you like to search by title or by year?" << endl;
      cin.getline(input,20);
      if(!strcmp(input,"TITLE")){

      }
      else if(!strcmp(input,"YEAR")){
	
      }
    }
    else if(!strcmp(input,"DELETE")){
      cout << "would you like to delete by title or by year?" << endl;
      cin.getline(input,20);
      if(!strcmp(input,"TITLE")){
	
      }
      else if(!strcmp(input,"YEAR")){
	
      }
    }
    else if(!strcmp(input,"QUIT")){
      running = false;
    }
  }
  
  return 0;
}
