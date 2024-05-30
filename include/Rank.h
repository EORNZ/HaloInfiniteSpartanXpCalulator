//
// Created by Edoardo Renzi on 30/05/2024.
//
#ifndef HALOINFINITESPARTANXPCALULATOR_RANK_H
#define HALOINFINITESPARTANXPCALULATOR_RANK_H

#include <string>
#include <vector>

struct Rank {
    std::string name;
    int tier;
    int totalXP;
    int xpToNextRank;
};

std::vector<Rank> getRankData();
int findStartIndex(const std::vector<Rank>& ranks, const std::string& startRank);
int calculateTotalXP(const std::vector<Rank>& ranks, int startIndex);

#endif //HALOINFINITESPARTANXPCALULATOR_RANK_H
