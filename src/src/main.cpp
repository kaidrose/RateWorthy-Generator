#include <Geode/Geode.hpp>
#include <Geode/modify/LevelEditorLayer.hpp>
#include "generator.hpp"

using namespace geode::prelude;

class $modify(MyEditor, LevelEditorLayer) {

    bool init(GJGameLevel* level) {

        if (!LevelEditorLayer::init(level))
            return false;

        auto btn = CCMenuItemSpriteExtra::create(
            CCSprite::createWithSpriteFrameName("GJ_playBtn2_001.png"),
            this,
            menu_selector(MyEditor::onGenerate)
        );

        btn->setPosition({120, 220});

        this->addChild(btn);

        return true;
    }

    void onGenerate(CCObject*) {

        int style = rand() % 3;

        if (style == 0)
            LevelGenerator::generateLayout();

        if (style == 1)
            LevelGenerator::generateNineCircles();

        if (style == 2)
            LevelGenerator::generateModern();
    }
};
