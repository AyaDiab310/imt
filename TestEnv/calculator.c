
int Add(int x,int y );
int Sub(int x, int y);
int Mult(int x, int y);
int div(int x, int y);
int reminder(int x, int y);
int x,y;

int Add(int x, int y)
{
	int result;
	result=x+y;
	return(result);
}
int Sub(int x, int y)
{int result;
	result=x-y;
	return(result);
}
int Mult(int x, int y)
{
	int result;
	result=x*y;
	return(result);
}
int div(int x, int y)
{
    int result;
	result=x/y;
    return(result);
}
int reminder(int x, int y)
{
	int result;
	result=x%y;
    return(result);
}
	
