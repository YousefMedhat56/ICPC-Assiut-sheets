#include "iostream"
#include "string"
#include "vector"
#include "algorithm"
using namespace std;

struct Student
{
    string name;
    vector<int> grades;
    int total_grade;
};

bool compareByTotalGrade(Student &a, Student &b)
{
    if (a.total_grade != b.total_grade)
        return a.total_grade > b.total_grade;
    else
        return a.name < b.name;
}

int main()
{
    int n;
    cin >> n;
    vector<Student> students(n);

    for (int i = 0; i < n; i++)
    {
        string name;
        cin >> name;

        vector<int> grades(4);
        int total_grade = 0;
        for (int j = 0; j < 4; j++)
        {
            cin >> grades[j];
            total_grade += grades[j];
        }
        students[i] = {name, grades, total_grade};
    }

    sort(students.begin(), students.end(), compareByTotalGrade);

    for (int i = 0; i < n; i++)
    {
        cout << students[i].name << ' ' << students[i].total_grade << ' ';

        for (int j = 0; j < 4; j++)
        {
            cout << students[i].grades[j] << ' ';
        }
        cout << endl;
    }
    return 0;
}
