#include <iostream>
#include <cstring>
#include <locale>
#include "find.h"//файл хранящий прототипы(find.h)

using namespace std;

main(){    
	char index;
	char *buff = new char;
	while(1){
		system("cls");
		cout << "***Irregular Verbs***" << endl;
		cout << "Enter the verb(English input, no more than 12 characters): ";
		gets(buff);//ввод слова и запись его в char buff
		if(strlen(buff) < 24){
			for(int i(0); i < strlen(buff); i++){ //посимвольный перевод в нижний регистр
				index = buff[i];
				buff[i] = (char)tolower(index);
			}
			find(buff);//функция поиска(find.cpp)
		}else{
			cout << "too long" << endl;
			system("pause");
		}
		delete buff;
	}
}
