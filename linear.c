#include<stdio.h>

int linear(int arr[], int n, int ele)
{
    int index=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==ele)
        {
            index=i;
            break;
        }
    }
    return index;
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int ele;
    scanf("%d",&ele);
    int index=linear(arr,n,ele);
    printf("element fount at index %d ", index);

}
