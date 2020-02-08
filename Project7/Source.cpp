#include<iostream>
#include<string>
using namespace std;
int main() {
	string animal;
	cin >> animal;
if ( animal == "dog" ) {
	cout << "bozajnik" << endl;
}
else if ( animal == "krok" || animal == "kosten" || animal == "zmiq" ){
	cout << "stud" << endl;
}
else {
	cout << "ne" << endl;
}



	
	system("pause");
	return 0;
}