/*
 * Author: Sean Jette
 * Date: 15OCT2023
 * Project: CS210 - Project Three
 */

#include "GroceryStore.h"  // Include the GroceryStore header file

// The main function
int main()
{
    // Create a GroceryStore object named store
    // The constructor takes a filename as input
    GroceryStore store("CS210ProjectThreeCornerGrocer.txt");

    // Call the run method of the store object to start the grocery store operations
    store.run();

    return 0;  // Return 0 to indicate that the program has run successfully
}
