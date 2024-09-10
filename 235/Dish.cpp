#include "Dish.hpp"
//default constructor
Dish::Dish() 
    : name_("UNKNOWN"), ingredients_(), prep_time_(0), price_(0.0), cuisine_type_(OTHER) {}

//Parameterized constructor
Dish::Dish(const std::string& name, const std::vector<std::string>& ingredients, 
           int prep_time, double price, CuisineType cuisine_type)
    : name_(name), ingredients_(ingredients), prep_time_(prep_time), price_(price), cuisine_type_(cuisine_type) {}

std::string Dish:: getName() const{ //Accessor for name 
    return name_;
}
// Mutator for name
void Dish::setName(const std::string& name) {
    name_ = name;
}
std::vector<std::string> Dish::getIngredients() const { //Accessor for ingredient
    return ingredients_;
}
// Mutator for ingredients
void Dish::setIngredients(const std::vector<std::string>& ingredients) {
    ingredients_ = ingredients;
}
int Dish::getPrepTime() const{ // Accessor for prep_time
    return prep_time_;
}
void Dish::setPrepTime(const int prep_time){ //mutator for preptime
    prep_time_ = prep_time;
}
double Dish::getPrice()const{ //Accessor for price
    return price_;
}
void Dish::setPrice( double price){ // mutator for price
    price_ = price;
}
Dish::CuisineType Dish::getCuisineType() const{ // Accessor for cuisine type 
    return cuisine_type_;
}
void Dish::setCuisineType(CuisineType cuisine_type){ // mutator for cuisine type
    cuisine_type_ = cuisine_type; 
}

void Dish::display() const{
    std::cout << "Dish Name:" << name_ << std::endl;
    std::cout << "Ingredients: ";
    for(size_t i = 0; i < ingredients_.size(); i++){
        std::cout << ingredients_[i];
        if (i != ingredients_.size() - 1){
            std::cout << ", ";
        } 
    }
    std::cout << std::endl;
    std::cout << "Preparation Time: " << prep_time_ << " minutes" << std::endl;
    std::cout << "Price: $" << std::fixed << std::setprecision(2) << price_ << std::endl;

    std::cout << "Cuisine Type: ";
    switch (cuisine_type_){
        case CuisineType::ITALIAN: std::cout << "Italian"; break;
        case CuisineType::MEXICAN: std::cout << "Mexican"; break;
        case CuisineType::CHINESE: std::cout << "Chinese"; break;
        case CuisineType::INDIAN: std::cout << "Indian"; break;
        case CuisineType::AMERICAN: std::cout << "American"; break;
        case CuisineType::FRENCH: std::cout << "French"; break;
        case CuisineType::OTHER: std::cout << "Other"; break;
    }
    std::cout << std::endl;

}

