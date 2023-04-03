#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main(int argc, char** argv) {
	ifstream vocabfile("C:/Users/lotus/Documents/dev C++/vocab.txt");
//	ifstream vocabfile("vocab.txt"); // works if in the same folder, just like html
	int vocab_array[10000];
	string text;
	string all_the_text = "";
	string input;
	cout << "Hi, Welcome to on_note!"<< endl;
	cout << "what would you like to do today?" << endl;
	cout << "you can 'exit', 'create' a new txt file, 'edit' an existing txt file, or simply just 'read' one" << endl;
	cin >> input;
	if(input == "exit"){
		return 1;
	}
	if(vocabfile.is_open()){
		while(getline(vocabfile , text)){
//		cout << text << endl;
		all_the_text = all_the_text + " " + text;
//		vocab_array[i] = text;
//		i++;
		}
		vocabfile.close();
	}
	cout << all_the_text;
	return 0;
}