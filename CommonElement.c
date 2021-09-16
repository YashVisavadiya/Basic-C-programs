#include<stdio.h>
#include<conio.h>

void main(){
	int n,i,j,k,count=0;
	scanf("%d",&n);
	
	int a[n],b[n],c[n],common[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++){
		scanf("%d",&c[i]);
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i] == b[j]){
				for(k=0;k<n;k++){
					if(b[j] == c[k] ){
						common[count]=a[i];
						count++;
						break;
					}
				}
			}
		}
	}	
	
	for(i=0;i<count;i++){
		printf("%d\n",common[i]);
	}
	
}
