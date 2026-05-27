#include <iostream>;
using namespace std;
int main(){
//generacja planszy
char t[10][10];
for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
        t[i][j]=' ';
    }
}//granice planszy
for(int i=0;i<10;i++){
    t[0][i]='#';
    t[9][i]='#';
}
for(int i=0;i<10;i++){
    t[i][0]='#';
    t[i][9]='#';
}
for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
        cout<<t[i][j];
    }
    cout<<endl;
}
}
