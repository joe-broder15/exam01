
//I affirm that all code given below was written solely by me, Joseph Broder, and that any help I received adhered to the rules stated for this exam.

#ifndef THEATER_H_
#define THEATER_H_

#include <string>
#include "Movie.h"
using namespace std;

class Theater{
public:

	//constructor
	Theater(string Name, string Phone);

	//Other methods
	void AddMovie(Movie& Movie);
	string GetMovieForHour(int Hour);
	int GetShowTimeForGenre(string Genre);
	int GetPopcornPrice();
	int GetCokePrice();

private:

	//Values
	string name;
	string phone;

	//Array is used because a theater needs multiple movies (11 in this case)
	Movie movies[11];

	//used to keep index when adding movies
	int movieCounter = 0;


};

#endif /* THEATER_H_ */
