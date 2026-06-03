#include <iostream>;
using namespace std;
int main(){
//generacja planszy
char t[10][10];
for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
        t[i][j]=' ';
    }
}
    int x=1,y=1,pkt=0;
    cout<<"G - gracz"<<endl<<"M - meta"<<endl;
    cout<<"Nie wejdz w sciany (#)"<<endl;
    t[x][y]='G';
    t[8][8]='M';
//granice planszy
for(int i=0;i<10;i++){
    t[0][i]='#';
    t[9][i]='#';
}
for(int i=0;i<10;i++){
    t[i][0]='#';
    t[i][9]='#';
}
do{
   for(int i=0;i<5;i++){
        int a = rand()%10;
        int b = rand()%10;
        if(t[a][b]==' '){
            t[a][b]='#';
        }
   }
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cout<<t[i][j];
    }
        cout<<endl;
}
    while(x+y!=16){
        t[x][y]='G';
        char poz;
        cout<<"Gdzie chcesz pojsc?"<<endl<<"w/s/a/d"<<endl;
        cin>>poz;
        if(poz=='a'){
            if(t[x][y-1]!='#'){
            swap(t[x][y],t[x][y-1]);
            y--;}
            else{
                cout<<"Przegrales, -1pkt"<<endl;
                if(pkt!=0){pkt--;}
                swap(t[x][y],t[1][1]);
                x=1;
                y=1;
                for(int i=1;i<8;i++){
                    for(int j=1;j<8;j++){
                        if(t[i][j]=='#'){
                            t[i][j]=' ';
                        }
                    }
                }
                break;
            }
        }
        if(poz=='d'){
            if(t[x][y+1]!='#'){
            swap(t[x][y],t[x][y+1]);
            y++;}
            else{
                cout<<"Przegrales, -1pkt"<<endl;
                if(pkt!=0){ pkt--;}
                swap(t[x][y],t[1][1]);
                x=1;
                y=1;
                for(int i=1;i<8;i++){
                    for(int j=1;j<8;j++){
                        if(t[i][j]=='#'){
                            t[i][j]=' ';
                        }
                    }
                }
                break;
            }
        }
        if(poz=='s'){
            if(t[x+1][y]!='#'){
            swap(t[x][y],t[x+1][y]);
            x++;}
            else{
                cout<<"Przegrales, -1pkt"<<endl;
                if(pkt!=0){ pkt--;}
                swap(t[x][y],t[1][1]);
                x=1;
                y=1;
                for(int i=1;i<8;i++){
                    for(int j=1;j<8;j++){
                        if(t[i][j]=='#'){
                            t[i][j]=' ';
                        }
                    }
                }
                break;
            }
        }
        if(poz=='w'){
            if(t[x-1][y]!='#'){
            swap(t[x][y],t[x-1][y]);
            x--;}
            else{
                cout<<"Przegrales, -1pkt"<<endl;
                if(pkt!=0){pkt--;}
                swap(t[x][y],t[1][1]);
                x=1;
                y=1;
                for(int i=1;i<8;i++){
                    for(int j=1;j<8;j++){
                        if(t[i][j]=='#'){
                            t[i][j]=' ';
                        }
                    }
                }
                break;
            }
        }
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                cout<<t[i][j];
            }
        cout<<endl;
        }
    }
    if(x+y==16){
        pkt++;
        cout<<"Brawo, +1pkt"<<endl;
    }
}while(pkt!=5);
}czm program sie konczy?
