//#include <iostream>
//#include <Windows.h>
//#include <fstream>
//
//#define O cout
//#define E endl;
//using namespace std;

//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//    O << "РОБОТА З ФАЙЛАМИ!\n";
//    // // ЗАПИС!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//    //ofstream file("test.txt");
//    //if (file) O << "Все добре! Файл існує!"<<E
//    //else {
//    //    O << "Файл не знайдено!"<<E
//    //    return 1;
//    //}
//    //O << "==================" << E
//
//    //    O << "Введіть будь-яку інформацію, вона буде автоматично збережена у файл. Зупинка процеса +\n";
//    //char txt[20];
//    //int row = 1;
//    //do {
//    //    O << row << ")";
//    //    cin.getline(txt, 20);
//    //    if (*txt == '+') break;
//    //    file << txt << E
//    //        row++;
//    //} while (*txt!='+');
//    //O << "Процесс завершився!" << E
//    //    file.close();
//
//
//    // // ЗЧИТУВАННЯ!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//    //ifstream f("test.txt");
//    //if (!f.is_open()) {
//    //    O << "Файл не знайдено!"<<E
//    //    return 1;
//    //}
//    //char txt[20];
//    //int row = 0;
//    //do {
//    //    f.getline(txt, 20);
//    //    O << row << ")" << txt << E
//    //        row++;
//    //} while (f);
//    //f.close();
//
//
//
//    // // ДОЗАПИС!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//    //ofstream file("test.txt", ios::app);
//    //if (!file) {
//    //    O << "Файл не знайдено!" << E
//    //    return 1;
//    //}
//    //char txt[20];
//    //int row = 1;
//    //O << "Ви робите дозапис до файлу до тих пір, поки не введено *\n" << E
//    //    while (*txt != '*') {
//    //        row++;
//    //        O << row << ")";
//    //        cin.getline(txt, 20);
//    //        if (*txt == '*') break;
//    //        file << txt << E
//    //    }
//    //O << "Процесс завершився!" << E
//    //    file.close();
//
//
//    // // ПРАКТИЧНА РОБОТА
//    //// 1 завдання 
//    //ifstream file("test.txt");
//    //if (!file) {
//    //    O << "Файл не знайдено!" << E
//    //    return 1;
//    //}
//    //char txt[20];
//    //int rah=0;
//    //string num;
//    //bool end = false;
//    //while (file) {
//    //    file.getline(txt, 20);
//    //    for (int i = 0; txt[i] != '\0'; i++) {
//    //        if (isdigit(txt[i])) {
//    //            num += txt[i];
//    //            cout << num <<" ";
//    //            if (!end) {
//    //                rah++;
//    //                end = true;
//    //            }
//    //            else end = false;
//    //        }
//    //        if (txt[i] == ' ') {
//    //            cout << num << " ";
//    //            rah++;
//    //            num = "";
//    //        }
//    //    }
//    //    //for (int i = 0; txt[i]!='\0'; i++) {
//    //    //    if ((txt[i]) >= '0' && (txt[i]) <= '9') O << txt[i]<<E
//    //    //}     
//    //}
//    //cout << "Кількість чисел: " << rah << endl;
//    //file.close();
//
//    // Не правильно працює 
//
//
//
//}

#include <iostream>
#include <Windows.h>
#include <fstream>
using namespace std;

typedef struct{
	string tel;
	string prith;
}People;

int main() {
	SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

	ofstream file("abonent.txt");
	if (!file) {
		cout << "Файл не знайдено!" << endl;
	    return 1;
	}
	People mas[10];
	int index = 0;
	int yes;
	do {
		cout << "Введіть прізвище та номер " << index + 1 << " абонента: ";
		cin >> mas[index].prith >> mas[index].tel;
		file << index + 1 << ") " << mas[index].prith << ": " << mas[index].tel<<endl;

		cout << "Хочете ще додати? (1-так 2-ні)";
		cin >> yes;
		index++;
	} while (yes==1);
	cout << "Всі абоненти збережені!";
	file.close();
}