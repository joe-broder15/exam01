//I affirm that all code given below was written solely by me, Joseph Broder, and that any help I received adhered to the rules stated for this exam.

#ifndef MOVIE_H_
#define MOVIE_H_

#include <string>
using namespace std;

class Movie {
public:

	//Constructors
	Movie();
	Movie(string Title, string Genre, int ShowTime);

	//Accessor methods
	string GetTitle();
	string GetGenre();
	int GetShowTime();
private:

	//Values
	string title;
	string genre;
	int showTime;

};

#endif /* MOVIE_H_ */
