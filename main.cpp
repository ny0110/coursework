#include <iostream>
#include <string>
#include "headers/Cookbook.h"
#include "headers/Recipe.h"

int main() {
    Cookbook cookbook;
    std::string command;

    while (true) {
        std::cout << "Enter command (add, remove, find, list, quit): ";
        std::getline(std::cin, command);


        if (command == "add") {
            std::string name, instructions;
            std::cout << "Enter recipe name: ";
            std::getline(std::cin, name);
            std::cout << "Enter instructions: ";
            std::getline(std::cin, instructions);

            cookbook.addRecipe(Recipe(name, instructions));
            std::cout << "Recipe added!" << std::endl;
        } else if (command == "remove") {
            std::string name;
            std::cout << "Enter recipe name: ";
            std::getline(std::cin, name);

            cookbook.removeRecipe(name);
            std::cout << "Recipe removed!" << std::endl;
        } else if (command == "list") {
            std::cout << "All stored recipes:" << std::endl;
            cookbook.printAllRecipeNames();
        } else if (command == "find") {
            std::string name;
            std::cout << "Enter recipe name: ";
            std::getline(std::cin, name);

            const Recipe *recipe = cookbook.findRecipe(name);
            if (recipe) {
                std::cout << "Recipe found!" << std::endl;
                std::cout << "Name: " << recipe->getName() << std::endl;
                std::cout << "Instructions: " << recipe->getInstructions() << std::endl;
            } else {
                std::cout << "Recipe not found." << std::endl;
            }

        } else if (command == "quit") {
            break;
        } else {
            std::cout << "Invalid command." << std::endl;
        }
    }
    return 0;
}