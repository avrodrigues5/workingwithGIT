#include <stdio.h>

int main()
{
    int i,j,temp,k;
    int a[] = {5,2,4,6,1,3};
    int size_of_a= sizeof(a) / sizeof(int);
    for(i=0;i<size_of_a-1;i++){
    	for(j=size_of_a-1;j>i;j--){
    		if(a[j]<a[j-1]){
    			temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}	
		}
    }
    for(k=0;k<size_of_a;k++){	
        	printf("i is %d\t",k);
        	printf("value is %d\n",a[k]);
    }
    
    return 0;
}
