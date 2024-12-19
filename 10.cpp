#include <iostream>
using namespace std;

class CricketPlayer {
public:
    virtual void play() {
        cout << "Cricket player is playing!" << endl;
    }
};

class Batsman : public CricketPlayer {
public:
    void play() {
        cout << "Batsman is batting!" << endl;
    }
};

class Bowler : public CricketPlayer {
public:
    void play() {
        cout << "Bowler is bowling!" << endl;
    }
};

int main() {
    CricketPlayer *player1;
    Batsman batsman;
    Bowler bowler;

    player1 = &batsman;
    player1->play();

    player1 = &bowler;
    player1->play();

    return 0;
}

