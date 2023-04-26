#ifndef COOKBOOK_H
#define COOKBOOK_H

#include <string>
#include <map>
#include "../headers/Recipe.h"

class Cookbook {
public:
    void addRecipe(const Recipe& recipe);
    void removeRecipe(const std::string& recipeName);
    [[nodiscard]] const Recipe* findRecipe(const std::string& recipeName) const;
    void printAllRecipeNames() const;

private:
    std::map<std::string, Recipe> recipes;
};

#endif // COOKBOOK_H
