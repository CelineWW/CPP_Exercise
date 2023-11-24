#include <iostream>
#include <fstream>
#include <string>
//#include <vector>
//#include <map>
#include <set>

using namespace std;

//vector<string> display_and_load_words(string filename);
//map<string, int> get_word_count(const vector<string>& words);
multiset<string> display_and_load_words(string filename);
set<string> get_unique_words(multiset<string>& words);

//int main() {
//    cout << "The Word Counter program\n\n";
//
//    string filename = "dickens.txt";
//    auto words = display_and_load_words(filename);
//
//    cout << words.size() << " WORDS: ";
//    for (string word : words) {
//        cout << word << ' ';
//    }
//    cout << endl << endl;
//
//    auto word_count = get_word_count(words);
//
//    cout << word_count.size() << " UNIQUE WORDS: ";
//    for (auto pair : word_count) {
//        cout << pair.first << ' ';
//    }
//    cout << endl << endl;
//
//    cout << "COUNT PER WORD: ";
//    for (auto pair : word_count) {
//        cout << pair.first << '=' << pair.second << ' ';
//    }
//    cout << endl << endl;
//}
int main() {
    cout << "The Word Counter program\n\n";

    string filename = "dickens.txt";
    
    cout << "FILE TEXT: ";
    auto words = display_and_load_words(filename);

    cout << " WORDS COUNT: " << words.size();
    cout << endl << endl;

    auto unique_words = get_unique_words(words);
    cout << unique_words.size() << " UNIQUE WORDS: ";
    for (string word : unique_words) {
        cout << word << ' ';
    }
    cout << endl << endl;

    cout << "COUNT PER WORD: ";
    for (string word : unique_words) {
        cout << word << '=' << words.count(word) << ' ';
    }
    cout << endl << endl;
}

//vector<string> display_and_load_words(string filename) {
//    vector<string> words;
//    ifstream infile(filename);
//
//    if (infile) {
//        string word;
//        while (infile >> word) {
//
//            string new_word = "";
//            for (char c : word) {
//                if (c == '.' || c == ',') {
//                    continue;               // remove punctuation
//                }
//                else if (isupper(c)) {
//                    new_word += tolower(c); // convert to lowercase
//                }
//                else {
//                    new_word += c;
//                }
//            }
//			cout << new_word << ' ';
//            words.push_back(new_word);      // add word
//        }
//        infile.close();
//    }
//    return words;
//}
multiset<string> display_and_load_words(string filename) {
    multiset<string> words;
    ifstream infile(filename);

    if (infile) {
        string word;
        while (infile >> word) {
            cout << word << ' ';
            string new_word = "";
            for (char c : word) {
                if (c == '.' || c == ',') {
                    continue;               // remove punctuation
                }
                else if (isupper(c)) {
                    new_word += tolower(c); // convert to lowercase
                }
                else {
                    new_word += c;
                }
            }
//            cout << new_word << ' ';
            words.insert(new_word);      // add word
        }
        cout << endl << endl;
        infile.close();
    }
    return words;
}

//map<string, int> get_word_count(const multiset<string>& words) {
//    map<string, int> word_count{};
//
//    for (string word : words) {
//        auto search = word_count.find(word);
//        if (search == word_count.end()) {
//            word_count[word] = 1;   // not found - add word with count of 1
//        }
//        else {
//            word_count[word] += 1;  // found - increment count for word
//        }
//    }
//    return word_count;
//}

set<string> get_unique_words(multiset<string>& words) {
    set<string> unique_words = {};
    for (string word: words) {
        auto iter = unique_words.find(word);
        if (iter == unique_words.end()){
            unique_words.insert(word);
        }
    }
    return unique_words;
}
