#include <Geode/Geode.hpp>
#include <Geode/modify/GameLevelManager.hpp>

using namespace geode::prelude;

class $modify(NoOrbs, GameLevelManager) {

    int getRewardForLevel(GJGameLevel* level, bool secretCoin, bool dailyLevel, bool gauntlet) {

        // Bloquea completamente las orbes
        return 0;
    }
};
