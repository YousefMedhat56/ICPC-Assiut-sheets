#include "iostream"
#include <vector>
#include <iomanip>
using namespace std;

double avg(vector<double> &numArr)
{
    double sum = 0;
    for (int i = 0; i < numArr.size(); i++)
    {
        sum += numArr[i];
    }

    double count = (double)numArr.size();
    double mean = sum / count;
    return mean;
}

int main()
{
    int n;
    cin >> n;
    vector<double> numArr;

    for (int i = 0; i < n; i++)
    {
        double val;
        cin >> val;
        numArr.push_back(val);
    }

    std::cout << std::fixed;
    std::cout << std::setprecision(6);
    cout << avg(numArr);
    return 0;
}