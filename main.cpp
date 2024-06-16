/*Copyright 2024 Edoardo Renzi

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
        limitations under the License.
*/

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