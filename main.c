int main
{
	int a;
	int b;
	int c;
	int d;
	int e;
	c = sum (a,b);
	d = sum( c,a);
	e = sum( d , a );
}

int sum ( x , y )
{
	return (x + y);
}
