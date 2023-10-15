/*
 * Author: Sean Jette
 * Date: 15OCT2023
 * Project: CS210 - Project Three
 */

#ifndef GROCERY_STORE_H
#define GROCERY_STORE_H

#include <string>
#include <map>

class GroceryStore
{
public:
    // constructor that reads the input file and populates the itemFrequencies_ map
    GroceryStore(const std::string& inputFilename);

    // main program loop that displays the menu and processes user input
    void run();

    // setter for inputFilename_
    void setInputFilename(const std::string& inputFilename);

    // getter for inputFilename_
    const std::string& getInputFilename() const;

    // getter for itemFrequencies_
    const std::map<std::string, int>& getItemFrequencies() const;

private:
    // helper function that prints the menu options
    void printMenu();

    // helper function that processes the user's menu option
    void processOption(int option);

    // helper function that searches for an item in the itemFrequencies_ map
    void searchItem();

    // helper function that prints the item frequencies
    void printFrequencies();

    // helper function that prints a histogram of the item frequencies
    void printHistogram();

    // helper function that saves the item frequencies to a file
    void saveFrequencies();

    // member variables
    std::string inputFilename_;
    std::map<std::string, int> itemFrequencies_;
};

#endif