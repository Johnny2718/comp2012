#include "Sushi.h"

class SushiTrain{
    public:
        // Conversion constructor
        // Dynamically allocate an array of Sushi with capacity "capacity" and make it pointed by the data member "_sushi". 
        // It also initializes the data member, _capacity, and sets _numSushi to 0.
        SushiTrain(int capacity);

        // Other constructor
        // Dynamically allocate an array of Sushi with _capacity equals to the parameter, numSushi, make it pointed by the data member, _sushi.
        // Copy all the items in the given sushi array over.
        // Remember to set all the corresponding data members properly.
        SushiTrain(const Sushi sushi[], int numSushi);

        // Copy constructor
        // Perform deep copy of the given SushiTrain st.
        SushiTrain(const SushiTrain& st);

        // Destructor
        // Deallocate all the dynamically allocated memory to prevent memory leak.
        ~SushiTrain();

        // If there are already '_capacity' number of sushi in the SushiTrain, output (cout) the message "Insufficient capacity" and do nothing else.
        // Otherwise, deep copy the given Sushi, s, to the end of the SushiTrain.
        void addSushi(const Sushi& s);

        // If the SushiTrain has no sushi at all, output (cout) the message "No sushi can be removed" and do nothing else.
        // Otherwise, remove the last sushi in the SushiTrain.
        void removeLastSushi();

        // Return the total price of the sushis on the SushiTrain.
        int totalPrice() const;

        // Print the SushiTrain.
        void print() const;

    private:
        Sushi* _sushi;       // a dynamic array of sushi
        const int _capacity;       // size of the sushi dynamic array
        int _numSushi;       // number of sushi dishes actually on the sushi train
};
