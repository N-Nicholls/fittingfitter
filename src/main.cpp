#include "main.h"

void clearScreen() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void eContinue() {
    std::cout << "\nPress Enter to continue...";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
}

int main() {
    bool running = true;

    while (running) {
        clearScreen();
        displayMenu();
        int choice;
        std::cin >> choice;

        switch (choice){
            case 1:
                findPath();
                break;
            case 2:
                listFittings();
                break;
            case 3:
                about();
                break;
            case 4:
                running = false;
                break;
            default:
                std::cout << "Invalid choice, please try again." << std::endl;
        }
    }
    return 0;
}

void displayMenu() {
    std::cout << "Pipe Fittings Menu [WIP]\n======================\n\n";
    std::cout << "1. Find a Path\n";
    std::cout << "2. List all Fittings\n";
    std::cout << "3. About the Program\n";
    std::cout << "4. Exit\n";
    std::cout << "Enter your choice:";
}

void about(){
    clearScreen();
    std::cout << "tbw";
    eContinue();
}

void listFittings(){
    clearScreen();
    std::cout << "tbw";
    eContinue();
}

void findPath(){
    clearScreen();
    std::cout << "tbw";
    eContinue();
}