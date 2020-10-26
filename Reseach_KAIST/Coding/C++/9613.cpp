
#include<cstdio>
//#include<iostream>

using namespace std;

int arr[101];

int getGCD(int a, int b){
	if(b==0)
		return a;
	else
		return getGCD(b,a%b);
}

int main(){
	int testcase;
	scanf("%d",&testcase);
	while(testcase--){
		long long sum = 0;
		int len;
		scanf("%d",&len);
		for(int i=0; i<len; i++){
			scanf("%d",&arr[i]);
		}

		for(int i=0; i<len-1; i++){
			for(int j=i+1; j<len; j++){
				sum += getGCD(arr[i],arr[j]);
			}
		}
		printf("%lld\n",sum);
	}
}
