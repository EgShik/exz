#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string getschedule(string filename) {
    string str;
    string line;
    fstream file(filename);
    if (!file.is_open()) {
        cout << "�� ������� ������� ����, ��������� ��������� ������";
    }
    while (getline(file, line)) {
        str += line + "\n";
    }

   file.close();

    return str;
}

string getfilename(string WeekDay, string WeekNum) {
    return WeekDay + "_" + WeekNum + ".txt";
}

int main() {
    setlocale(LC_ALL, "Russian");
    string WeekDay;
    string SubgroupNumber;
    string WeekNum;

    cout << "������� ���� ������ �� ���������� � ��������� ����� (������: monday)" << endl;
    cin >> WeekDay;

    cout << "������� ����� ������ (1,2) ���� � ���������� ��� ������� �� ������(�������� �� �������) ������� 1" << endl;
    cin >> WeekNum;


    string filename = getfilename(WeekDay, WeekNum);
    string schedule = getschedule(filename);
    cout << endl << "============================= ���������� ========================================" << endl;
    cout << schedule;
        
    bool flag;
    cin >> flag;
    return 0;
}
