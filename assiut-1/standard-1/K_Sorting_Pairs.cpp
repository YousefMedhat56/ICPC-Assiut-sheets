#include "iostream"
#include "vector"
#include "string"
#include "algorithm"
using namespace std;

struct Employee
{
    string name;
    int salary;
};

bool compare(Employee &a, Employee &b)
{
    if (a.salary != b.salary)
        return a.salary > b.salary;

    else
        return a.name < b.name;
}

int main()
{

    int n;
    cin >> n;
    vector<Employee> employees(n);
    for (int i = 0; i < n; i++)
    {
        string name;
        int salary;
        cin >> name >> salary;
        employees[i] = {name, salary};
    }

    sort(employees.begin(), employees.end(), compare);

    for (int i = 0; i < n; i++)
    {
        cout << employees[i].name << ' ' << employees[i].salary << endl;
    }
    return 0;
}