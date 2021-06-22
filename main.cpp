#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>

#include"src/Common.h"
#include"src/SortAlgorithm.hpp"

using namespace std;


int main(int argc, char* argv)
{
    vector<int> vec = {2,4,1,9,6,8,3,5,7};
    SortAlgorithm SA0;
    SA0.BubbleSort0(vec);
    ShowVec(vec);
    return 0;
}
