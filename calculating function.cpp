#include <iostream>
using namespace std;
int main()
{   long long number,sum=0,result;
    cin>>number;
    if (number%2!=0)
        {   sum=(number+1)/2;
            result=((number+1)-sum)*-1;
        }
        else
            {sum=(number)/2;
            result=((number)-sum);
    }
    cout<<result;
    return 0;
}
