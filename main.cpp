#include <iostream>
#include <vector>
#include <string>
#include "include/Rank.h"

using namespace std;

int main() {
    vector<Rank> ranks = getRankData();
    string startRank;
    int dailyGames;
    int avgXPPerGame;

    cout << "Enter your starting rank (e.g., Diamond Sergeant 1): ";
    getline(cin, startRank); cout << endl;
    cout << "Enter the number of games played daily: ";
    cin >> dailyGames; cout << endl;
    cout << "Enter the average XP gained per game: " << endl;
    cin >> avgXPPerGame; cout << endl;

    int startIndex = findStartIndex(ranks, startRank);
    if (startIndex == -1) {
        cerr << "Starting rank not found!" << endl;
        return 1;
    }

    int totalXPRequired = calculateTotalXP(ranks, startIndex);
    int totalXPPerDay = dailyGames * avgXPPerGame;
    int daysRequired = totalXPRequired / totalXPPerDay;
    int gamesRequired = totalXPRequired / avgXPPerGame;

    cout << "To reach the maximum level from " << startRank << ", you need approximately " << gamesRequired << " games." << endl;
    cout << "This equals approximately to " << daysRequired << " days, playing " << dailyGames << " games per day." << endl;

    return 0;

}