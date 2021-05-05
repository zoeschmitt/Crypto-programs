#include<iostream>
 
using namespace std;
 
int main() {

	unsigned char message[300];
    unsigned char ch;
	int i, key;
	
	cout << "Message to be decrypted: ";
	cin >> message;
	cout << "Key: ";
	cin >> key;
	
	for(i = 0; message[i] != '\0'; ++i) {

		ch = message[i];

		if(ch >= 'a' && ch <= 'z'){
			ch = ch - key;
			
			if(ch < 'a'){
				ch = ch + 'z' - 'a' + 1;
			}
			
			message[i] = ch;
		} else if(ch >= 'A' && ch <= 'Z') {

			ch = ch - key;
			
			if(ch < 'A'){
				ch = ch + 'Z' - 'A' + 1;
			}
			
			message[i] = ch;
		}
	}
	
	cout << "Decrypted: " << message;
	
	return 0;
}