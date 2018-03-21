//滑动窗口
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n,t,c;
	while(cin >> n >> t >> c){
		cin>>n>>t>>c;
		vector<int> a(n);
		int sum = 0;
		int count = 0;
		for(int i = 0;i<n;i++){
			cin >> a[i];
			if (i < c){
				sum += a[i];
			}
			if (sum <= t){
				count++;
			}
			for(int i = 0;i < n-c;i++){
				sum += a[i+c]-a[i];
				if(sum <= t){
					count++;
				}
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
//滑动窗口