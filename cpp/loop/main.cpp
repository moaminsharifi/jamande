#include <iostream>
#define ever (int i= 0 ; ;  )
using namespace std;

int main()
{
    int number = 0;
    cin>>number;







    for(int i = 0; i<10 ; i++){
       number = number * number;
    }
    cout <<number << endl;












    int i = 0;
    while(i < 10){
        number = number * number;
        i++;
    }
    i = 0;

    loop:
        if(i > 10){
            goto endLoop;
        }
        number = number * number;
        i++;

    if(i < 10){
        goto loop;
    }
    endLoop:
        cout<<number;



    for ever{
        if(i % 3 == 0){
            continue;
        }

        if(i == 1000){
          break;
        }
        cout<<number;


    }
    vector<string> checkList;
    //
    //
    //
    for(string task : checkList){
        cout<<task;
    }
    // TODO goto

    //
    return 0;
}
