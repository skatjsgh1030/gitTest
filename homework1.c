#include<iostream>
using namespace std;

#include "paper1.h"

int FindSecondLargestNumber(int sampleArray[])
{

	int i,j,k, firstMax, secondMax ;

	firstMax = sampleArray[0];
	secondMax = 0;
	//현재 생성된 랜덤넘버들
	for(i=0; i<10; i++)
	{   
		j = i+1;
		// printf("%d th number is %d\n",j,sampleArray[i]);
	}   
	//최대수를 찾는거   
	for(i=1; i<10; i++)
	{   
		if(firstMax < sampleArray[i])
			firstMax = sampleArray[i];
	}   
	// cout << "The Largest number is : " << firstMax << endl; 
	//두번째 큰 수 찾기
	for(k=0; k<10; k++)
	{   
		if(secondMax < sampleArray[k] && sampleArray[k] < firstMax )
			secondMax = sampleArray[k];
		//  cout << secondMax << endl;
	}   

	//cout << "Second Largest number is : " << secondMax << endl; 
	return secondMax;
}

void homework1()
{
	int sampleArray[10];
	FillRandomNumber(sampleArray);

	int answer = FindSecondLargestNumber(sampleArray);

	Confirm(sampleArray, answer);
}

