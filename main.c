#include <stdio.h>
#include <stdlib.h>

int main() {
	int T;
	int i,j;
	int n,x;
	int tmp;
	int firstTime, lastTime,firstPosition, lastPosition;

	// Count of tests
	scanf("%d",&T);

	for(i=0;i<T;i++)
	{
	    scanf("%d %d", &n, &x);

	    firstTime=1;
	    lastTime=0;
	    lastPosition=-1;
	    for(j=0;j<n;j++)
	    {
	        scanf("%d",&tmp);
	        if(x==tmp)
	        {
	            if(firstTime==1)
	            {
	                firstPosition = j;
	                firstTime = 0;
	            }
	            lastPosition = j;
	        }
	    }
	    if(lastPosition==-1)
	    {
	        printf("-1\n");
	    } else {
	        printf("%d %d\n", firstPosition, lastPosition);
	    }
	}
	return 0;
}

// Code by Michal Slovik
