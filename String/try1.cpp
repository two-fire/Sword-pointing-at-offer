#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
	void replaceSpace(char *str,int length) {
		int newlen = 1;//新字符串长度，包含结束标志'\0'
		int oldlen = 1;//原字符串长度，包含结束标志'\0'
		int count = 0;//数空格个数
		int i = 0;
		while (str[i] != '\0') {
			if (str[i] == ' ') //如果遇到空格，count加一
				count++;
			oldlen++;//原字符串长度
			i++;
		}
		newlen = oldlen + 2 * count;//新字符串长度
		if (newlen>length)//如果新字符串长度大于限定长度，则退出程序
			exit(1);
		while (oldlen>0) {//从后往前复制
			oldlen--;
			newlen--;
			if (str[oldlen] != ' ') { //非空格字符直接复制
				str[newlen] = str[oldlen];
			}
			else {   //空格字符从后往前依次用'0','2','%'替代
				str[newlen--] = '0';
				str[newlen--] = '2';
				str[newlen] = '%';
			}
		}
	}

};

int main(){
	char str[20]="he od oo";
    int l=100;
	 Solution s;
	 s.replaceSpace(str,100);
	 printf("%s",str);
	 return 0;
}