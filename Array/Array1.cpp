 #include<isotream> 
 using namespace std;




int main()
{
    int i = 0;
    int arr[5] = {98, 43, 45, 51, 76};
    cout<<"Challenge Accepted Let's Begin "<<endl;
    cout<<"Using While Loop Printing the value of Elements : - "<<endl;
    while (i < 5)
    {
        cout << "The value of Element arr[" << i << "] is : " << arr[i] << endl;
        i++;
    }


    int j = 0;
    cout<<"Using Do-While Loop Printing the value of Elements : - "<<endl;
    do
    {
        cout << "The value of Element arr[" << i << "] is : " << arr[j] << endl;
        j++;
    } while (j < 5);

    return 0;
}

