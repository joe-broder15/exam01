
//I affirm that all code given below was written solely by me, Joseph Broder, and that any help I received adhered to the rules stated for this exam.

#include <iostream>
#include <iomanip>
#include <time.h>
#include <stdlib.h>

#include "Theater.h"
using namespace std;

//Constructor
Theater::Theater(string Name, string Phone){
	name = Name;
	phone = Phone;
}

//Add Movie
void Theater::AddMovie(Movie& Movie){
	movies[movieCounter] = Movie;
	movieCounter++;
}

//Get movie for hour
string Theater::GetMovieForHour(int Hour){

	//There are only 24 hours in a day, assuming that
	//0 is the first hour and that 23 is the 24th,
	//this eliminates hours that can't exist.
	if(Hour <= 23 and Hour >= 0){
		for(int i = 0; i <= 11; i++){
				if(Hour <= movies[i].GetShowTime()){
					//Return the closest movie
					return movies[i].GetTitle();
			}
		}
		//If no movie can be found, return nothing
		return "";
	}
	//If the entered hour isnt real, return nothing
	return "";
}

//Get movie for genre
int Theater::GetShowTimeForGenre(string Genre){
	for(int i = 0; i <= 11; i++){
			if(movies[i].GetGenre() == Genre){
				return movies[i].GetShowTime();
			}
		}
	return -1;
}

//Get popcorn price
int Theater::GetPopcornPrice(){
	srand (time(NULL));
	return rand() % 10 + 1;
}

int Theater::GetCokePrice(){
	srand (time(NULL));
	return rand() % 10 + 1;
}


