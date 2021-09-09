#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int distance=10;
    int x=0,y=0;
    char c='R';
    while(n)
    {
        switch(c)
        {
            case 'R':
                    x=x+distance;
                    c='U';
                    distance=distance+10;
                    break;
            case 'U':
                    y=y+distance;
                    c='L';
                    distance=distance+10;
                    break;
            case 'L':
                    x=x-distance;
                    c='D';
                    distance=distance+10;
                    break;
            case 'D':
                    y=y-distance;
                    c='A';
                    distance=distance+10;
                    break;
            case 'A':
                    x=x+distance;
                    c='R';
                    distance =distance+10;
                    break;

        }
        n--;
    }
    printf("%d%d",x,y);

    return 0;

}