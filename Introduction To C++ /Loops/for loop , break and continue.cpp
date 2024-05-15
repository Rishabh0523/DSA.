#include <iostream>
using namespace std;
int main()
{
    for(int i=0;i<10;i++){
        cout<<i<<endl;
        
        // if(i==3){
        //     break;
        // }
        
        if(i==4){
            continue;
        }
    }

    return 0;
}
