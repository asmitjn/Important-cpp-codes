/************************************************ 
Dynamic array; very complicated question.

Sample Input

2 2
3 1 5 4
5 1 2 8 9 3
0 1
1 3
Sample Output

5
9

*************************************************/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, q;
    cout << "Enter n and q\n";
    cin >> n >> q;
    
    vector <vector<int>> vector_2d;
    //row i varies from 0 to (n-1)
    int size; // size of a vector in each row of vector_2d
    //column j varies from 0 to (size-1)

    for (int i=0; i< n; i++)
    {
        cout << "Enter size of vec_" <<i<< " and it's values, all seperated by a space\n";
        cin >> size;
        vector <int> vec_i;
        for ( int j =0; j<size; j++)
        {
            int temp;
            // cout << "Enter values ";
            cin >> temp;
            vec_i.push_back(temp);
        }
        vector_2d.push_back(vec_i);
        // cout << endl;    
    }
    cout << "Displaying the vector_2d\n";
    for ( auto row : vector_2d)
    {
        for ( auto col : row)
        {
            cout << col << "  ";
        }
        cout << endl;
    }


    int row, element;
    for (int l{0}; l<q; l++)
    {
        cout << "enter row and element to find\n";
        cin >> row >> element;
        cout << vector_2d.at(row).at(element) << endl;
    }
    return 0;
}



/*************************************************************************************
 Program that I submitted on hacker rank :-

 #include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{  
    int n, q;
    cin >> n >> q;
        
    vector <vector<int>> vector_2d;

    int size; // size of a vector in each row of vector_2d
    for (int i=0; i< n; i++)  //row i varies from 0 to (n-1)
    {
        cin >> size;
        vector <int> vec_i;
        for ( int j =0; j<size; j++)  //column j varies from 0 to (size-1)
        {
            int value;
            cin >> value;
            vec_i.push_back(value);
        }
        vector_2d.push_back(vec_i);    
    }
    
    int row, element;
    for (int l{0}; l<q; l++)
    {
        cin >> row >> element;
        cout << vector_2d.at(row).at(element) << endl;
    }
    
    return 0;
}

**************************************************************************/