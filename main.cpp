#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <numeric>
using namespace std;



int main() {
	vector<double> T;





	for(int i = 0; i<5; i++)
	{
		double a;
		cin >> a;
	T.push_back(a);
	}

	sort(T.begin(), T.end());
	cout << "------------------------------" << endl;
	cout << "Pour le croissance : "<< endl;

	cout << T[0] <<endl;
	cout << T[1] <<endl;
	cout << T[2] <<endl;
	cout << T[3] <<endl;
	cout << T[4] <<endl;



    cout << "------------------------------" << endl;
    cout << "Pour le decroissance : "<< endl;


    sort(T.begin(), T.end(), greater<double>());
	cout << "------------------------------" << endl;

	cout << T[0] <<endl;
	cout << T[1] <<endl;
	cout << T[2] <<endl;
	cout << T[3] <<endl;
	cout << T[4] <<endl;

	T.rend();
	cout << "------------------------------" << endl;

	cout << T[0] <<endl;
	cout << T[1] <<endl;
	cout << T[2] <<endl;
	cout << T[3] <<endl;
	cout << T[4] <<endl;
	
	
	//for (auto it = T.rbegin(); it != T.rend(); it++)
	//	cout << *it << " ";
	

	return 0;



}
