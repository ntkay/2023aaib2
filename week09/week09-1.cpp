#include <stdio.h>
int myAdd(int a,int b){ ///函數定義
    return a+b; ///進來2個數 ,出去1個
}
void myPrint(int a){ ///函數定義 進來一個
    for(int i=1;i<=a; i++) printf("*");
    printf("\n");
}
int main(){ ///main()函式
    int ans = myAdd(3, 4); ///函數呼叫
    printf("Hello ans: %d\n",ans);
    myPrint(ans); ///函式呼叫(請他幫我做事)
}
