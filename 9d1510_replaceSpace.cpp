/*
 *	Author:zjj
 *	Date:2014/11/8 10:20
 *  Desc:九度OJ1510,请实现一个函数，将一个字符串中的空格替换成“%20”。
 	例如，当字符串为We Are Happy.则经过替换之后的字符串为We%20Are%20Happy
 *  Method:根据空格与替换字符的长度求出原串和新串的长度，从后往前替换即可 
 */

#include<stdio.h>
#include<string.h>
#define MAX 1000000

void replaceSpace(char *str) {
	int strLen;
	int newStrLen;
	char *p=NULL;
	char *q=NULL;
	
	strLen = 0;
	newStrLen = 0;
	p = str;
	strLen = strlen(str);
	while(*p) {
		if(*p==' ') newStrLen += 3;
		else {
			newStrLen++;
		}
		p++;
	}
	
	p=q=str;
	p = p + strLen - 1;
	q = q + newStrLen - 1;
	*(q+1) = '\0';
	while(true) {
		if(*p != ' ') {
			*q-- = *p; 
		}else {
			*q-- = '0';
			*q-- = '2';
			*q-- = '%'; 
		}
		p--;
		if(p==q) break;
	}
	printf("%s\n",str);
}

int main() {
	char str[MAX];
	
	while(gets(str)){
		replaceSpace(str); 
	}
	 	
	return 0;
}

/*
We Are Happy
*/
