#include <iostream>
using namespace std;

// AND gate
int AND(int a, int b) {
    return a & b; // Bitwise AND
}

// OR gate
int OR(int a, int b) {
    return a | b; // Bitwise OR
}

// NOT gate
int NOT(int a) {
    return !a; // Logical NOT
}

// XOR gate
int XOR(int a, int b) {
    return a ^ b; // Bitwise XOR
}

// Function to display the menu
void displayMenu() {
    cout << "Logic Gate Simulator" << endl;
    cout << "1. AND Gate" << endl;
    cout << "2. OR Gate" << endl;
    cout << "3. NOT Gate" << endl;
    cout << "4. XOR Gate" << endl;
    cout << "5. Exit" << endl;
    cout << "Select a gate: ";
}

// Function to get binary input (0 or 1)
int getBinaryInput() {
    int input;
    cout << "Enter a binary input (0 or 1): ";
    cin >> input;

    // Validate input
    while (input != 0 && input != 1) {
        cout << "Invalid input. Enter 0 or 1: ";
        cin >> input;
    }
    return input;
}

// Function to get second binary input (0 or 1)
int getSecondBinaryInput() {
    int input;
    cout << "Enter the second binary input (0 or 1): ";
    cin >> input;

    // Validate input
    while (input != 0 && input != 1) {
        cout << "Invalid input. Enter 0 or 1: ";
        cin >> input;
    }
    return input;
}

int main() {
    int choice; // Variable to store the user's choice
    bool running = true; // Variable to control the program loop

    // Main program loop
    while (running) {
        displayMenu();  // Show the menu
        cin >> choice;  // Get the user's choice

        switch (choice) {
            case 1: { // AND Gate
                int a = getBinaryInput();
                int b = getSecondBinaryInput();
                cout << "Output (AND): " << AND(a, b) << endl;
                break;
            }
            case 2: { // OR Gate
                int a = getBinaryInput();
                int b = getSecondBinaryInput();
                cout << "Output (OR): " << OR(a, b) << endl;
                break;
            }
            case 3: { // NOT Gate
                int a = getBinaryInput();
                cout << "Output (NOT): " << NOT(a) << endl;
                break;
            }
            case 4: { // XOR Gate
                int a = getBinaryInput();
                int b = getSecondBinaryInput();
                cout << "Output (XOR): " << XOR(a, b) << endl;
                break;
            }
            case 5: { // Exit
                running = false;  // End the loop
                break;
            }
            default: // Invalid choice
                cout << "Invalid choice. Please select again." << endl;
        }

        // Ask if the user wants to perform another operation
        if (running) {
            char anotherOperation;
            cout << "Do you want to perform another operation? (y/n): ";
            cin >> anotherOperation;
            if (anotherOperation != 'y' && anotherOperation != 'Y') {
                running = false; // End the loop if the user does not want to continue
            }
        }

        cout << endl;  // Add a blank line for spacing
    }

    return 0;
}
