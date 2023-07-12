#include<stdio.h>

void main(){
int i,v,m;
int x = 0;

printf("enter the first number :    ");
scanf("%d",&v);

printf("enter the last number :    ");
scanf("%d",&m);

int a[m+v];

for(i=v;i<=m;i++){
if(i%4==0){
   a[x]=i;
   x++;
}}

for(i=0;i<x;i++){
printf(" The leap year is : %d\n",a[i]);
}

}
