#include <iostream>
#include <string>
using namespace std;

int countVowel(string str);

int main() {
	string sentence;
	cout << "Enter a sentence or press Q to quit: ";
	cin >> sentence;
	cout << "Vowel Count: " << countVowel(sentence) << endl;
}

int countVowel(string str) {
	int vowel_count = 0;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'a' || str[i] == 'A') {
			vowel_count++;
		}
		else if (str[i] == 'e' || str[i] == 'E') {
			vowel_count++;
		}
		else if (str[i] == 'i' || str[i] == 'I') {
			vowel_count++;
		}
		else if (str[i] == 'o' || str[i] == 'O') {
			vowel_count++;
		}
		else if (str[i] == 'u' || str[i] == 'U') {
			vowel_count++;
		}
	}
		return (vowel_count);
}