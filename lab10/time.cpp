
/*
Youssef elsuradi
Tong Yee
Lab 10 

*/

#include <iostream>

using namespace std;

enum Genre {ACTION, COMEDY, DRAMA, ROMANCE, THRILLER};

class Time { 
public:
    int h;
    int m;
};
class Movie { 
public: 
    string title;
    Genre genre;     // only one genre per movie
    int duration;    // in minutes
};

class TimeSlot { 
public: 
    Movie movie;     // what movie
    Time startTime;  // when it starts
};

int minutesSinceMidnight (Time time){
    int num_of_mins = time.h*60 + time.m;
    return num_of_mins;
}
// Part A: report how many minutes separate the two moments 'earlier' and 'later'.
// E.g. 10:45 -> 17:30 (5:30 PM)
// Convert the hour difference (17-10) to minutes: (17-10)*60
// then 420 + (30-45) = 420 + (-15)
// 405 mins between 10:45 and 17:30.

int minutesUntil(Time earlier, Time later){
    int num_of_mins = (later.h-earlier.h)*60 + (later.m-earlier.m);
    return num_of_mins;
} 

Time addMinutes (Time time0, int min){
   Time new_time;
   new_time.h = time0.h + (time0.m+min)/60;
   new_time.m = (time0.m+min) %60;
   return new_time;

}

void printMovie(Movie mv){
    string g;
    switch (mv.genre) {
        case ACTION   : g = "ACTION"; break;
        case COMEDY   : g = "COMEDY"; break;
        case DRAMA    : g = "DRAMA";  break;
        case ROMANCE  : g = "ROMANCE"; break;
        case THRILLER : g = "THRILLER"; break;
    }
    cout << mv.title << " " << g << " (" << mv.duration << " min)";
}


// Part C.
void printTimeSlot(TimeSlot ts){
  // Calculate the ending time;
    Time endingTime = addMinutes (ts.startTime, ts.movie.duration);
 // Use the given function printMovie to print out the first part of the output,
  // which is movie title, movie genre, and its duration.
    printMovie(ts.movie);
  // We need to print out the second part, which is the starting time and the endi
    // We need to print out the second part, which is the starting time
    cout << "[starts at "<< ts.startTime.h << ":" << ts.startTime.m <<
    ", ends by " << endingTime.h << ":" << endingTime.m << "]" << endl;


}

//part D

TimeSlot scheduleAfter (TimeSlot ts, Movie nextMovie){
    TimeSlot nextTimeSlot;
   // Since nextTimeSlot is TimeSlot type, we have to determine its 2 members.
    // What movie?
    nextTimeSlot.movie = nextMovie;
   // Starting time of nextTimeSlot.
    nextTimeSlot.startTime = addMinutes (ts.startTime, ts.movie.duration);
    return nextTimeSlot;

}

// part E
bool timeOverlap(TimeSlot ts1, TimeSlot ts2){
    // We need to make sure which one is earlier (tsl or ts2).
    if ( minutesSinceMidnight(ts1.startTime) < minutesSinceMidnight(ts2.startTime) ){
        return ts1.movie.duration > (minutesSinceMidnight(ts2.startTime) -
              minutesSinceMidnight(ts1.startTime)) ;
    }
    else{
        return ts2.movie.duration > (minutesSinceMidnight(ts1.startTime) -
            minutesSinceMidnight(ts2.startTime));
    }
}
int main(){

    Movie movie1 = {"Back to the Future", COMEDY, 116};
    Movie movie2 = {"Black Panther", ACTION, 134};

    TimeSlot morning = {movie1, {9, 15}};  
    TimeSlot daytime = {movie2, {12, 15}}; 
    TimeSlot evening = {movie2, {16, 45}}; 
    
    

    /*
    Time time1, time2;
    cout << "Enter the first time (hour then minute): "<<endl;
    cin >> time1.h >> time1.m;
    cout << "Enter the second time (hour then minute):" <<endl;
    cin >> time2.h >> time2.m;

    // Note: For classes, you CANNOT do it this way: cin >> timel or cout << timel.
    // Part A.
    cout << "Number of minutes between " << time1.h << ":" << time1.m <<
      " and 00:00 is " << minutesSinceMidnight(time1) << endl;

    cout << "Number of minutes between " << time1.h << ":" << time1.m <<
      " and " << time2.h << ":" << time2.m << "is" << minutesUntil (time1, time2) << endl;
    */


}