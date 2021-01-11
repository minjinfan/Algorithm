#include<iostream>
#include<cstdlib>
#include<ctime>
#include"src/Divide.h"
using namespace std;

int main()
{
    Divide dc;
    int n = 10;
    int a[] = {2,5,1,7,10,6,9,4,3,8};
    printf("before:  ");
    dc.disp_(a, n);
    dc.QuickSort(a, 0, n - 1);
    printf("after:  ");
    dc.disp_(a, n);

    cout << endl << endl;

    Divide DC;
    int n2 = 10;
    vector<int> ivec(n2);

    srand( (int)time(NULL) );
    for(int i = 0; i < n2; ++i){
        ivec[i] = rand() % 100;
    }

    printf("before:  ");
    DC.disp(ivec, ivec.size());
    DC.MergeSort(ivec, ivec.size());
    printf("after:  ");
    DC.disp(ivec, ivec.size());

    // getchar();

    cout << "Hello World !" << endl;
    return 0;
}