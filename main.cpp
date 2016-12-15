#include <iostream>
#include <cstring>
#include <locale>
#include "find.h"//файл хранящий прототипы(find.h)

using namespace std;

main(){
	FILE *text;
	char buff[50], index;
	while(1){
		system("cls");
		cout << "***Irregular Verbs***" << endl;
		cout << "Enter the verb: ";
		cin.getline(buff,50);//ввод слова и запись его в char buff
		for(int i(0); i < 50; i++){ // посимвольный перевод в нижний регистр
			index = buff[i];
			buff[i] = (char)tolower(index);
		}
		find(text,buff);//функция поиска(find.cpp)
	}
}
