/*1104. Sum of Number Segments (20)
Given a sequence of positive numbers, a segment is defined to be a consecutive subsequence. For example, given the sequence {0.1, 0.2, 0.3, 0.4}, we have 10 segments: (0.1) (0.1, 0.2) (0.1, 0.2, 0.3) (0.1, 0.2, 0.3, 0.4) (0.2) (0.2, 0.3) (0.2, 0.3, 0.4) (0.3) (0.3, 0.4) (0.4).

Now given a sequence, you are supposed to find the sum of all the numbers in all the segments. For the previous example, the sum of all the 10 segments is 0.1 + 0.3 + 0.6 + 1.0 + 0.2 + 0.5 + 0.9 + 0.3 + 0.7 + 0.4 = 5.0.

Input Specification:

Each input file contains one test case. For each case, the first line gives a positive integer N, the size of the sequence which is no more than 105. The next line contains N positive numbers in the sequence, each no more than 1.0, separated by a space.

Output Specification:

For each test case, print in one line the sum of all the numbers in all the segments, accurate up to 2 decimal places.

Sample Input:
4
0.1 0.2 0.3 0.4 
Sample Output:
5.00*/

//暴力会超时，数字题还是做得少，有时候想很久都没思路。

/*计算0.1时，0.1 算了n次，0.2算了n-1次， 0.3算了n-2次 。。。
计算0.2时，0.2 算了n-1次，0.3算了n-2次 。。。

所以 当有n个数的时候. 计算第i个数的时候
第0个数 算了 n 次
第1个数 算了 (n-1) * 2
第2个数 算了 (n-2) * 3
所以规律是 第i个数计算次数 (n-i)*(i+1) （i=0,1,2,3 .....）*/
#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	//freopen("E:input.txt","r",stdin);
	int n;
	double ans=0,num;
	cin>>n;

	for(int i=1;i<=n;i++){
		cin>>num;
		ans+=num*i*(n-i+1);
	}



	printf("%.2f",ans);

	freopen("CON","r",stdin);
	system("PAUSE");
}
