/*4-6�����֣�5���������,0-3������
  �ĸ�����4+3=7λ�ַ��� 6+5=11λ�ַ���*/
#include<iostream>
#include<string>
#include<stdlib.h>
#include<time.h>
using namespace std;

void init();
void equation(int t);
void bracket(int m[],char n[],int t);

int main(){
	srand((unsigned(time(NULL))));
	int lan,n;
	cout<<"��ѡ������(Please choose language)"<<endl;cout<<"1.���� 2.English �� ";
	cin>>lan;
	switch(lan)
	{
		case 1:cout<<"������������";cin>>n;break;
		case 2:cout<<"Please enter a number of questions��";cin>>n;break;
		defaul:cout<<"Error!";break; 
	}
	for (int j=0;j<n;j++)
	{
		  cout<<endl;
		  init();
	}
   
    return 0;
}

void init(){
     int q;
     //srand((unsigned(time(NULL))));
     q=rand()%3+4;   //����һ������λ
    // cout<<q<<endl;
     equation(q);
}

void equation(int t)
{
     char a[]="+-*/";//{'+','*','-','/'};
     int e[20];
	 char q[20];       //��ʽ�ַ���

     for(int i=0;i<t*2-1;i++)
     {
          e[i]=rand()%8+1;    // ����
          q[i]=a[rand()%4]; //����
     }
     q[t-1]='=';
     bracket(e,q,t-1);//ע�����ﴫ����t-1���β�ֻ��һ��t 
}

void bracket(int m[],char n[],int t){   //�������
     int q=rand()%2;    //�м�������
     if(q==1)
     {

        int a=rand()%(t/2)+1;
        int b=a+rand()%(t/2)+2;//�ֱ��ڵڼ����������� 

          for(int i=0;i<=t;i++) //������ʽ
          {
          if(i==a) cout<<"(";
		  cout<<m[i];
		  if(i==b-1) cout<<")";
		  if (n[i]=='/')
			cout<<"��";
		  else
		    cout<<n[i];
          }
     }
     //a+1�ǵ�һ�����ŵ�λ�ã�b�ǵڶ������ŵ�λ��
	  
}
