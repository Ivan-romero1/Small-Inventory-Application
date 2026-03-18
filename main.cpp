/*
    Day 5 – Simple Inventory Manager

Objective:
Create a small program that simulates a store inventory system.

--------------------------------------------------

Program Description:

The program will manage a list of products in a small store.

Each product should have the following properties:

- productName
- productPrice
- quantityInStock

You should create a Product class to represent each product.

--------------------------------------------------

Program Features:

When the program starts, display the following menu:

1. Add Product
2. View Inventory
3. Sell Product
4. Exit

cout << "1. Add Product\n" << "2. View Inventory\n" << "3. Sell Product\n" << "4. Exit\n";  
--------------------------------------------------

Feature Details:

1. Add Product
- Ask the user for:
    product name
    product price
    quantity in stock
- Create a new Product and store it.

--------------------------------------------------

2. View Inventory
- Display all products currently stored.
- Show:
    product name
    price
    quantity remaining

Example output:

Inventory:
--------------------------------
Laptop      $1200      Qty: 4
Mouse       $25        Qty: 15
Keyboard    $70        Qty: 8

--------------------------------------------------

3. Sell Product
- Ask the user which product they want to sell.
- Ask how many units to sell.
- Reduce the stock quantity.

Rules:
- You cannot sell more than available stock.
- If the user tries, print "Not enough stock."

--------------------------------------------------

4. Exit
- End the program cleanly.

--------------------------------------------------

Additional Requirements:

- The program should continue running until the user selects Exit.
- Use a loop to keep the program running.
- Store products in an array or vector.
- Use a Product class with getters and setters.

--------------------------------------------------

Concepts This Trains:

- Classes and objects
- Arrays or vectors
- Menu-based programs
- Program state management
- Input handling
- Multiple interacting components

--------------------------------------------------

Goal:

You are now building something closer to a real system:
objects + state + user interaction.
Structure matters more than complexity.

*/

#include <iostream>
#include <vector>
#include <string>

//FUN FACT: "using namespace std;" defines a "standard" region to organize code into logical groups
//           it prevents naming collision

/*
    why "using namespace std;" is important is because it prevents naming collisions. 
    Consider the following scenario:

    #include <iostream>
    #include <algorithm> // Header needed for std::max
    using namespace std; // This brings std::max into the global scope

    int max(int a, int b) {
        return (a > b) ? a : b;
    }

    int main() {
        int x = 10, y = 20;
        // The compiler might get confused here, not knowing which 'max' to use
        cout << "The maximum is: " << max(x, y) << endl; 
        return 0;
    }

    Conversely though, consider the following scenario:

    #include <iostream>
    #include <algorithm>

    // No "using namespace std;" here

    int max(int a, int b) {
        return (a > b) ? a : b;
    }

    int main() {
        int x = 10, y = 20;
        // Explicitly call the local max function
        std::cout << "The maximum is: " << max(x, y) << std::endl; 

        // Or explicitly call the standard library's max function
        std::cout << "The standard maximum is: " << std::max(x, y) << std::endl;
        
        return 0;
    }

    By using std:: explicitly, the compiler instantly knows which version of the max identifier you are referring to, thus preventing a name collision and improving code readability.

*/

using namespace std;

//Product class has productName and productPrice
class Product{

    private:
    string productName;
    double productPrice;

    public:
    //Getters:

    string getProductName(){

        return this->productName;
    }

    double getProductPrice(){

        return this->productPrice;
    }

    //Setters:
    void setProductName(string productNameToSet){

        this->productName = productNameToSet;
    }

    void setProductPrice(double productPriceToSet){

        this->productPrice = productPriceToSet;
    }

    //Public Default Constructor:
    Product(){

        productName = "defaultName";
        productPrice = 0.00;
    }

    //Public Parametrized Constructor:
    Product(string productNameToSet, double productPriceToSet){

        this->productName = productNameToSet;
        this->productPrice = productPriceToSet;
    }
};

using namespace std;

void displayMenu(){
    
    cout << "Please choose from the following options: " << endl;
    cout << "1. Add Product\n" << "2. View Inventory\n" << "3. Sell Product\n" << "4. Exit\n";
    cout << "\nEnter input here: ";
}

void greet(){

    //Perhaps modify approach such that the app greets with user name in the future...
    cout << "Welcome to the Inventory App!" << endl;
    cout << "------------------------------\n" << endl;
}

//Helper function for addProduct:
Product makeProduct(string productName, double productPrice){

    Product newProduct = Product(productName, productPrice);

    return newProduct;
}

void addProduct(vector<Product> vectorToAddTo, Product productToAdd){


}

int main(){

    greet();
    displayMenu();

    //Take user input:
    
    int userMenuChoice;
    cin >> userMenuChoice;

    //Check if userMenuChoice is valid stream of int:

    while(!(cin >> userMenuChoice)){

        cout << "Please enter a valid number: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    vector<Product> productsInventory;

    //Add product
    if(userMenuChoice == 1){


    }
    
    return 0;
}