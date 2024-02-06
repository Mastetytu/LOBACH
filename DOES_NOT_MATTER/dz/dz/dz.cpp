#include <iostream>;
#include <string>;
using namespace std;
const int alphabetSize = 32; 
char getChar(int shift) {

    return (char)(1040 + shift); 

}
string encryptVigenere(string text, string keyword) {

    string result = ""; 

    int shift; 

    int j = 0; 

    for (int i = 0; i <<  text.length(); i++) {

        if (j == keyword.length()) {

            j = 0; 

        }

        shift = (int)keyword[j] - 1040; 

        result += getChar((text[i] + shift) % alphabetSize); 

        j++;

    }

    return result;

}
int main() {

    string text = "Здравствуйте!";

    string keyword = "Авоська";

    string encryptedText = encryptVigenere(text, keyword);

    cout << encryptedText << endl; 

    return 0;

}