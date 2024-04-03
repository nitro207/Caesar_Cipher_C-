#include <iostream>
#include <string>

int main(){
    int selector;
    int key;
    std::string inputphrase;
    std::string outputphrase;
    std::cout << "Please select option \n";
    while(selector != 1 && selector != 2){
    std::cout << " Encoder(1)\n Decoder(2)\nHere: ";
    std::cin >> selector;
    if(selector != 1 && selector != 2){
        std::cout << "Please select a valid option\n";
    }
    }
    if(selector == 1){
        std::cout << "You have selected Encoder\nPlease input a numerical key: ";
    }
    else if(selector == 2){
        std::cout << "You have selected Decoded\nPlease input numerical key: ";
    }
    std::cin >> key;
    key %= 94;
    if(selector == 2){
    key = key * -1;
    }
    std::cout << "What is your selecter phrase: ";
    std::getline(std::cin >> std::ws, inputphrase);
    for(int i = 0; i < inputphrase.length();i++){
        char currentchar = inputphrase[i] + key;
        currentchar = int(currentchar);
        while(currentchar < 33){
            currentchar += 94;
        }
        while(currentchar > 126){
            currentchar -=94;
        }
        outputphrase += char(currentchar);
    }
    if(selector == 1){
        std::cout << "Your encoded phrase is: |";
    }
    else{
        std::cout << "Your decoded phrase is: |";
    }
    
    std::cout << outputphrase << "|\nIt is with in the bars ||"; 

    return 0;

}