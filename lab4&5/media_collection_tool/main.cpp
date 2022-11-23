#include <iostream>
#include "Movie.h"
#include "Music.h"
#include "Game.h"

int main() {
    const char* movieContentType = "Movie content type";
    const char* dateOfPurchase = "12.10.2022";
    const char* movieFormat = "Movie";
    Movie* movie = new Movie(movieContentType, dateOfPurchase, 1, movieFormat, 5, 20.0, "To the moon and back", 5);

    movie->toString();
    cout << "------------------------------------------------------------------------------------------"<< endl;

    const char* musicContentType = "Music content type";
    const char* musicFormat = "Music";
    const char* bandOrArtist = "Bring me the horizon";
    Music* music = new Music(musicContentType, dateOfPurchase, 2, musicFormat, 10, 50.0, "Doomed", bandOrArtist);

    music->toString();
    cout << "------------------------------------------------------------------------------------------"<< endl;

    const char* gameContentType = "Game content type";
    const char* gameFormat = "Game";
    const char* title = "CS";
    const char* mfg = "Some mfg";
    Game* game = new Game(gameContentType, dateOfPurchase, 3, gameFormat, 15, 100.0,title, 20, mfg);

    game->toString();
    cout << "------------------------------------------------------------------------------------------"<< endl;

    return 0;
}
