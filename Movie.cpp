
 //I affirm that all code given below was written solely by me, Joseph Broder, and that any help I received adhered to the rules stated for this exam.

#include <iostream>
#include <iomanip>

#include "Movie.h"
using namespace std;

//Default constructor
Movie::Movie(){
	title = "Scott Pilgrim vs. The World";
	genre = "Action";
	showTime = 7;
}

//Value constructor
Movie::Movie(string Title, string Genre, int ShowTime){

	//Set title
	title = Title;

	//Check if genre is acceptable
	if(Genre == "Action" or Genre == "Comedy" or Genre == "Horror" or Genre == "Documentary"){
		genre = Genre;
	}else{
		genre = "Comedy";
	}

	//Set showTime
	showTime = ShowTime;
}

//Accessor for title
string Movie::GetTitle(){
	return title;
}

//Accessor for genre
string Movie::GetGenre(){
	return genre;
}

//Accessor for showTime
int Movie::GetShowTime(){
	return showTime;
}
