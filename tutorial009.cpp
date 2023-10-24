// User snippet in VS code
/*
Go to settings > User snippets > Select language or existing snippet

{
	// Place your snippets for cpp here. Each snippet is defined under a snippet name and has a prefix, body and 
	// description. The prefix is what is used to trigger the snippet and the body will be expanded and inserted. Possible variables are:
	// $1, $2 for tab stops, $0 for the final cursor position, and ${1:label}, ${2:another} for placeholders. Placeholders with the 
	// same ids are connected.
	// Example:
	"newclear": {
		"prefix": "newclear code",
		"body": [
			"#include<iostream>",
			"using namespace std;",
			"$1",
			"int main(){",
			"\t$1",
			"\treturn 0;",
			"}"
		],
		"description": "This is newclear."
	}
}

*/

// Type newclear for C++ snippet

#include<iostream>
using namespace std;
int main(){

    for (int i = 0; i < 10; i++)
    {
        if(i==2){
            break; // Break the loop here
        }
        cout<<i<<endl;
    }

    for (int i = 0; i < 10; i++)
    {
        if(i==2){
            continue; // Skip current iteration
        }
        cout<<i<<endl;
    }
    
    
    return 0;
}