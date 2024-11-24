#include <iostream>
using namespace std;
int FullRotations(string directions[], int length) 
{
    int totalRotation = 0;
    for(int i=0; i<length; i++) 
    {
         if(directions[i] == "right") 
	 {
            totalRotation += 90;
         } 
	 else if(directions[i] == "left") 
	 {
            totalRotation -= 90;
         }
    }
    return totalRotation/360;
}

main() 
{
    int length;
    cout << "Enter the number of directions: ";
    cin >> length;
    string directions[length];
    cout << "Enter the directions (left or right): ";
    for(int i=0; i<length; i++) 
    {
        cin >> directions[i];
    }
    cout << "Full rotations made: " << FullRotations(directions, length) << endl;
}
