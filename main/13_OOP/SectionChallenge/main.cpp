/* 
    Section Challenge NOT WORKING

-[] Create a Class for Movie, whose members are 
        - Movie name
        - Release Year
        - Watch count

-[] display_movie function to display the list of all movie names in the data base

-[] add_movie function to add the list of all movie names in the data base

-[] add_movie should not add duplicate items

-[] increment_count function to increment the watch count
    
-[] increment_count Should not increment the count of movies not in data base

*/

#include <iostream>
#include <stdint.h>
#include <vector>
using namespace std;

class Movie
{
private:
    vector <Movie> vec_movies;
    string name;
    uint16_t releaseYear;
    uint8_t watchCount;
public:
    /* Functions */
    void class_display_movie(void);
    bool class_add_movie(string movie_name, uint16_t movie_releaseYear, uint8_t movie_watchCount);
    /* Constructor */
    Movie();
    Movie(string movie_name, uint16_t movie_releaseYear, uint8_t movie_watchCount);
    /* Destructor */
    ~Movie();
};

bool Movie::class_add_movie(string movie_name, uint16_t movie_releaseYear, uint8_t movie_watchCount)
{
    cout<<"here 1"<<endl;
    // for(Movie for_movie: vec_movies)
    // {
    //     cout<<"here 2"<<endl;
    //     if(for_movie.name == movie_name)
    //     {
    //         /* Movie already present in DB */
    //         return false;
    //     }
    // }
    cout<<"here 3"<<endl;
    /* The Below two lines are not working */
    Movie newtempMovie{ movie_name, movie_releaseYear, movie_watchCount };
    vec_movies.push_back(newtempMovie);
    cout<<"here 4"<<endl;
    return true;
}

void Movie::class_display_movie(void)
{
    cout<<name;
}

Movie::Movie(void)
{
    /* Constructor */
    cout<<"oooooo Constructor Called oooooo"<<endl;   
}

Movie::Movie(string movie_name, uint16_t movie_releaseYear, uint8_t movie_watchCount)
{
    Movie addMovieconstructor(movie_name,movie_releaseYear,movie_watchCount);
    vec_movies.push_back(addMovieconstructor);
}

Movie::~Movie(void)
{
    /* Destructor */
    cout<<"xxxxxx Destructor Called xxxxxx"<<endl;   
}

/* Functions Declaration */
void add_movie( Movie &p, string movieName, uint16_t yearOfRelease, uint8_t Count );

int main(void)
{
    Movie balajiDB;
    add_movie(balajiDB,"Ice Age",2010,1);
    return 0;
}

/* Functions Deifinition */
void add_movie( Movie &p, string movieName, uint16_t yearOfRelease, uint8_t Count )
{
    if(p.class_add_movie(movieName,yearOfRelease,Count))
    {
        cout<<"Movie added successfully"<<endl;
    }
    else
    {
        cout<<"Movie already present"<<endl;
    }
    cout<<"here 5"<<endl;
}