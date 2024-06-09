#include "LongestWord.h"

LongestWord::LongestWord(string name): name(name){};

string LongestWord::GetName() {
	return name;
}

int LongestWord::Compute(string name) {
	int maxLength = 0, length;
	string space = " ";
	size_t startWord, endWord;
	name += string(" ");
	startWord = name.find_first_not_of(space);
	while (startWord != string::npos) {
		endWord = name.find_first_of(space, startWord);
		length = endWord - startWord;
		if (length > maxLength) {
			maxLength = length;
		}
		startWord = name.find_first_not_of(space, endWord);
	}
	return maxLength;
}