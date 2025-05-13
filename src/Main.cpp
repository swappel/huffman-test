#include <cstdlib>
#include <iostream>

int main() {

    std::cout << "Welcome to the Huffmann test!\n\n";

    // Boucle perpetuelle
    while (true) {

        // Demander et storer l'entree de l'utilisateur
        std::string userInput;
        getline(std::cin, userInput);

        // Tester si cette entree correspond a une des commandes
        if (userInput == "exit") {
            // Terminer le programme
            std::cout << "Quitting program.\n";

            std::exit(0);
        } else if (userInput == "compress") {
        
            // Command allowing the user to compress the file.

        }
        

    }

}