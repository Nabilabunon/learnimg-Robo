#include<stdio.h>
int main(){
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
int D=(b*b)-4*a*c;
if(D>0){
printf("Good Eqn");
}
else if(D==0){
    printf("Best Eqn");
}
else{
    printf("Bad Eqn");
}
return 0;
}
