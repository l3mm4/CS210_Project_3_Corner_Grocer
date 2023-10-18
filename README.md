# CS210_Project_3_Corner_Grocer
CS210 Project Three
  /*
   * Sean Jette
   * 17OCT2023
   * CS210 - Module Eight Journal
   */


    Summarize the project and what problem it was solving.
    - For the Corner Grocer project three, the program was designed to conduct four different functions. The first option allowed the end user to enter in a product name which would return that product and it's total quantity from the supplied list.
    - The second function was to display all products and their total quanity by taking each item name and calculating a number based on how many times each product's name was written in the list.
    - The third function of the program was to show a text-based histogram where each item would be displayed and asterisks that would signify the total quantity of each item.
    - Lastly, whilst quitting the program, the names and corresponding quantity of each item on the list would be saved to a file named "frequency.dat" which allows a user to review items and quanities without having to re-run the program to display the names and amounts.
    What did you do particularly well?
    - The program is well organized and each function was meticulously designed so it met proper C++ standards. Additionally, the program was set-up to ensure that any invalid input would not break the program and would output a message for error correction; allowing 
      the end user an opportunity to re-enter their desired item name and or print the total quanity. Lastly, I designed the interface to look professional as to present an interface that would draw attention and a mundane interface. 
    Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on?
    - There are many different options that could ultimately make this program even better by writing a function that would allow for manual entry of new items and save to an array or vector for later retrival. Another option is error handling because errors may occur during 
      the file input/output operations or even user input. Input validation can help to mitigate any unexpected behaviors or security vulnerabilities. Memory management could make the program more efficient and prevent memory leaks. Potentially, each function could be written
      as to be smaller or more module to improve readability and lastly, optimizing the program's efficiency through using a hash table rather than a map. 
    Which pieces of the code did you find most challenging to write, and how did you overcome this? What tools or resources are you adding to your support network?
    - The printHistogram() function as the most difficult to write and understand in general as this function utilizes nested for-loops to print a histogram of the item frequencies. The outer for-loop iterates over each item in the itemFrequencies_ map, while the inner for-loop
      prints a number of asterisks equal to the frequency of the item. This creates a histogram-like output that shows the relative frequency of each item. 
    What skills from this project will be particularly transferable to other projects or course work?
    - Understanding C++ syntax and building upon my foundation of object-oriented programming will be extremely useful and transferrable throughout my CompSci journey. Additionally, working on programs and understanding how to problem solve will eventually pay dividens, not just in 
      school but in the professional world of software engineering.
    How did you make this program maintainable, readable, and adaptable?
    - I used object-oriented design principles to create a GroceryStore class that encapsulates the program's functionality. This makes the code more modular and easier to maintain, as changes to one part of the code are less likely to affect other areas. Another area is through 
      code organization by segregating code into different files with forward declarations and my class definition in my CornerGrocer.h file, functions defined in my CornerGrocer.cpp file, and my main() funciton within the Main.cpp file. This makes it easier to find and modify
      specific parts of the code. Following code organization, I utilized descriptive variables and function names to make the code more readable and self-explanitory. This makes it easier for other developers to understand my code and modify it as needed. Along with well written 
      function names and definitions, I utiolized comments through the code to explain the purpose and functionality of each section of code which helps developers understand why each function does what it is design to do. Lastly, I designed the program to be modular, with each function
      performing a specific task that makes the program easier to modify or extend into the future. 
