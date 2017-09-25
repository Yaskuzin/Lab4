#include <iostream>
using namespace std;
int main() {
    int *a = new int[60];
    for (int i = 0;i<60;i++){
    a[i] = rand()%10000;
        cout<<"a["<<i<<"] = "<<a[i]<<endl;
    }
    int *b = new int[30];
    for (int i =0;i<30;i++){
        b[i] = a[2*i];
        cout<<"b["<<i<<"] = "<<b[i]<<endl;
    }
    delete []a;
    return 0;
}