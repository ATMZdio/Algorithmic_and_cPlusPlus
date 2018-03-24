//The past shall be forgotten.
#include <iostream>
#include <string.h>
#include <assert.h>
using namespace std;
class Old_Score{
	public:
	char *excute(char *str){
		char *p = str;
		assert(p != NULL);
		while(p != '\0'){   //曾经的曾经，有个sBDiss我，看到我写到p != '\0'就说我这里会报错,别写了，md呵呵-_-  不过，谢谢你
			if((p[0] == '\t') || (p[0] == '\r') || (p[0] == ' ')){
				p++;
			}else {
				break;
			}
		}
		int l = strlen(p);
		while(l > 0){
			l--;
			if((p[l] == '\t') || (p[l] == '\r') || (p[l] == ' ')){
				p[l] = '\0';
			}else{
				break;
			}
		}
		return p;
	}
};

int main(){
	Old_Score func;
	char str[256];
	char *result = NULL;
	cin.get(str,256);
	result = func.excute(str);
	cout<<result<<endl;
	return 0;
}

/*
测试手顺：
	aaa		bbb	  ccc
***后面输入空格和tab
期待值
aaa		bbb	  ccc
 */
