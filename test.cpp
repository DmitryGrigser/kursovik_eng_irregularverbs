#include <iostream>
#include <cstring>

using namespace std;

struct verb {// состав структуры
char Infinitive[50]; 
char PastIndefinite[50]; 
char dop[50];
char ParticipleII[50]; 
char Translation[50];
}v1;

void find(char *);

main(){
	cout << "positive test(inf + translation)" << endl;
	char buff1[] = "to be";//���������� 
	cout << buff1 << endl;
	find(buff1);
	char buff2[] = "was";//���������� 
	cout << buff2 << endl;
	find(buff2);
	char buff3[] = "were";//���������� 
	cout << buff3 << endl;
	find(buff3);
	char buff4[] = "been";//���������� 
	cout << buff4 << endl;
	find(buff4);
	cout << "negative test(error)" << endl;
	char buff5[] = "@1qW4";//����������
	cout << buff5 << endl;
	find(buff5);
}

void find(char *buff){
	FILE *text;
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
}
