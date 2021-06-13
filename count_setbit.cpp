//count the set bit of a number without fun
/*#include<iostream>
using namespace std;
int main()
{
	int num,count=0;
	cin>>num;
	while(num!=0)
	{
		if((num&1)==1)
		{
			count=count+1;
		}
		num=num>>1;
	}
	cout<<count;
	
}

//using fun
#include<iostream>
using namespace std;
void set_count(int num)
{
	int count=0;
		while(num!=0)
	{
		if((num&1)==1)
		{
			count=count+1;
		}
		num=num>>1;
	}
	cout<<count;
}
int main()
{
	int num;
	cin>>num;
	set_count(num);
	return 0;
}

//check the postion is set bit or not
#include<iostream>
using namespace std;
int main()
{
	int num,pos;
	cin>>num>>pos;
	num=num>>pos-1;
	if(num&1==1)
	{
		cout<<"set bit";
	}
	else{
		cout<<"not set";
	}
}*/

//unset bit of a num;
#include<iostream>
using namespace std;
int main()
{
	int num,pos,res;
	cin>>num>>pos;
	if(num>>(pos-1)==0){
	if(pos==1)
	{
		res=num^pos;
		cout<<res;
	}
	else
	{
	   res=num^((pos-1)<<1);
	cout<<res;
}
}
else{
	cout<<"already the position of the bit is unset";
}
}
