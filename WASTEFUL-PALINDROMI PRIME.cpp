#include<iostream>
using namespace std;
class Number
{
	public:
	void wasteful_no();
	int prime(int num);
	int binary(int num);
	int reverse(int num);
	int pfactor(int num);
	int digit(int num);
	int count,num, j, temp, count1;
	int count2, rev,rem, bin, base;
};
int main()
{
	Number access;
	access.wasteful_no();
	return 0;
}
void Number::wasteful_no()
{
	cout<<"Input Number: ";
	cin>>num;
	prime(num);
}
//--PRIME/COMPOSITE IDENTIFICATION--
int Number::prime(int num)
{
	count=0;
	for(j=2; j<=num;j++)
	  {
	  	if(num%j==0)
	  	  {
	  	    count++;	
		  }
	  }
	if (count<2)
	  {
	  	cout<<"Prime" <<endl;
	  	binary(num);              //calling the binary function
	  }
	else
	  {
	  	cout<<"Composite"<<endl;
	  }
	pfactor(num);            //calling the pfactor function
}
//--BINARY--
int Number::binary(int num)
{
	temp=num;
	bin=0;
	rem=0;
	base=1;
	while(temp!=0)
	  {
	  	rem=temp%2;
	  	bin=bin+rem*base;
	  	base=base*10;
	  	temp=temp/2;
	  }
	cout<<"Binary: " <<bin <<endl;
	reverse(bin);                  //calling the reverse function
}
//--REVERSE--
int Number::reverse(int num1)
{
	int binary=num1;
	rev=0;
	while(binary!=0)
	  {
	  	 rev=(rev*10)+(binary%10);
	  	 binary=binary/10;
	  }
	cout<<"Reverse: " <<rev <<endl;
	if(rev==num1)
	  {
	  	cout<<"Palindromic Prime" <<endl;
	  }
	else
	  {
	  	cout<<"Not Palindromic" <<endl;
	  }
}
//--PRIME FACTORIZATION--
int Number::pfactor(int num2)
{
	int ptemp=num2;
	count=0;
	j=2;
	cout<<"Prime Factors: ";
	while(ptemp!=1)
	  {
	  	if(ptemp%j==0)
	  	  {
	  	    cout <<j <<" ";
			count++;
			ptemp=ptemp/j;	
		  }
		else
		  {
		  	j++;
		  }
	  }
	cout<<endl;
	digit(num2);              //calling the digit function
}
//--IDENTIFYING IF WASTEFUL NUMBER OR NOT--
int Number::digit(int num)
{
	int digit=num;
	count2=0;
	while(digit!=0)
	  {
	  	int ndigit=digit%10;
	  	    count2++;
	  	    digit=digit/10;
	  }
	if(count1==count2)
	  {
	  	cout<<"Yeey! Useful Number!" <<endl;
	  }
	else
	  {
	  	cout<<"Oh No! Wasteful Number" <<endl;
	  }
}
