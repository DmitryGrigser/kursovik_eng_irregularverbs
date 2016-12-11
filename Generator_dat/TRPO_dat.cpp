#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <conio.h>

using namespace std;

struct verb {char Infinitive[50]; char PastIndefinite[50]; char ParticipleII[50]; char Translation[50];}v1;

void input(FILE *);
void print(FILE *);
void app(FILE *);
void find(FILE *);


int main(){
	FILE *text;
	int ch;
	while(1){
		system("cls");
		puts(" 1 - new file");
		puts(" 2 - file preview");
		puts(" 3 - add to file");
		puts(" 4 - change");
		puts(" 0 - exit");
		ch = getch();
		switch(ch)
		{
			case '1': input(text);break;
			case '2': print(text);break;
			case '3': app(text);break;
			case '4': find(text);break;
			case '0': return 0;
			default: puts("error");
		}
	}
}
void input(FILE *text){
	char ch,buff[50];
	system("cls");
	text = fopen("new.dat", "wb");
	cout << "verb" << endl;
	do{
		cout << "Infinitive: " << endl;
		cin.getline(v1.Infinitive,50);
		cout << "PastIndefinite: " << endl;
		cin.getline(v1.PastIndefinite,50);
		cout << "ParticipleII: " << endl;
		cin.getline(v1.ParticipleII,50);
		cout << "Translation: " << endl;
		cin.getline(v1.Translation,50);
		fwrite(&v1,sizeof(v1),1,text);
		cout << "complete? y/n" << endl;
		ch = getch();
	}while(ch != 'y');
	fclose(text);
}
void print(FILE *text){
	int i(1);
	system("cls");
	text = fopen("new.dat", "rb");
	fread(&v1,sizeof(v1),1,text);
	while(!feof(text)){
		cout << " ¹ " << i << "\nInfinitive: " << v1.Infinitive << "\nPastIndefinite: " << v1.PastIndefinite << "\nParticipleII: " << v1.ParticipleII << "\nTranslation: " << v1.Translation << endl;
		fread(&v1,sizeof(v1),1,text);
		i++;
	}
	getch();
}
void app(FILE *text){
	char ch,buff[50];
	system("cls");
	text = fopen("new.dat", "ab");
	cout << "verb" << endl;
	do{
		cout << "Infinitive: " << endl;
		cin.getline(v1.Infinitive,50);
		cout << "PastIndefinite: " << endl;
		cin.getline(v1.PastIndefinite,50);
		cout << "ParticipleII: " << endl;
		cin.getline(v1.ParticipleII,50);
		cout << "Translation: " << endl;
		cin.getline(v1.Translation,50);
		fwrite(&v1,sizeof(v1),1,text);
		cout << "complete? y/n" << endl;
		ch = getch();
	}while(ch != 'y');
	fclose(text);
}
void find(FILE *text){
	char ch, buff[50];
	text = fopen("new.dat", "rb+");
	cout << "enter the verb: ";
	cin.getline(buff,50);
	fread(&v1,sizeof(v1),1,text);
	while(!feof(text)){
		if(strcmp(v1.Infinitive,buff) == 0){
			cout <<"verb: " << v1.Infinitive << " transfer: " << v1.Translation  << endl;
			cout << "change? y/n" << endl;
			ch = getch();
			if(ch == 'y')
			{
				cout << "Infinitive: " << endl;
				cin.getline(v1.Infinitive,50);
				cout << "PastIndefinite: " << endl;
				cin.getline(v1.PastIndefinite,50);
				cout << "ParticipleII: " << endl;
				cin.getline(v1.ParticipleII,50);
				cout << "Translation: " << endl;
				cin.getline(v1.Translation,50);
				long i = sizeof(v1);
				fseek(text, -i, 1);
				fwrite(&v1,sizeof(v1),1,text);
				break;
			}
		}
		if(strcmp(v1.PastIndefinite,buff) == 0){
			cout <<"verb: " << v1.Infinitive << " transfer: " << v1.Translation  << endl;
			cout << "change? y/n" << endl;
			ch = getch();
			if(ch == 'y')
			{
				cout << "Infinitive: " << endl;
				cin.getline(v1.Infinitive,50);
				cout << "PastIndefinite: " << endl;
				cin.getline(v1.PastIndefinite,50);
				cout << "ParticipleII: " << endl;
				cin.getline(v1.ParticipleII,50);
				cout << "Translation: " << endl;
				cin.getline(v1.Translation,50);
				long i = sizeof(v1);
				fseek(text, -i, 1);
				fwrite(&v1,sizeof(v1),1,text);
				break;
			}
		}
		if(strcmp(v1.ParticipleII,buff) == 0){
			cout <<"verb: " << v1.Infinitive << " transfer: " << v1.Translation  << endl;
			cout << "change? y/n" << endl;
			ch = getch();
			if(ch == 'y')
			{
				cout << "Infinitive: " << endl;
				cin.getline(v1.Infinitive,50);
				cout << "PastIndefinite: " << endl;
				cin.getline(v1.PastIndefinite,50);
				cout << "ParticipleII: " << endl;
				cin.getline(v1.ParticipleII,50);
				cout << "Translation: " << endl;
				cin.getline(v1.Translation,50);
				long i = sizeof(v1);
				fseek(text, -i, 1);
				fwrite(&v1,sizeof(v1),1,text);
				break;
			}
		}
		fread(&v1,sizeof(v1),1,text);
	}
	cout << "error" << endl;
	system("pause");
	fclose(text);
}




