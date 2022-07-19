#include<iostream>

using namespace std;
int main()
{

    int times, a[7];
    cin >> times;
    while (times --){
        int count = 0;
        cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4] >> a[5] >> a[6];
        for (int i = 0; i < 7; i++){
            
            count = count + a[i];
        }

        if (count >= 4){
            cout << "YES" << endl;
        }

        else{
            cout << "NO" << endl;
        }
    }



    return 0;
}