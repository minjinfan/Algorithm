#include<iostream>
#include<vector>

using namespace std;

template<typename T>
inline void ShowVec(vector<T> &vec)
{
    for(auto &v : vec){
        cout << v << "\t";
    }
    cout << endl;
}

template<typename T>
inline void Swap(T &A, T &B)
{
    T tmp;
    tmp = A;
    A = B;
    B = tmp;
}