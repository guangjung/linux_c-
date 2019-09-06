//https://blog.csdn.net/liang19890820/article/details/79403900
//g++ main.cpp -std=c++11
// main.cpp
#include "concrete_class.h"

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) { if(p){delete(p); (p)=NULL;} }
#endif

int main()
{
    // 阿里校招
    Company *alibaba = new Alibaba();
    alibaba->Recruit();

    // 腾讯校招
    Company *tencent = new Tencent();
    tencent->Recruit();

    SAFE_DELETE(tencent);
    SAFE_DELETE(alibaba);

    //getchar();

    return 0;
}