#include <iostream>
#include <string.h>
using namespace std;
void print_arr(size_t size_arr,int *arr);
int *productarr(size_t size_pro, int *pro, size_t size_num, int *num);
int main(void){
    size_t sizeofarray = 5;
    int harraynum[] = {1,2,3,4,5};
    int product[] = {10,20,30,40,50};
    int *sol = productarr(sizeofarray, harraynum,sizeofarray, product);
    print_arr(sizeofarray*sizeofarray,sol);
    return 0;
}

void print_arr(size_t size_arr,int *arr){
    int *printarray = nullptr;
    for (size_t i = 0; i < size_arr; i++)
    {
        cout<<*(arr+i)<<" ";
    }
    cout<<endl;
}
int *productarr(size_t size_pro, int *pro, size_t size_num, int *num){
    static int productNum[25];
    size_t size_pronum = 0;
    for (size_t i = 0; i < size_pro; i++)
    {
        /* code */
        for (size_t j = 0; j < size_num; j++)
        {
            /* code */
            productNum[size_pronum]= pro[i] * num[j];
            size_pronum++;
        }   
    }
    return productNum;
}