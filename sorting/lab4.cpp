#include <bits/stdc++.h>
#include <vector>
#include <chrono>
using namespace std;
void benchmark(function <void(vector<int>&)> func,vector<int>nums){
    auto start =  chrono::high_resolution_clock::now();
    func(nums);
    auto end = chrono::high_resolution_clock::now();
    auto duration = end-start;
    cout<<"Ran for: "<<duration.count()<<endl<<"Size: "<<nums.size()<<endl;
}
void sortAnalysis(vector<int> &nums)
{
    int temp=0;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i; j < nums.size(); j++)
        {
            if (nums[j] < nums[i])
            {
                temp = nums[j];
                nums[j] = nums[i];
                nums[i] = temp;
            }
        }
    }
}
void selectionSort(vector<int> &nums){
    int smallestIndex;
    int temp=0;
    for(int i=0;i<nums.size();i++){
        smallestIndex=i;
        for(int j=i;j<nums.size();j++){
            if(nums[smallestIndex]>nums[j]){
                smallestIndex=j;
            }
        }
        temp=nums[i];
        nums[i]=nums[smallestIndex];
        nums[smallestIndex]=temp;
    }
}
int main()
{
    for (int i = 10; i <= 10000; i*=10)
    {
        vector<int> arr1;
        for (int j = 1; j < i; j++)
        {
            arr1.push_back(rand() % 11);
        }
        benchmark(selectionSort,arr1);
        benchmark(sortAnalysis,arr1);
    }
}
