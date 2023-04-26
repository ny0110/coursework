#include <utility>

#include "../headers/Recipe.h"

Recipe::Recipe(std::string  name, std::string  instructions)
        : name(std::move(name)), instructions(std::move(instructions)) {}

const std::string& Recipe::getName() const {
    return name;
}

const std::string& Recipe::getInstructions() const {
    return instructions;
}