#include <bits/stdc++.h>
using namespace std;

struct info
{
    string name, semester;
    char section;
    int id;
    float cgpa;
};

void insert(info student[], int pos, string name, string semester, char section, int id, float cgpa)
{
    student[pos].name = name;
    student[pos].id = id;
    student[pos].section = section;
    student[pos].cgpa = cgpa;
    student[pos].semester = semester;
}

int main()
{
    int n;
    string name, semester;
    char section;
    int id;
    float cgpa;
    cout << "How many students' data you want to store: ";
    cin >> n;
    info student[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Input the data of student no.-" << i + 1 << endl;
        cout << "Name: ";
        cin >> name;
        cout << "ID: ";
        cin >> id;
        cout << "Section: ";
        cin >> section;
        cout << "CGPA: ";
        cin >> cgpa;
        cin.ignore();
        cout << "Semester: ";
        getline(cin, semester);
        insert(student, i, name, semester, section, id, cgpa);
    }
    cout << setw(5) << "Name" << setw(10) << "ID" << setw(15) << "Section" << setw(12) << "CGPA" << setw(16) << "Semester" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << setw(student[i].name.length() + 1) << student[i].name << setw(8 - (student[i].name.length() - 4) + 3) << student[i].id << setw(11) << student[i].section << setw(15) << fixed << setprecision(2) << (float)student[i].cgpa << setw(8 + student[i].semester.length()) << student[i].semester << endl;
    }

    return 0;
}
