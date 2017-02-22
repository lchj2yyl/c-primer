//
// Created by lchj on 2017/2/18.
//

#include "StringTest.h"

void StringTest::inputString() {
    String line;
    cout << "input by line";
    while (getline(cin, line) && line != "-1"){
        cout << line << endl;
    }
}

void StringTest::inputWord() {
    cout << "input a word" << endl;
    String word;
    while(cin >> word){
        cout << word << endl;
    }
}

void StringTest::compareWord() {
    cout << "input two words" << endl;
    String word1, word2;
    cin >> word1 >> word2;
    String word = (word1 > word2 ?word1 : word2);
    cout << word << endl;
}

void StringTest::link_word() {
    cout << "input words" << endl;
    String link_word;
    String word;
    while (cin >> word && word != "-1"){
        link_word += word;
    }
    cout << link_word << endl;
}

void StringTest::handleString() {
    cout << "input a string" << endl;
    String str;
    cin >> str;
    for(int i = 0; i< str.size(); i++){
        if((str[i]) != '.'){
            cout << str[i];
        }
    }
    cout << endl;
}