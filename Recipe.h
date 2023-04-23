#ifndef RECIPE_H
#define RECIPE_H

#include <string>

class Recipe {
public:
    Recipe(const std::string& name, const std::string& instructions);

    const std::string& getName() const;
    const std::string& getInstructions() const;

private:
    std::string name;
    std::string instructions;
};

#endif // RECIPE_H