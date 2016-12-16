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
}v;

void find(char *buff){
	FILE *text;
	text = fopen("new.dat", "rb");//открытие файла(БД)
	fread(&v,sizeof(v),1,text);//чтение строки
	while(!feof(text)){ //пока файл не кончился
		if(strcmp(v.Infinitive,buff) == 0){ //поиск полного совподения
			cout <<"Verb: " << v.Infinitive << " \nTranslation: " << v.Translation  << endl;
			system("pause");
			break;
		}
		if(strcmp(v.PastIndefinite,buff) == 0){ //поиск полного совподения
			cout <<"Verb: " << v.Infinitive << " \nTranslation: " << v.Translation  << endl;
			system("pause");
			break;
		}
		if(strcmp(v.dop,buff) == 0){ //поиск полного совподения
			cout <<"Verb: " << v.Infinitive << " \nTranslation: " << v.Translation  << endl;
			system("pause");
			break;
		}
		if(strcmp(v.ParticipleII,buff) == 0){ //поиск полного совподения
			cout <<"Verb: " << v.Infinitive << " \nTranslation: " << v.Translation  << endl;
			system("pause");
			break;
		}
		fread(&v,sizeof(v),1,text);//чтение строки(след.)
	}
	if(feof(text)){ // если файл концился то...
	cout << "The verb is not found" << endl;
	system("pause");
	}
	fclose(text);//закрытие файла(БД)
}

