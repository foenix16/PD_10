#include <iostream>
using namespace std;
bool ConsecutiveList(int arr[], int length) 
{
    int min= arr[0];
    int max= arr[0];
    for(int i=1; i<length; i++) 
    {
        if (arr[i]< min) 
        {
            min=arr[i];
        }
        if (arr[i]> max) 
        {
            max=arr[i];
        }
    }
    if(max-min+1 !=length) 
    {
        return false;
    }
    for(int i=0; i<length; i++) 
    {
        for(int j=i+1; j<length; j++) 
	{
            if(arr[i] == arr[j]) 
	    {
                return false;
            }
        }
    }
    return true;
}

main() 
{
    int length;
    cout << "Enter the length of the array: ";
    cin >> length;
    int arr[length];

    cout << "Enter the elements of the array: ";
    for(int i=0; i<length; i++) 
    {
        cin >> arr[i];
    }
    if(ConsecutiveList(arr, length)) 
    {
        cout << "True" << endl;
    } 
    else 
    {
        cout << "False" << endl;
    }
}
