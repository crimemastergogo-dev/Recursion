#include<stdio.h>

void towerofHanoi(int limit,int source,int aux,int dest)
{
    if(limit>0)
    {
        towerofHanoi(limit-1,source,dest,aux);
            printf("(%d,%d)\n",source,dest);
        towerofHanoi(limit -1,aux,source,dest);
    }

}

int main()
{

    towerofHanoi(6,1,2,3);
        return 0;
}
