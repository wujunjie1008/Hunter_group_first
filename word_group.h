#include<iostream>
#include <string.h>
#include <fstream>
#include <sstream>
#include <iostream>
#include <stdlib.h>
#include "h.h"
using namespace std;

/*struct str{
	string name;
    int count;//name���ִ���
	int flag;//0Ϊ�ǵ��� 
	int flag1;//�ж��Ƿ������
	bool ifend;//�Ƿ�����ĩ 
};*/

void phrase(struct number *a, struct ph *d, int m, int len){//aΪ�ṹ�����顢mΪ�������������qΪ�ʸ��� 
	struct ph b[10000];
	struct ph b1[10000];
	int n=0;
	//string cz[100]; 
	//printf("%d ",sizeof(*a));
	//printf("%d ",sizeof(str));
//	printf("#####%d\n",a[0].ifend );

	string c ="";//��ʱ����ַ��� 
	for(int i=0; i<len; i++){

		for(int l=0;l<m;l++){
			//printf("%d ",a[i].flag);
			//printf("%s",a[i].ifend==false?"FALSE":"TRUE");
			if((a[i+l].flag==0) ||((a[i+l].ifend==true) && l!=m-1)){
				//printf("%d ����\n",i);
				c = "";
				break;
			}//�ǵ���ֱ��break���Ƶ���һλ�� ��m��������ĩ���ʣ�ֱ��break���Ƶ���һλ 
			c =  c+a[i+l].name+' ';//����ֱ�Ӽӿո��� 
			//printf("%s ",a[i].name.c_str());
			//printf("%d ",a[i].ifend );
			
			if(l==m-1){
				b[n].cizu = c;//��m���Ѿ����õ��ַ�������ph�ṹ�� 				
				n++;
				//printf("%s\n",c.c_str());    // ����c_str()����
				c = "";
			}
		}
	
	}
	//printf("%d\n",n);
	//�����ظ����� 
	
	for(int i=0; i<n; i++){
		
		if(b[i].f == 1){
			
			continue;//�ṹ��Ϊ������һ��Ԫ�� 
		}
		b[i].num ++;		
		for(int j=i+1; j<n; j++){
			if(b[i].cizu == b[j].cizu ){
				//printf("****\n");
				b[i].num++;
				b[j].f = 1;//�����ظ����飬num��һ���������Ǹ�f����1
			}
		}
		
		
	}

	int j = 0;
	for(int i=0; i<n; i++){
		
		if(b[i].f!=1){
			d[j] = b[i];
			j++;
			
			//printf("%d\n",e);
			
		}
	} 
	//printf("%d\n",e);
	struct ph temp;
	for (int i = 0; i < len; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (d[i].num < d[j].num)
			{
				temp.cizu = d[i].cizu;
				temp.f = d[i].f;
				temp.num = d[i].num;

				d[i].cizu = d[j].cizu;
				d[i].f = d[j].f;
				d[i].num = d[j].num;

				d[j].cizu = temp.cizu;
				d[j].f = temp.f;
				d[j].num = temp.num;
			}
		}
	}
	

} 

/*int main(){
	str a[] = {{"Monday",0,0,0,true},{"Tuesday",0,0,0,true},{"Wednesday",0,1,0,true},{"Monday",0,0,0,true},{"Tuesday",0,1,0,true},{"Wednesday",0,0,0,true},{"Monday",0,0,0,false},{"Tuesday",0,0,0,false},{"Wednesday",0,1,0,false},{"Thursday",0,0,0,true},{"Friday",0,0,0,true}};
	int size = sizeof(a);
	//
	struct ph d = phrase(a,3,11);

	
//Monday Tuesday Wednesday Thursday
//name���ִ���//0Ϊ�ǵ��� //�ж��Ƿ������//�Ƿ�����ĩ 
//Friday
}*/

	
 


/*int main(){
	str a[] = {{"Monday",0,1,0,false},{"Tuesday",0,1,0,false},{"Wednesday",0,1,0,false},{"Thursday",0,1,0,true},{"Friday",0,1,0,true}};
	int size = sizeof(a);
	//
	struct ph d = phrase(a,3,size);

	
	//Monday Tuesday Wednesday Thursday
//name���ִ���//0Ϊ�ǵ��� //�ж��Ƿ������//�Ƿ�����ĩ 
//Friday
}*/

	
 
