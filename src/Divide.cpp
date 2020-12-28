#include"Divide.hpp"
using namespace std;

void Divide::QuickSort(int a[], int s, int t)  // 对a[s..t]元素序列进行递增排序
{
    if(s < t)
    {
        int i = Partition(a, s, t);
        QuickSort(a, s, i - 1);
        QuickSort(a, i + 1, t);
    }
}

int Divide::Partition(int a[], int s, int t)    // 划分算法
{
    int i = s, j = t;
    int tmp = a[s];

    while(i != j)                       // // 从序列的两端交替向中间扫描，知道 i = j 为止
    {
        while(j > i && a[j] >= tmp)     // 从右向左扫描
            --j;
        a[i] = a[j];

        while(i < j && a[i] <= tmp)     // // 从左向右扫描
            ++i;
        a[j] = a[i];
    }
    a[i] = tmp;
    return i;
}

void Divide::disp(int a[], int n)
{
    for(int i = 0; i < n; ++i){
        printf("%d  ", a[i]);
    }
    printf("\n");
}