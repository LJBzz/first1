#include<iostream>
using namespace std;
#define s 20

class Int{
	private:
	int set[s];
	int p;
			
	public:
	void IsEmpty();
	int  IsFull();
	int IsExist(int n);
	void Add(int n);
	void Change(int p,int m);
	void Delete(int p);
	int Comb(Int b);
	Int Match();

};

void Int::IsEmpty()
{
  for(int p=0;p<=s;p++)
  { 
    if(set[p]!=0)
    {
    	cout<<"The set is not empty\n";
    	break;
	}
  }	
}

int  Int::IsFull()
{
	if(set[s]!=0)
	{
		return 1;
	}
	else
	{
		cout<<"the set has been full\n";
	}
	return 0;
}

int Int::IsExist(int n)
{
	for(p=0;p<=s;p++)
	{
		if(n==set[p])
		{
			cout<<"the number has been existed\n";
			return 0;
		}
		
	}		
	return 1;
}

void Int::Add(int n)
{
	if(IsExist(n)&&IsFull())
	{
	  for(p=0;set[p]!=0;p++)
	  {
	  	set[p]=n;
	  	break;
	  }	
	}
}

void Int::Change(int p,int m)
{
	if(set[p]==0)
	{
		cout<<"there is no number,can not change\n";
	}
	else
	{
		set[p]=m;
	}
}

void Int::Delete(int p)
{
	if(set[p]==0)
	{
		cout<<"there is no number,can not delete\n";
	}
	else
	{
		set[p]=0;
	}
}

int Int::Comb(Int b)
{	int i=0;
	for(this->p=0;this->set[p]!=0;)
	{
	  this->p++;
	}
	for(this->p;b.set[i]!=0;i++,p++)
	{
		if(p>s)
		{
			cout<<"too big";
			return 0;
		}
		else
		{
			this->set[p]=b.set[i];
		}
	}
}

Int Int::Match()
{
	for(p=0;set[p]!=0;)
	{
	  p++;
	}
	for(int i=0;i<=p;i++)
	{
		for(int j=0;j<=p-1-i;j++)
		{
			if(set[j]>set[j+1])
			{
				int temp=set[j];
				set[j]=set[j+1];
				set[j+1]=temp;
			}
		}
	}			
}

int main()
{
	Int group1;
	for(int i=1;i<=20;i++)
	{
		group1.Add(i);
	}
	return 0;
}

