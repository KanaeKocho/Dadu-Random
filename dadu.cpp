#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    char kon;
    while (true)
    {
        cout << "Mau Lempar Dadu Gak ? (Y/N)" << endl;
        cin >> kon;
        if (kon == 'Y')
        {
            cout << 1 + (rand() % 6) << endl;
        }

        else if (kon == 'N')
        {
            break;
        }
        else
        {
            cout << "Ketik Y / N Dong mz ;(" << endl;
        }
    }
}
