#include <iostream>

int main()
{
    int sum;
    int num[10] = {1,2,3,4,5,6,7,8,9,10};
    for(int i = 0; i<10 ;i++)
    {
        sum+=num[i];
    }
    int *p = num;
    for(int i = 0;i<10;i++)
    {
        sum+=*(p++);
    }
    return 0;
}
