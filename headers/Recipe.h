#ifndef RECIPE_H
#define RECIPE_H

#include <string>

class Recipe {
public:
    Recipe(std::string  name, std::string  instructions);

    [[nodiscard]] const std::string& getName() const;
    [[nodiscard]] const std::string& getInstructions() const;

private:
    std::string name;
    std::string instructions;
};

#endif // RECIPE_H