#include <iostream>
using namespace std;
class LCM {
	   int n1, n2, max;
	   public:
	          void fun()
		{
	          cout << "Enter two numbers: ";
                  cin >> n1 >> n2;
                  // maximum value between n1 and n2 is stored in max
                  max = (n1 > n2) ? n1 : n2;
			do
			{
				if (max % n1 == 0 && max % n2 == 0)
				{
					cout << "LCM = " << max << endl;
                     			break;
                		}
        			else
            				++max;
    	   		} while (true);
		}
};
int main()
{
	LCM num;
	num.fun();
	return 0;
}

