#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Search{
	public:
	int excute (int n){
		vector<int> Cap;
		while (n--){
			int price;
			cin>>price;
			Cap.push_back(price);
		}
		sort(Cap.begin(),Cap.end());
		int result = 0;
		result = Cap[0];
		vector<int> Cap_without_repeat;
		Cap_without_repeat.push_back(result);
		for(int i=1;i<Cap.size();++i){
			if(Cap[i] != result){
				Cap_without_repeat.push_back(Cap[i]);
				result = Cap[i];
			}
		}
		if(Cap_without_repeat.size() < 3){
			return -1;
		}
		return Cap_without_repeat[2];
	}
};

int main(){
	int n = 0;
	int result = 0;
	Search test;
	while(cin >> n){
		result = test.excute(n);
		cout << result << endl;
	}
	return 0;
}