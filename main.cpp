#include <iostream>

using namespace std;

int main()
{
    //soal 1
    int a,b=0;
    cout<<"input: ";
    cin>>a;
    for(;a!=0;++b)
        a/=10;
    cout<<"\noutput: "<<b;*/

    //soal 2
    int c,temp;
    cout<<"input: ";
    cin>>c;
    for(temp=c;temp>=10;)
        temp/=10;

    cout<<"\ndigit pertama: "<<temp<<endl;temp=c;
    temp%=10;
    cout<<"digit terkhir: "<<temp<<endl;

    //soal 3
    int c,sum=0,get_val;
    cout<<"input: ";
    cin>>c;
    for(;c!=0;){
        get_val=c%10;
        c/=10;
        sum+=get_val;
    }
    cout<<"\noutput: "<<sum<<endl;


    //soal 4
    int c,sum=1,get_val;
    cout<<"input: ";
    cin>>c;
    for(;c!=0;){
        get_val=c%10;
        c/=10;
        sum*=get_val;
    }
    cout<<"\noutput: "<<sum<<endl;

    //soal 5
    int d,rev=0;
    cout<<"input: ";
    cin>>d;
    for(;d>0;){rev=rev*10+d%10;
        d/=10;
    }
    cout<<"\nouput: "<<rev<<endl;

    //soal 6
    int e,temp_1,rev_1=0;
    cout<<"input: ";
    cin>>e;
    for(temp_1=e;temp_1>0;){rev_1=rev_1*10+temp_1%10;
        temp_1/=10;
    }cout<<"\nutput: ";
    if(e==rev_1)
        cout<<"Polindrom\n";
    else
        cout<<"Bukan Polindrom\n";

    //s0al 7
    int a,temp,coun=0,get_count=0;
    cin>>a;
    for(temp=a;temp!=0;++coun)
        temp/=10;
    for(short i=0;i<=9;i++){
        get_count=0;
        for(temp=a;temp!=0;){
            if(temp%10==i)
                get_count++;
            temp/=10;
        }if(!get_count)
            continue;
        cout<<i<<"muncul sebanyak "<<get_count<<" kali\n";
    }

    return 0;
}





