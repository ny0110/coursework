## Console-based Recipe Book
A simple C++ console application that allows users to create, view, delete recipes, and also displays the entire list of recipes.

## Prerequisites

- A C++ compiler with support for C++23 (e.g., GCC, Clang, or Visual Studio)

## How to Compile and Run

### Using CMake

1. Clone or download the repository.
2. Create a build directory in the project root:

   `mkdir build`

   `cd build`
3. Run CMake and compile the project:
   ```bash 
   cmake ..
   cmake --build .
   ```
4. Run the generated executable file (named `your_project_name` or `your_project_name.exe` on Windows):

`./your_project_name`

## Example Commands

- Create a new recipe: `add`

   This command creates a new recipe for the user. Next, the user enters the name of his recipe. Then the user enters the names of the ingredients.

- Output a complete list of recipes: `list` 

    This command displays a complete list of recipes.

- Remove a recipe: `remove`

    This command deletes a recipe. Next, the user enters the name of the recipe to be deleted.

- Find a recipe: `find`

    This command finds a recipe. Next, the user enters the name of the recipe to be found.

- Quit the program: `quit`

    This command quits the program.

## Project structure

```js
coursework /
    ├── main.cpp
    ├── headers /
    │   ├── Cookbook.h
    │   ├── Recipe.h
    ├── sources /
    │   ├── Cookbook.cpp
    │   ├── Recipe.cpp
    └── CMakeLists.txt
```