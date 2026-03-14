#include "generator.hpp"
#include <Geode/modify/LevelEditorLayer.hpp>

using namespace geode::prelude;

static LevelEditorLayer* getEditor() {
    return LevelEditorLayer::get();
}

static void placeObject(int id, float x, float y) {

    auto editor = getEditor();
    if (!editor) return;

    auto obj = editor->createObject(id, {x, y});
    editor->addObject(obj);
}

void LevelGenerator::generateLayout() {

    float x = 0;

    for (int i = 0; i < 60; i++) {

        placeObject(1, x, 0);      
        placeObject(12, x + 15, 30);

        x += 30;
    }
}

void LevelGenerator::generateNineCircles() {

    float x = 0;

    for (int i = 0; i < 120; i++) {

        placeObject(1, x, 0);

        if (i % 4 == 0)
            placeObject(1334, x + 20, 60);

        if (i % 3 == 0)
            placeObject(12, x + 15, 40);

        x += 25;
    }
}

void LevelGenerator::generateModern() {

    float x = 0;

    for (int i = 0; i < 100; i++) {

        placeObject(1, x, 0);

        if (rand() % 3 == 0)
            placeObject(12, x + 15, 30);

        if (rand() % 4 == 0)
            placeObject(35, x + 20, 50);

        if (rand() % 6 == 0)
            placeObject(747, x + 30, 60);

        x += 30;
    }
}
