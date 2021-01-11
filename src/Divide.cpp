#include"Divide.h"
#define QUICKSORT
#define MERGESORT
using namespace std;

void Divide::disp(vector<int> &a)
{
    for(auto i : a){
        cout << i << "  ";
    }
    cout << endl;
}

void Divide::disp_(int a[], int n)
{
    for(int i = 0; i < n; ++i){
        printf("%d  ", a[i]);
    }
    printf("\n");
}

#ifdef QUICKSORT    
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

#endif

/********************************************************   合并排序   *************************************************************/ 
#ifdef MERGESORT

void Divide::Merge(std::vector<int> &a, int low, int mid, int high)
{
    // 将 a[low ... mid] 和 a[mid+1 ... high] 两个相邻的有序归并为一个有序子列 a[low ... high]
    std::vector<int> tmpa(high - low + 1);
    
    int i = low, j = mid + 1, k = 0;
    while(i <= mid && j <= high){    // 两个子表均未扫描完成
        if(a[i] <= a[j])
        {
            tmpa[k] = a[i];
            ++i;
            ++k;
        }
        else{
            tmpa[k] = a[j];
            ++j;
            ++k;
        }
    }

    // 将未扫描完的子列复制过去
    while(i <= mid){
        tmpa[k] = a[i];
        ++i;
        ++k;
    }
    while(j <= high){
        tmpa[k] = a[j];
        ++j;
        ++k;
    }

    // 将 tmpa 复制回 a 
    for(k = 0, i = low; i <= high; ++k, ++i){
        a[i] = tmpa[k];
    }

}

void Divide::MergeSort(std::vector<int> &a, int n)
{
    for(int length = 1; length < n; length = 2 * length){
        MergePass(a, length, n);
    }
}

void Divide::MergePass(std::vector<int> &a, int length, int n)
{
    int i;
    for(int i = 0; i + 2 * length <  n; i = i + 2 * length){
        Merge(a, i, i + length - 1, i + 2 * length - 1);
    }

    if(i + length - 1 < n)
        Merge(a, i, i + length - 1, n - 1);
}

void Divide::MergeSort_up_to_down(std::vector<int> &a, int low, int high)
{
    int n = a.size();
    int mid;
    if(low < high){
        mid = (low + high) / 2;
        MergeSort_up_to_down(a, low, mid);
        MergeSort_up_to_down(a, mid + 1, high);
        Merge(a, low, mid, high);
    }
}

#endif

int Divide::QuickSelect(std::vector<int> &ivec, int s, int t, int k)
{
    int i = s, j = t;
    int tmp;
    
    if(s < t){
        tmp = ivec[s];

        while(i != j){

            while(j > i && ivec[j] >= tmp)
                --j;
            ivec[i] = ivec[j];

            while(i < j && ivec[i] <= tmp)
                ++i;
            ivec[j] = ivec[i];

        }
        
        ivec[i] = tmp;
        if(i == k - 1)  return ivec[i];
        else if(k - 1 < i)  QuickSelect(ivec, s, i - 1, k);
        else if(k - 1 > i)  QuickSelect(ivec, i + 1, t, k);
        
    }
    else if(s == t && s == k - 1)
    {
        return ivec[s];
    }

}