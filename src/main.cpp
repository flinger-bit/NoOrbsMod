#include <Geode/Geode.hpp>
#include <Geode/modify/GameStatsManager.hpp>

using namespace geode::prelude;

class $modify(NoOrbsMod, GameStatsManager) {
    void awardCurrencyForLevel(GJGameLevel* level) {
        // Block mana orb (currency) awards on level completion
        // By not calling the original, 0 orbs are given per level
    }
};
