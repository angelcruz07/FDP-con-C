#include "iostream"
using namespace std;

int main()
{
    int matriz[10][10];

    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            matriz[i][j] = (i+1)*(j+1);
        }
    }

    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            cout << matriz[i][j] << "\n";
        }
    }

    system("pause");
    return 0;
}