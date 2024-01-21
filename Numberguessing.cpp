#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int num=rand() % 100;
	int guess;
	cout<<"enter a number in guess: ";
	cin>>guess;
	while (1) {
	if(num==guess){
	cout<<"you r right";
		break;
	}
	else if(num>guess)
	{
	cout<<"guess higher";
	}
		else
	{
	cout<<"guess lower";
	}
	printf("\n");
	cout<<"enter a number in guess";
	cin>>guess;
	
}
return 0;
	}

