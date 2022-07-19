#include <iostream>
#include <vector>
 
using namespace std;
 
// function to perform DNF Sort
void DNF_Sort(vector <int> &arr)
{
    // initialize the pointers
    int low = 0;
    int mid = 0;
    int high = arr.size() - 1;
 
    // start the while loop and
    // start shrinking the middle portion
    while(mid <= high)
    {
        // for each element
        // we will follow the
        // logic given below
        if(arr[mid] == 0)
        {
            // swap the elements
            // and update the pointers
            swap(arr[mid], arr[low]);
            mid++;
            low++;
        }
        else if(arr[mid] == 1)
        {
            // do nothing
            mid++;
        }
        else if(arr[mid] == 2)
        {
            // swap the elements and
            // update the pointers
            // notice that we do not
            // increment mid here
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}
 
void print_vector(vector <int> v)
{
    for(int ele : v)
        cout << ele << " ";
    cout << endl;
}
 
int main()
{
    // Take the input
    vector <int> arr;
    cout << "Enter the elements, press -1 to stop" << endl;
 
    while(true)
    {
        int ele;
        cin >> ele;
 
        if(ele == -1)
            break;
 
        arr.push_back(ele);
    }
 
    // call the DNF_Sort function
    DNF_Sort(arr);
    cout << "The sorted vector is:" << endl;
    print_vector(arr);
}