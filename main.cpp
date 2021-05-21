#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, maior;
    cin >> d;
    cin >> b;
    cin >> c;
    a = d - (b + c);
    if (a > b){
        if (a > c){
            maior = a;
        }else{
            maior = c;
        }
    }else{
        if (b > c){
            maior = b;
        }else{
            maior = c;
        }
    }
    cout << maior <<endl;
    return 0;
}
