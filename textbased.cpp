#include <iostream>

using namespace std;

int main() {
  // Create a map of the game world.
  const char* map[][3] = {
    {"You are in a dark forest.", "There is a path to the north.", "There is a cave to the south."},
    {"You are in a cave.", "There is a treasure chest in the corner.", "There is a passage to the north."},
    {"You are in a clearing.", "There is a house to the east.", "There is a river to the west."},
    {"You are in a house.", "There is a bed in the corner.", "There is a fireplace in the middle of the room."},
    {"You are by a river.", "There is a bridge to the east.", "There is a forest to the west."},
  };

  // Get the player's name.
  string name;
  cout << "What is your name? ";
  cin >> name;

  // Start the game.
  int currentRoom = 0;
  while (true) {
    // Display the current room.
    cout << map[currentRoom][0] << endl;

    // Get the player's command.
    string command;
    cout << name << ", what do you want to do? ";
    cin >> command;

    // Parse the command.
    if (command == "north") {
      currentRoom = (currentRoom + 1) % 5;
    } else if (command == "south") {
      currentRoom = (currentRoom - 1 + 5) % 5;
    } else if (command == "east") {
      currentRoom = (currentRoom + 2) % 5;
    } else if (command == "west") {
      currentRoom = (currentRoom - 2 + 5) % 5;
    } else if (command == "look") {
      cout << map[currentRoom][1] << endl;
    } else if (command == "take") {
      cout << map[currentRoom][2] << endl;
    } else if (command == "quit") {
      break;
    } else {
      cout << "I don't understand that command." << endl;
    }
  }

  // End the game.
  cout << "Thanks for playing!" << endl;

  return 0;
}
