#include <iostream>
using namespace std;
class Matrix 
{
private:
    int **matrix;
    int **temp;
    int m, n;
    void transpose() 
    {
        temp = matrix;
        matrix = new int*[n];
        for (int i=0; i<n; i++)
            matrix[i] = new int[m];
        for (int i=0; i<n; i++)
            for (int j=0; j<m; j++)
                matrix[i][j] = temp[j][i];
        for (int i=0; i<m; i++)
            delete [] temp[i];
        delete [] temp;
        m = m+n;
        n = m-n;
        m = m-n;
    }
public:
    Matrix(int a = 0, int b = 0) 
    {
        matrix = new int*[a];
        for (int i=0; i<a; i++)
            matrix[i] = new int[b];
        m = a;
        n = b;
        for (int i=0; i<m; i++) 
        {
            for (int j=0; j<n; j++) 
            {
                matrix[i][j] = 0;
            }
        }
    }
    void operator ~ () {
        transpose();
}
    void set(int a, int b, int c) {
        matrix[b][c] = a;
}
    int get(int a, int b) {
        return matrix[a][b];
}
    int rows() {
        return m;
}
    int columns() {
        return n;
}
    void print() 
    {
        if (m==0 || n==0) 
        {
            cout<<"Matrix is empty!"<<endl;
            return; 
        }
        for (int i=0; i<m; i++) 
        {
            if (n>0)
                cout<<matrix[i][0];
            for (int j=1; j<n; j++) 
            {
            cout<<", "<<matrix[i][j];
           
            }
             cout<<endl;
        }
            cout<<endl;

   }
};
int main() {
int m, n;
    cout<<"Enter Matrix Rows: ";
    cin>>m;
    cout<<"Enter Matrix Columns: ";
    cin>>n;
    Matrix mtx(m, n);
    for (int i=0; i<m; i++) 
    {

    for (int j=0; j<n; j++) 
{
    mtx.set(i*j+i+j, i, j);
} 
}
    cout<<endl<<"Matrix Before Applying ~ Operator:"<<endl;
    mtx.print();
    ~mtx;
    cout<<endl<<"Matrix After Applying ~ Operator:"<<endl;
    mtx.print();
    return 0;
}