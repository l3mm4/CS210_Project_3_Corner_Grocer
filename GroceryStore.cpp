#include "GroceryStore.h"
#include <iostream>
#include <fstream>

// Constructor that reads the input file and populates the itemFrequencies_ map
GroceryStore::GroceryStore(const std::string& inputFilename)
    : inputFilename_(inputFilename)
{
    // Open the input file
    std::ifstream inputFile(inputFilename_);

    // Read each item from the input file and add it to the itemFrequencies_ map
    std::string item;
    while (inputFile >> item)
    {
        // Convert the item to lowercase
        for (auto& c : item)
        {
            c = std::tolower(c);
        }

        // Increment the frequency count for the item in the itemFrequencies_ map
        ++itemFrequencies_[item];
    }
}

// Main program loop that displays the menu and processes user input
void GroceryStore::run()
{
    int option;
    do
    {
        printMenu();
        std::cin >> option;
        processOption(option);
    } while (option != 4);
}

// Setter for inputFilename_
void GroceryStore::setInputFilename(const std::string& inputFilename)
{
    inputFilename_ = inputFilename;
}

// Getter for inputFilename_
const std::string& GroceryStore::getInputFilename() const
{
    return inputFilename_;
}

// Getter for itemFrequencies_
const std::map<std::string, int>& GroceryStore::getItemFrequencies() const
{
    return itemFrequencies_;
}

// Helper function that prints the menu options
void GroceryStore::printMenu()
{
    std::cout << "\t..:::Corner Grocer Item Lookup:::..\n"
        << "-------------------------------------------------------\n"
        << "1. Display frequency for a specific item\n"
        << "2. Display a list of all items and their frequencies\n"
        << "3. Display histogram of all items\n"
        << "4. Exit Application\n"
        << "Please enter your selection as number 1-4: "
        << std::flush;
}

// Helper function that processes the user's menu option
void GroceryStore::processOption(int option)
{
    switch (option)
    {
    case 1:
        searchItem();
        break;
    case 2:
        printFrequencies();
        break;
    case 3:
        printHistogram();
        break;
    case 4:
        saveFrequencies();
        break;
    default:
        std::cout << "..:::Invalid option:::..\n\n";
        // Pause the program and wait for the user to press a key
        system("pause");
        // Clear the input stream and ignore any remaining characters
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        // Clear the screen
        system("cls");
        break;
    }
}

// Helper function that searches for an item in the itemFrequencies_ map
void GroceryStore::searchItem()
{
    std::string item;
    std::cout << "Please enter one item to search for: ";
    std::cin >> item;

    // Convert the item to lowercase
    for (auto& c : item)
    {
        c = std::tolower(c);
    }

    // Search for the item in the itemFrequencies_ map
    auto it = itemFrequencies_.find(item);
    if (it != itemFrequencies_.end())
    {
        std::cout << "Frequency of " << item << ": " << it->second << '\n';
    }
    else
    {
        std::cout << "Item not found.\n";
    }
    // Pause the program and wait for the user to press a key
    system("pause");
    // Clear the screen
    system("cls");
}

// Helper function that prints the item frequencies
void GroceryStore::printFrequencies()
{
    std::cout << "\nAll items and their frequencies:\n";

    for (const auto& itemFrequency : itemFrequencies_)
    {
        std::cout << itemFrequency.first << ' ' << itemFrequency.second << '\n';
    }
    // Pause the program and wait for the user to press a key
    system("pause");
    // Clear the screen
    system("cls");
}

// Helper function that prints a histogram of the item frequencies
void GroceryStore::printHistogram()
{
    std::cout << "\nHistogram of all items:\n";
    for (const auto& itemFrequency : itemFrequencies_)
    {
        std::cout << itemFrequency.first << ' ';
        for (int i = 0; i < itemFrequency.second; ++i)
        {
            std::cout << '*';
        }
        std::cout << '\n';
    }
    // Pause the program and wait for the user to press a key
    system("pause");
    // Clear the screen
    system("cls");
}

// Helper function that saves the item frequencies to a file
void GroceryStore::saveFrequencies()
{
    // Open the output file
    std::ofstream outputFile("frequency.dat");

    // Write each item and its frequency to the output file
    for (const auto& itemFrequency : itemFrequencies_)
    {
        outputFile << itemFrequency.first << ' ' << itemFrequency.second << '\n';
    }

    std::cout << "\n..:::Exiting Application:::..\n";
}