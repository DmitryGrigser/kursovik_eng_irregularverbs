#include <iostream>
#include <cstring>
#include <locale>
#include "find.h"

using namespace std;

main(){
	FILE *text;
	char buff[50], index;
	while(1){
		system("cls");
		cout << "***Irregular Verbs***" << endl;
		cout << "Enter the verb: ";
		cin.getline(buff,50);
		for(int i(0); i < 50; i++){
			index = buff[i];
			buff[i] = (char)tolower(index);
		}
		find(text,buff);
	}
}
