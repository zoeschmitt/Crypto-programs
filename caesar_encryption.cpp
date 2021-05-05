#include<iostream>
 
using namespace std;
 
int main() {

	unsigned char message[300];
    unsigned char ch;
	int i, key;
	
	cout << "Message to be encrypted: ";
	cin >> message;
	cout << "Key: ";
	cin >> key;
	
	for(i = 0; message[i] != '\0'; ++i) {

		ch = message[i];
		
		if(ch >= 'a' && ch <= 'z') {
			ch = ch + key;
			
			if(ch > 'z'){
				ch = ch - 'z' + 'a' - 1;
			}
			
			message[i] = ch;

		} else if(ch >= 'A' && ch <= 'Z') {

			ch = ch + key;
			
			if(ch > 'Z'){
				ch = ch - 'Z' + 'A' - 1;
			}
			
			message[i] = ch;
		}
	}
	
	cout << "Encrypted: " << message;
	
	return 0;
}