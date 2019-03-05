#include<iostream>
using namespace std;
class Number
{
  public:
  void scan();
  int fibonacci(int num);
  int factor(int num);
  int reverse(int num);
  int binary(int num);
  int digit (int num);
  int prime(int num);	
  int num, fib1,fib2,fib3;
  int count,counter,fcount,i;
  int dcount,btemp,temp;
  int bin,rem,rev,base;
};
int main()
{
	Number access;
	access.scan();
	return 0;
}//INPUT
void Number::scan()
{
	cout<<"Input Number:";
	cin>>num;
	fibonacci (num);            //Calling fibonacci function...
}
//FIBONACCI	
int Number::fibonacci(int num)
{
	count=0;
	fib1=0;
	fib2=1;
	cout<<"Fibonacci:" <<fib1 <<" ";
	cout<<fib2 <<" ";
	for(i=2; i<num; i++)
	  {
	  	fib3=fib1+fib2;
	  	cout<<fib3 <<" ";
	  	if(fib3<num)
	  	  {
	  	    count++;	
		  }
	  	fib1=fib2;
	  	fib2=fib3;
	  }
	count=count+2;
	cout<<endl;
	cout<<"Count: " <<count <<endl;
	if(count%2==0)
	 {
	 	factor(count);               //calling factor function...
	 }
	else
	 {
	 	prime(count);               //calling prime function...
	 } 
}
//FOR WASTEFUL NUMBER
//Prime factorization 
int Number::factor(int count)
{
	int j=2;
	fcount=0;
	temp=count;
	cout<<"Prime Factors: ";
	while(temp!=1)
	  {
	  	if(temp%j==0)
	  	  {
	  	    cout<<j <<" ";
	  	    fcount++;
			temp=temp/j;	
		  }
		else
		  {
		  	j++;
		  }
	  }
	cout<<endl;
	digit(count);                      //calling digit function...
}
//Counting Number of Digits for Wasteful Number
int Number::digit(int num)
{
	dcount=0;
	while(num!=0)
	  {
	  	int ndigit=num%10;
	  	dcount++;
	  	num=num/10;
	  }
	if(dcount==fcount)
	  {
	  	cout<<"Yeey!! Useful Number!" <<endl;
	  }
	else
	  {
	  	cout<<"Opps Wasteful Number!" <<endl;
	  }
	
}
//FOR PALINDROMIC PRIME
//Determining Prime/Composite
int Number::prime(int num2)
{
	counter=0;
	for(i=2; i<=num; i++)
	  {
	  	if(num2%i==0)
	  	  {
	  	  	counter++;
		  }
	  }
	if(counter<2)
	  {
	  	cout<<"Prime" <<endl;
	  	binary(num2);                    //calling binary function...
	  }
	else
	  {
	  	cout<<"Composite" <<endl;
	  }
}
//FOR BINARY
int Number::binary(int num3)
{
	btemp=num3;
	bin=0;
	rem=0;
	base=1;
	while(btemp!=0)
	  {
	  	rem=btemp%2;
	  	bin=bin+rem*base;
	  	base=base*10;
	  	btemp=btemp/2;
	  }
	cout<<"Binary: " <<bin <<endl;
	reverse(bin);                       //calling reverse function...
}
//DETERMINING IF PALINDROME NOT
//Reverse
int Number::reverse(int num4)
{
	rev=0;
	while(num4!=0)
	  {
	  	rev=(rev*10)+(num4%10);
	  	num4=num4/10;
	  }
	cout<<"Reverse: " <<rev <<endl;
	if(rev==bin)
	  {
	  	cout<<"Palindromic Prime" <<endl;
	  }
	else
	  {
	  	cout<<"Not Palindrome" <<endl;
	  }
}


