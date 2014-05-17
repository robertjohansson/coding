#include<iostream>
#include<stdlib.h>

#define tab		"\t"

using namespace std;

class brain
{
	public:
	
		brain() {
		};
	
};

int main()
{
	int *p;
	
	int i = 10;
	p = &i;
	
	cout<<i<<endl;
	
	*p = 13;
	cout<<i<<endl;
	
	int &r = i;
	cout<<r<<endl;
	
	r = 20;
	cout<<i<<endl;
	
	int *pp;
	
	pp = &r;
	
	*pp = 30;
	
	cout<<i<<tab<<r<<tab<<*p<<tab<<*pp<<endl;
	
	int **pptr;
	
	cout<<(sizeof (int *))<<endl;
	
	pptr = (int**) malloc(4 * sizeof (int *));
	
	pptr[0] = &i;
	pptr[1] = &r;
	pptr[2] = &r;
	pptr[3] = NULL;
	
	int **t = pptr;
	
	int c=0;
	
	while((t[c]) != NULL)
	{
		cout<<c<<" : "<<*(t[c])<<endl;
		c++;
	}
	
	cout<<*pptr[0]<<tab<<*pptr[0]<<endl;
	
	*pptr[0] = 4;
	
	cout<<*pptr[0]<<tab<<*pptr[0]<<endl;
	
	*pptr[1] = 3;
	
	cout<<*pptr[0]<<tab<<*pptr[0]<<endl;

	cout<<"Auto compiler";
	
	
	
	
	
	return 1;
}