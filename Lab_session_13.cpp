# include <iostream>
# include <vector>


using namespace std;

int startl13()
{
    cout << "\nName: Nabeed Ali (SE-23054)\n" << endl;
    cout << "Start of Lab 13\n" << endl;
    return 0;
}

class Matrix{

public:
    vector<vector<int>> m;
    int r, c;

    Matrix() {
        cout << "Enter order of the matrix as (row column): ";
        cin >> r >> c;
        int e;
        for(int i=1; i<=r; i++) {
            vector<int> temp;
            for(int j=1; j<=c; j++) {
                cout << "Enter [" << i << "][" << j << "] th element: ";
                cin >> e;
                temp.push_back(e);
            }
            m.push_back(temp);
        }
    }

    Matrix(const vector<vector<int>>& v, int i, int j):m{v}, r{i}, c{j} {

    }

    void display() {
        for(int i=0; i < r; i++) {
            for(int j=0; j < c; j++) {
                cout << m[i][j] << ' ';
            }
            cout <<  endl;
        }
    }

    Matrix operator * (const Matrix& m2) {
    vector<vector<int>> temp;
    for(int i=0; i<r; i++) {
        vector<int> temp2;
        for(int j=0; j< m2.c; j++) {
            int e= 0;
            for(int k=0; k<c; k++) {
                e += m[i][k] * m2.m[k][j];
            }
            temp2.push_back(e);
        }
        temp.push_back(temp2);
    }

    return Matrix(temp, r, m2.c);
}
};

void L13Q1() {
    cout << "First Matrix\n";
    Matrix m1;
    cout << "\n\nSecond Matrix\n";
    Matrix m2;
    if(m1.c == m2.r) {
        Matrix m3 = m1*m2;
        cout << "!!Multiplication!!\n";
        m3.display();
    }
}

int main() {
    startl13();
    L13Q1();
    return 0;
}