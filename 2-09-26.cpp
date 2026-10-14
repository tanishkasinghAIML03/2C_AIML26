#includ <iostream> std;
using namespace std;
int partition (int a[],int low,int high)
{
    int pivot=a[low];
    int i=low;
    int j=high;
    while(i<j)
    {
        while(a[i]<=pivot && i<high)
        {
            i++;
        }
        while(a[j]>pivot)
        {
            j--;

        }
        if(i<j)
        {
            swap(a[i],a[j]);
            return j;

        }
        void quickSort(int a[],int low,int high)
        {
            if(low<high)
            {
                int pivotindex=partition(a,low,high);
                quickSort(a,low,pivotIndex-1);
                quickSort(a,pivotInde+1,high);

            }
            int main()
            {
                int a[]={10,8,20,18,50,90,70,100,40,80};
                int n=10;
                quickSort(a,0,n-1);
                cout<<"sorted array"<<endl;
                for(int i=0;i<n;i++)
                {
                    cout<<a[i]<<" ";
                    
                }
            }
        }
    }
}