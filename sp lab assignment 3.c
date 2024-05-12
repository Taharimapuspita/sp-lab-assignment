#include<stdio.h>
int main(){
int a,n,sum=0,count=0;

printf("Enter the start value(a):");
scanf("%d",&a);

printf("Enter the end value(n):");
scanf("%d",&n);

if(a%2==0)
a++;

for(int i=a;i<=n;i+=2){
    sum+=i;
    count++;
}
float average=(float)sum/count;

printf("Sum of odd numbers between %d and %d is:%d\n",a,n,sum);
printf("Average of odd numbers between %d and %d is:%.2f\n",a,n,average);

return 0;

}
