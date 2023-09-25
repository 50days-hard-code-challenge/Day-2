int dataTypes(string &type) {
	// Write your code here
	if (type=="Integer")
	{
		cout << sizeof(int);
	}
	else if (type=="Long")
	{
		cout << sizeof(long);
	}
	else if (type=="Float")
	{
		cout << sizeof(float);
	}
	else if (type=="Double")
	{
		cout << sizeof(double);
	}
	else if (type=="Character")
	{
		cout << sizeof(char);
	}
return -1;
}

int main()
{
	string dataType;
	cin >> dataType;
	int size = dataTypes(dataType);

    if (size != -1) {
        cout << size << endl;
    }

    return 0;
}
