/*
fixed array :

#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
#include <climits>
#include <deque>
using namespace std;

void print(int mat[3][2])
{
    for(int i = 0; i < 3; i++)
    {
        for(int	j = 0; j < 2; j++)
            cout << mat[i][j] << " ";
    }
}

int main()
{
    int m = 3, n = 2;

    int mat[3][2] = {{10, 20},
                     {30, 40},
                     {50, 60}};

    print(mat);

    return 0;
}
*/

/*
#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
#include <climits>
#include <deque>
using namespace std;

void print(int mat[][2], int m)
{
    for(int i = 0; i < m; i++)
    {
        for(int	j = 0; j < 2; j++)
            cout << mat[i][j] << " ";
    }
}

int main()
{

    int mat[3][2] = {{10, 20},
                     {30, 40},
                     {50, 60}};

    print(mat, 3);

    return 0;
}
*/
/*
variable passing:
#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
#include <climits>
#include <deque>
using namespace std;

void print(int mat[][2], int m)
{
    for(int i = 0; i < m; i++)
    {
        for(int	j = 0; j < 2; j++)
            cout << mat[i][j] << " ";
    }
}

int main()
{

    int mat[3][2] = {{10, 20},
                     {30, 40},
                     {50, 60}};

    print(mat, 3);

    return 0;
}
*/

/*
d0uble pointer:

#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
#include <climits>
#include <deque>
using namespace std;

void print(int **arr, int m, int n)
{
    for(int i = 0; i < m; i++)
    {
        for(int	j = 0; j < n; j++)
            cout << arr[i][j] << " ";
    }
}

int main()
{
    int m = 3, n = 2;

    int *arr[m];

    for(int i = 0; i < m; i++)
    {
        arr[i] = new int[n];

        for(int j = 0; j < n; j++)
        {
            arr[i][j] = i;

            cout << arr[i][j] << " ";
        }
    }


    return 0;
}

/*
#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
#include <climits>
#include <deque>
using namespace std;

void print(vector<int> arr[], int m)
{
    for(int i = 0; i < m; i++)
    {
        for(int	j = 0; j < arr[i].size(); j++)
            cout << arr[i][j] << " ";
    }
}

int main()
{
    int m = 3, n = 2;

    vector<int> arr[m];

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            arr[i].push_back(i);
        }
    }

    print(arr, m);

    return 0;
}


*/


#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
#include <climits>
#include <deque>
using namespace std;

void print(vector<vector<int>> arr)
{
    for(int i = 0; i < arr.size(); i++)
    {
        for(int	j = 0; j < arr[i].size(); j++)
            cout << arr[i][j] << " ";
    }
}

int main()
{
    int m = 3, n = 2;

    vector<vector<int>> arr;

    for(int i = 0; i < m; i++)
    {
        vector<int> v;

        for(int j = 0; j < n; j++)
        {
            v.push_back(i);
        }

        arr.push_back(v);
    }

    print(arr);

    return 0;
}
