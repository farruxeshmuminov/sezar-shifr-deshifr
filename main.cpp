#include <iostream>
#include <string>

using namespace std;

int main()
{   int l,t;
    char m;

    string T0,T1="";
    int k,q,n=0;
    cout<<"Matnni Shifrlash ... 1:   Deshifrlash .... 2 "<<endl;
    cin>>l;
    if(l==1){
        cout<<"Matnni kiriting ";
        cin.ignore();
        getline(cin,T0);
        for(int k=1; k<=26; k++){

            for(n=0; n<T0.length(); n++){
                q=int(T0[n]);

                if(q>96 and q<123){
                    t=(q+k);
                    if(t>122)
                        m=char(97+(k-122+q)-1);
                    else
                        m=char(q+k);
                    T1+=m;
                }
                else
                if(q>64 and q<91){
                t=(q+k);
                if(t>90)
                    m=char(65+(k-90+q)-1);
                else
                    m=char(q+k);
                T1+=m;
                }
                else
                if(T0[n]==' '){
                    T1+=' ';
                }
                else
                if(T0[n]=='.'){
                    T1+='.';
                }
                else
                if(T0[n]==','){
                    T1+=',';
                }
                else
                if(q>47 and q<58){
                    T1+=char(q);
                }
                else
                if(T0[n]=='-'){
                    T1+='-';
                }
            }
            cout<<"k="<<k<<"  da shifrlangan matn  ----- " <<T1<<endl;
            n=0;
            T1="";
        }
    }
    else
    if(l==2)
    {
        cout<<"Shifrlangan matnni kiriting ";
        cin.ignore();
        getline(cin,T0);
        for(int k=1; k<=26; k++){

            for(n=0; n<T0.length(); n++){
                q=int(T0[n]);
                if(q>96 and q<123){
                    t=(q-k);
                    if(t<97)
                        m=char(123-(k-q+97));
                    else
                        m=char(q-k);
                    T1+=m;
                }
                else
                if(q>64 and q<91){
                    t=(q-k);
                    if(t<65)
                        m=char(91-(k-q+65));
                    else
                        m=char(q-k);
                    T1+=m;
                }
                else
                if(T0[n]==' '){
                    T1+=' ';
                }
                else
                if(T0[n]=='.'){
                    T1+='.';
                }
                else
                if(T0[n]==','){
                    T1+=',';
                }
                else
                if(q>47 and q<58){
                    T1+=char(q);
                }
                else
                if(T0[n]=='-'){
                    T1+='-';
                }
            }
            cout<<"k="<<k<<"  da asl matn  ----- " <<T1<<endl;
            n=0;
            T1="";
        }
    }
    return 0;
}