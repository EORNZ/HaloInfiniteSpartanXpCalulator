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
