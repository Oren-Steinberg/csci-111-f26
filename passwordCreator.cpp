#include <algorithm>
#include <random>
#include <string>
#include <iostream>

using namespace std;

//creates a random password with the specified numbers of letters, digits, and special characters
string createPassword(int numLetters, int numDigits, int numSpecial){
    if (numLetters < 0 || numDigits < 0 || numSpecial < 0) {
        return "";
    }

    const string letters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const string digits = "0123456789";
    const string specialCharacters = "!@#$%^&*()-_=+[]{};:,.?";

    random_device randomDevice;
    mt19937 generator(randomDevice());
    string password;
    password.reserve(static_cast<size_t>(numLetters) +
                     static_cast<size_t>(numDigits) +
                     static_cast<size_t>(numSpecial));

    auto appendRandomCharacters = [&](const string &characters, int count) {
        uniform_int_distribution<size_t> distribution(0, characters.size() - 1);
        for (int i = 0; i < count; ++i) {
            password += characters[distribution(generator)];
        }
    };

    appendRandomCharacters(letters, numLetters);
    appendRandomCharacters(digits, numDigits);
    appendRandomCharacters(specialCharacters, numSpecial);
    shuffle(password.begin(), password.end(), generator);

    return password;
}

int main(){
    string password1 = createPassword(0,0,0);
    string password2 = createPassword(1,1,1);
    string password3 = createPassword(10, 3, 2);

    cout << "Password 1: " << password1 << endl;
    cout << "Password 2: " << password2 << endl;
    cout << "Password 3: " << password3 << endl;
    
}