#include<stdio.h>

int arraySign(int* a, int n){
    int count = 0,flag = 0;
    for(int i = 0; i<n; i++){
        if(a[i]<0){
            count++;
        }
        if(a[i] == 0){
            flag = 1;
        }
    }
    
    if(flag == 1){
        return 0;
    }
    else if(count % 2==0){
        return 1;
    }
    else{
        return -1;
    }
}

int main(){
    int arr[] = {0,0,87,-46,-77,54,-22,-83,-58,-69,39,46,0,-52,39,95,41,-64,49,62,31,-1,10,30,9,19,84,-55,59,-96,-45,68,3,36,14,-88,35,73,-71,-34,-16,-37,100,64,54,92,-74,-28,-58};    
    int size = sizeof(arr)/sizeof(int);
    int ans = arraySign(arr,size);
    printf("%d",ans);
    return 0;
}