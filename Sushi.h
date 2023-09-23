class Sushi{
    public:
        // Default constructor
        // Create an empty Sushi object. Initialize the data member '_name' to nullptr and '_price' to 0.
        Sushi();

        // Other constructor
        // Create a Sushi with name and price provided.
        // Dynamically allocates an array of char and make it pointed by the data member '_name'.
        // Copy the 'name' over and set the 'price' properly.
        Sushi(const char* name, int price);

        // Copy constructor
        // Perform deep copy to create a Sushi by copying the given Sushi 's'.
        Sushi(const Sushi& s);

        // Destructor:
        // Deallocate all the dynamically allocated memory to prevent memory leak.
        ~Sushi();

        // Perform deep copy to copy the name and price from the given Sushi 's'
        void clone(const Sushi& s);

        // Get the price of the sushi.
        int getPrice() const;
        
        // Print the sushi.
        void print() const;
    
    private:
        char* _name;
        int _price;
};
