#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>
#include <Geode/modify/GJSearchLayer.hpp>
#include <Geode/modify/LevelBrowserLayer.hpp>

using namespace geode::prelude;

class $modify(MyMenuLayer, MenuLayer) {
    bool init() {
        if (!MenuLayer::init()) return false;
        log::info("Hello from BetterProfileSearch!");
        return true;
    }
};

class $modify(MySearchLayer, GJSearchLayer) {
    bool init(int p0) {
        if (!GJSearchLayer::init(p0)) return false;
        return true;
    }
};

class $modify(MyBrowserLayer, LevelBrowserLayer) {
    void loadPage(GJSearchObject* object) {
        LevelBrowserLayer::loadPage(object);
    }
};