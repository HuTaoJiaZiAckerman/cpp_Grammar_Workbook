// 编写程序，将5位数译成密码，密码规律是每位数字加10得到一个新的数字，再转换成相应的小写字母。
# include <iostream>

using namespace std;

int main()
{
	int n,a,b,c,d,e;
	char j,k,p,q,r;
	cout << "输入一个五位数：" << endl;
	cin >> n;
	a = n / 10000;
	n = n - a * 10000;
	b =  n / 1000;
	n = n - b * 1000;
	c = n / 100;
	n = n - c * 100;
	d = n / 10;
	n = n - d * 10;
	e = n;

	j = a + 10 + 97;
	k = b + 10 + 97;
	p = c + 10 + 97;
	q = d + 10 + 97;
	r = e + 10 + 97;

	cout << "加密输出：" << j << k << p << q << r << endl;
	// system("pause");
	return 0;
}
