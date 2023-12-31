#include <iostream>
using namespace std;

// Kiểm tra Số Hoàn Thiện
// Input : 1 số nguyên dương
// Output :
    // True : Là số hoàn thiện
    // False : Không là số hoàn thiện
bool Check_SHT(int N)
{
    int S = 0;
    for (int i = 1; i <= N/2; i++)
        if (N % i == 0)
            S += i;  // S = S + i

    if (S == N&& N!= 0)
        return true; // Là số hoàn thiện
    return false;     // Không là số hoàn thiện
}

int main()
{
    int N;
    cout << "N = ";
    cin >> N;

    bool result = Check_SHT(N);
    if (result == true)
        cout << "La SHT";
    else
        cout << "Khong la SHT";


    cout << endl;
    system("pause");
}
