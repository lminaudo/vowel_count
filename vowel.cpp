#include <iostream>
using namespace std;
int main(){
    char x;
    int vowel=0;
    for (int i=1;i<6;i++){
        cout<<"Enter character #"<<i<<": ";
        cin>>x;
        if (x=='a'||x=='e'||x=='i'||x=='o'||x=='u'){
            vowel++;
        }
    }
    cout<<"Total Vowels: "<<vowel<<endl;

}
