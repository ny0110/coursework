#include "../headers/Cookbook.h"
#include <iostream>
void Cookbook::addRecipe(const Recipe& recipe) {
    recipes.emplace(recipe.getName(), recipe);
}

void Cookbook::removeRecipe(const std::string& recipeName) {
    recipes.erase(recipeName);
}

const Recipe* Cookbook::findRecipe(const std::string& recipeName) const {
    auto it = recipes.find(recipeName);
    return it != recipes.end() ? &(it->second) : nullptr;
}
void Cookbook::printAllRecipeNames() const {
    for (const auto& recipe_pair : recipes) {
        std::cout << recipe_pair.first << std::endl;
    }
}