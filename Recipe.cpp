#include "Recipe.h"

Recipe::Recipe(const std::string& name, const std::string& instructions)
        : name(name), instructions(instructions) {}

const std::string& Recipe::getName() const {
    return name;
}

const std::string& Recipe::getInstructions() const {
    return instructions;
}