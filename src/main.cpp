#include <Geode/Geode.hpp>
#include <Geode/modify/PlayerObject.hpp>

using namespace geode::prelude;

class $modify(NoOrbsMod, PlayerObject) {

    void ringJump(RingObject* ring, bool invert) {
        // Block all ring/orb jumps completely
        // Original is intentionally not called
    }
};
