#include"SortAlgorithm.hpp"
#include"Common.h"

void SortAlgorithm::BubbleSort0(vector<int> &vec)
{
    for(int i = 0; i < vec.size(); ++i){
        for(int j = i+1; j < vec.size(); ++j){
            if(vec[i] > vec[j]){
                Swap(vec[i], vec[j]);
            }
        }
    }
}
void SortAlgorithm::BubbleSort1(vector<int> &vec)
{
   
}
void SortAlgorithm::BubbleSort2(vector<int> &vec)
{
   
}