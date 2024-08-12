#include <iostream>
#include <string>
#include <cctype>

bool isNumber(const std::string& str) {
    if (str.empty()) return false;
    for (size_t i = 0; i < str.length(); i++) {
        if (i == 0 && str[i] == '-') continue; 
        if (!isdigit(str[i])) return false;
    }
    return true;
}
std::string decrypt(const std::string& text, int key) {
    std::string result = text;
    for (size_t i = 0; i < text.length(); i++) {
        if (isupper(text[i])) {
            result[i] = char((text[i] - 'A' - key + 26) % 26 + 'A');
        }
        else if (islower(text[i])) {
            result[i] = char((text[i] - 'a' - key + 26) % 26 + 'a');
        }
        else {
            result[i] = text[i];
        }
    }

    return result;
}
int main() {
    std::string input;
    int key;
    while (true) {
        std::cout << "Enter input: ";
        std::cin >> input;
        if (isNumber(input)) {
            key = std::stoi(input);
            break;
        } else {
            std::cout << "Wrong input, try again" << std::endl;
        }
        }
    std::cout << "Enter the encrypted word or sentence:\n  ";
    std::cin.ignore(); 
    std::getline(std::cin, input);
    std::string decryptedText = decrypt(input, key);
    std::cout << "Decrypted text: " << decryptedText << std::endl;
    return 0;
}