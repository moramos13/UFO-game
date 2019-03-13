#include "ufo.hpp"

void PrintName() {
  std::cout << "=============\n";
  std::cout << "UFO: The Game\n";
  std::cout << "=============\n";
  std::cout << "Instructions: save your friend from alien abduction by guessing the letters in the codeword.\n";
}

int PrintOptions () {
  int option = 0;
  
  std::cout << "Select:\n";
  std::cout << "1) Play\n";
  std::cout << "2) Exit\n";
  std::cout << "Choose: ";
  
  std::cin >> option;
  return option;    
}

void play_game() {
  inicialize_variables();
  while(answer != codeword && misses < 7){
    take_turn();
  }
  
  if(answer == codeword){
    std::cout << "\nHooray! You saved the person and earned a medal of honor!\n"; 
  }
  else{
       std::cout << "\nOh no! The UFO just flew away with another person!\n";
    }
  
  std::cout << "Codeword: " << codeword << "\n\n\n";
}

int main() {
  
  PrintName();
  
  bool run = true;
  while (run){
    int option = PrintOptions();
    switch (option){
      case 1:
        play_game();
        break;
      case 2:
        std::cout << "Goood Bye!\n\n";
        run = false;
        break;
      default:
        std::cout << "Invalid option. Try again!\n\n";
        break;
      
    }
  }
  
  return 0;
}
