#include<iostream>
#include"src/Divide.hpp"
using namespace std;

int main(int argc, char* argv)
{
    Divide dc;
    int n = 10;
    int a[] = {2,5,1,7,10,6,9,4,3,8};

    printf("before:  ");
    dc.disp(a, n);

    dc.QuickSort(a, 0, n - 1);
    printf("after:  ");

    dc.disp(a, n);
   

   return 0;
}