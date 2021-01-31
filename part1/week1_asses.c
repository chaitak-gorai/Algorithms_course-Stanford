#include <stdio.h>
#include <math.h>
long long int product(long long int num1, long long int num2,  int n){
	if(n==2){
		return num1*num2;
	}else{
		long long int a,b,c,d,x;
		x=pow(10,n/2);
		a=num1/x;
		b=num1%x;
		c=num2/x;
		d=num2%x;
		
		long long int ac,bd,ad,bc;
		
	ac=product(a,c,n/2);
	bd=product(b,d,n/2);
	ad=product(a,d,n/2);
	bc=product(b,c,n/2);
	
	return pow(10,n)*ac+pow(10,n/2)*(ad+bc)+bd;
		
		
		
		
	}
	
	
	
}

 int main(){
long long int num1,num2,n,ans;	
	
num1=12345678;
num2=12345678;
n=8;
ans=product(num1,num2,n);
printf("%lld",ans);
}
