#include <implements.h>
void implements::def(mode, int var[num]){
    int len = sizeof(myNumbers) / sizeof(myNumbers[0]);
    for(int i = 0;i<len;i++){
        def(mode,var[i]);
    }
}
void implements::def(mode,var)(
    pinMode(var,mode);
)
