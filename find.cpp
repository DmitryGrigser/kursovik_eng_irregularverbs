#include <iostream>
#include <cstring>
#include <locale>
#include "find.h"//файл хранящий прототипы

using namespace std;

struct verb {// состав структуры
char Infinitive[50]; 
char PastIndefinite[50]; 
char dop[50];
char ParticipleII[50]; 
char Translation[50];
}v1;

void find(FILE *text, char* buff){
	text = fopen("new.dat", "rb");//открытие файла(БД)
	fread(&v1,sizeof(v1),1,text);//чтение строки
	while(!feof(text)){ //пока файл не кончился
		if(strcmp(v1.Infinitive,buff) == 0){ //поиск полного совподения
			cout <<"Verb: " << v1.Infinitive << " \nTranslation: " << v1.Translation  << endl;
			system("pause");
			break;
		}
		if(strcmp(v1.PastIndefinite,buff) == 0){ //поиск полного совподения
			cout <<"Verb: " << v1.Infinitive << " \nTranslation: " << v1.Translation  << endl;
			system("pause");
			break;
		}
		if(strcmp(v1.dop,buff) == 0){ //поиск полного совподения
			cout <<"Verb: " << v1.Infinitive << " \nTranslation: " << v1.Translation  << endl;
			system("pause");
			break;
		}
		if(strcmp(v1.ParticipleII,buff) == 0){ //поиск полного совподения
			cout <<"Verb: " << v1.Infinitive << " \nTranslation: " << v1.Translation  << endl;
			system("pause");
			break;
		}
		fread(&v1,sizeof(v1),1,text);//чтение строки(след.)
	}
	if(feof(text)){ // если файл концился то...
	cout << "The verb is not found" << endl;
	system("pause");
	}
	fclose(text);//закрытие файла(БД)
}

