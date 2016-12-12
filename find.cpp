#include <iostream>
#include <cstring>
#include <locale>
#include "find.h"

using namespace std;

struct verb {
char Infinitive[50]; 
char PastIndefinite[50]; 
char dop[50];
char ParticipleII[50]; 
char Translation[50];
}v1;

void find(FILE *text, char* buff){
	text = fopen("new.dat", "rb");
	fread(&v1,sizeof(v1),1,text);
	while(!feof(text)){
		if(strcmp(v1.Infinitive,buff) == 0){
			cout <<"Verb: " << v1.Infinitive << " \nTranslation: " << v1.Translation  << endl;
			system("pause");
			break;
		}
		if(strcmp(v1.PastIndefinite,buff) == 0){
			cout <<"Verb: " << v1.Infinitive << " \nTranslation: " << v1.Translation  << endl;
			system("pause");
			break;
		}
		if(strcmp(v1.dop,buff) == 0){
			cout <<"Verb: " << v1.Infinitive << " \nTranslation: " << v1.Translation  << endl;
			system("pause");
			break;
		}
		if(strcmp(v1.ParticipleII,buff) == 0){
			cout <<"Verb: " << v1.Infinitive << " \nTranslation: " << v1.Translation  << endl;
			system("pause");
			break;
		}
		fread(&v1,sizeof(v1),1,text);
	}
	if(feof(text)){
	cout << "The verb is not found" << endl;
	system("pause");
	}
	fclose(text);
}

