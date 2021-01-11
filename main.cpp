#include<iostream>
#include<cstdlib>
#include<ctime>
#include"src/Divide.h"
using namespace std;

int main()
{
    Divide DC;
    int n2 = 10;
    vector<int> ivec(n2);
    srand( (int)time(NULL) );
    for(int i = 0; i < n2; ++i){
        ivec[i] = rand() % 100;
    }

    printf("测试数组为：\n");
    DC.disp(ivec);
    int find_k = rand() % 10 + 1;   // (s ... t]
    int res = DC.QuickSelect(ivec, 0, ivec.size(), find_k);
    printf("第%d小的元素为:  %d\n", find_k, res);
    
    cout << "Hello World !" << endl;
    return 0;
}