#include <stdlib.h>
#include <ostream>
#include <iostream>

#include <vector>
#include <string>
#include <cstring>

struct Movie{
    std::string name;
    double rating;

    Movie(){}
    Movie(std::string movieName, double movieRating)
    {
        name = movieName;
        rating = movieRating;
    }
};

class MovieCollection
{
public:

    std::vector<Movie> movieList;

    MovieCollection(){}
    

    void AlphabetSorting()
    {

    }

    void PrintMovieList()
    {
        for (int i = 0 ; i < movieList.size() ; ++i)
        {
            std::cout<<movieList[i].name<<", "<<movieList[i].rating<<std::endl;
        }
    }

    int PrefixSearching(std::string prefix, MovieCollection& prefixMatchColle)
    {
        int count = 0;
        // prefix searching and printing
        for(int i = 0 ; i < movieList.size() ; ++i)
        {
            if (movieList[i].name.compare(0, prefix.size(), prefix.c_str()) == 0)
            {
                count++;
                prefixMatchColle.movieList.push_back(movieList[i]);
            }
        }

        // perform sorting for prefixMatchColle.movieList
        prefixMatchColle.AlphabetSorting();
        return count;
    }
private:

};