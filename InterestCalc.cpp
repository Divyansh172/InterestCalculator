#include <iostream>
using namespace std;
class bankDeposit
{
    int principal;
    int years;
    float interestrate;
    float returnvalue;

public:
    // bankDeposit(){}
    bankDeposit(int p, int y, float r)
    {
        principal = p;
        years = y;
        interestrate = r;
        returnvalue = principal;
        for (int i = 0; i < y; i++)
        {
            returnvalue = returnvalue * (1 + interestrate);
        }
    }

    bankDeposit(int p, int y, int r)
    {
        principal = p;
        years = y;
        interestrate = float(r) / 100;
        returnvalue = principal;
        for (int i = 0; i < y; i++)
        {
            returnvalue = returnvalue * (1 + interestrate);
        }
    }
    void show()
    {
        cout << "The calculated value is: " << returnvalue << endl;
    }
};

int main()
{
    // bankDeposit a,b,c;
    int p, y, R;
    float r;

    cout << "Enter the amount with the tenure and expected Rate: ";//code for interest in decimal
    cin >> p >> y >> r;
    bankDeposit a = bankDeposit(p, y, r);
    a.show();

    cout << "Enter the amount with the tenure and expected Rate: ";   //code for interest in integer
    cin >> p >> y >> R;
    bankDeposit b = bankDeposit(p, y, R);
    b.show();
    return 0;
}