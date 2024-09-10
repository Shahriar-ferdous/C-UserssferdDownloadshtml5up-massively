#include "Dish.hpp"
#include <vector>

int main() {
    // Instantiate a dish using the default constructor
    Dish defaultDish;
    defaultDish.setName("UNKNOWN");  // Default name (can be skipped as defaultDish already sets this)
    defaultDish.setIngredients({});  // Empty ingredients
    defaultDish.setPrepTime(30);     // Set preparation time to 30
    defaultDish.setPrice(9.99);      // Set price to 9.99
    defaultDish.display();           // Display the default dish
    std::cout << std::endl;

    // Instantiate a dish using the parameterized constructor
    std::vector<std::string> ingredients = {"Pasta", "Eggs", "Pancetta", "Parmesan", "Pepper"};
    Dish pastaCarbonara("Pasta Carbonara", ingredients, 20, 12.50, Dish::CuisineType::ITALIAN);
    pastaCarbonara.display();        // Display the details of Pasta Carbonara

    return 0;
}
