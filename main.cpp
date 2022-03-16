/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string.h>

using namespace std;

int log_transactions(const char *data, char *log, size_t transaction_count);

int main()
{
    const char data[]="15/03/2022 15:05:10AAA 1111A1100DDDD";
    char log='1';
    size_t transaction_count=5;
    
    int a = log_transactions(data, &log, transaction_count);
    return 0;
}

int log_transactions(const char *data, char *log, size_t transaction_count){
    char times[19];
    
    for(int i=0; i<19; i++){
        times[i] = data[i];
    }
    
    char aux;
    aux = times[0];
    times[0] = times[3];
    times[3] = aux;
    
    aux = times[4];
    times[4] = times[1];
    times[1] = aux;
    
    char reg[9];
    
    for(int i=19; i<27; i++){
        reg[i-19] = data[i];
    }
    
    char prod = data[27];
    
    char mili[5];
    
    for(int i=28; i<32; i++){
        mili[i-28] = data[i];
    }
    
    char id[3];
    
    for(int i=32; i<34; i++){
        mili[i-32] = data[i];
    }
    
    cout<<"[" <<times <<"] id: "<< id <<", reg: " <<reg  <<", prod: " <<prod  <<", ltrs: +/-" <<mili  <<endl;
    return transaction_count;
}