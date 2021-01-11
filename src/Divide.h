#ifndef DIVIDE
#define DIVIDE

#include<iostream>
#include<vector>
using namespace std;
class Divide{
public:

    // 快速排序
    void QuickSort(int a[], int s, int t);

    // 合并排序
    void MergeSort(std::vector<int> &a, int n);

    void disp_(int a[], int n);
    void disp(std::vector<int> &a, int n);
private:
    // 快速排序
    int Partition(int a[], int s, int t);       // 划分

    // 合并排序
    void Merge(std::vector<int> &a, int low, int mid, int high);    // 二路归并排序
    void MergePass(std::vector<int> &a, int length, int n);



};


#endif  // !DIVIDE