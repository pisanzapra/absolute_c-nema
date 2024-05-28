#ifndef CINEMA_H
#define CINEMA_H

#include <vector>
#include <string>
#include <iostream>
#include <chrono>
#include <thread>
#include <fstream>

class Cinema {
private:
    struct Movie {
        std::string title;
        std::string duration;
        std::string genre;
        int score;
    };

    std::vector<Movie> movies;
    std::vector<std::vector<char>> seats;

public:
    Cinema();
    void displayMovies();
    void displayMovieInfo(int movieIndex);
    void displaySeats();
    bool bookSeat(int row, int col);
    void playStraits();
    void playLobotomy();
    void playYakuza();
    void playCrimson();
    void playTomorrow(); 
    void playStarWars();
    void start();
};

#endif

