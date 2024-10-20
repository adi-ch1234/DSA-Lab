/** First of all lets understand what the linear search algorithm is.
 * In this algorithm we keep on comparing the "element to be searched" with every element of the array.
 * If it matches a specific element of the array then the search is successful else the element is not there in the array.
 * Due to this feature it is also called sequential search.
 * Its time complexity is O(n) where n is the size of the array.*/ 

#include <bits/stdc++.h>
using namespace std;
int main()
{
    //Declared a variable n for the number of elements of the array.
    int n;
    cout<<"Enter the number of elements of the array."<<endl;
    cin>>n;
    cin.ignore();  //It ignores any newline character if entered and moves the cursor to the next line.
    int i,flag = 0,search=0;
    int array[n];

    /*i = The counter varible for all the loops.
      search = To take the input of the element to be searched.
      flag = 0 if the element has not been found and 1 if the element was found.
      array = An array with n elements has been created.*/

    //Taking input into the array.

    cout<<"Enter the elements into the array."<<endl;
    for(i =0;i<n;i++)
    {
        cin>>array[i];
    }
    cin.ignore();
    cout<<"Enter the element to search for."<<endl;
    cin>>search;

    //Now comes the linear search algorithm

    for(i = 0;i<n;i++)
    {
        //Checking if the i'th element of the array matches the search element.
        if(array[i]==search)
        {
            flag = 1;
            break;
        }
    }
    if(flag)
    {
    cout<<"Element "<<search<<" found at position "<<(i+1)<<" in the array."<<endl;
    }
    else
    {
        cout<<"Element "<<search<<" not found."<<endl;
    }
    
}
