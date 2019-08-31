#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <cmath>
#include <iomanip>
using namespace std;
//User Defined Function for GPA Calculator
void calculateGPA();
//Declarations for Calculator
float pi=3.14;
float sine(float ts);
float sine(float ts)
    {
        ts=sin(ts*pi/180);
        cout<<fixed;
        cout<<setprecision(2)<<ts;
    }
float cosine(float tc);
float cosine(float tc)
    {
        tc = cos(tc*pi/180);
        cout<<fixed;
        cout<<setprecision(2)<<tc;
    }
float tangent(float tt);
float tangent(float tt)
    {
        tt=tan(tt*pi/180);
        cout<<fixed;
        cout<<setprecision(2)<<tt;
    }
float isine(float tis);
float isine(float tis)
    {
        tis=asin(tis)*180/pi;
        //cout<<fixed;
        cout<<tis;
    }
float icosine(float tic);
float icosine(float tic)
    {
        tic=acos(tic)*180/pi;
        cout<<fixed;
        cout<<setprecision(2)<<tic;
    }
float itangent(float tit);
float itangent(float tit)
    {
        tit=atan(tit)*180/pi;

        cout<<setprecision(2)<<tit;
    }
float sineh (float);
float sineh (float tsh)
    {
    return sinh(tsh);
    }
float cosineh(float);
float cosineh(float tch)
    {
        return cosh(tch);
    }
float tangenth(float);
float tangenth(float tth)
    {
        return tanh(tth);
    }
float isineh (float);
float isineh(float tish)
    {
        return asinh(tish);
    }
float icosineh(float tich);
float icosineh(float tich)
    {
        return acosh(tich);
    }
double itangenth(double tith);
double itangenth(double tith)
    {
        return atanh(tanh(tith));
    }

                      double d = 0;
double det(int n, double mat[10][10])
{
    int c, subi, i, j, subj;
    double submat[10][10];
    if (n == 2)
    {
        return( (mat[0][0] * mat[1][1]) - (mat[1][0] * mat[0][1]));
    }
    else
    {
        for(c = 0; c < n; c++)
        {
            subi = 0;
            for(i = 1; i < n; i++)
            {
                subj = 0;
                for(j = 0; j < n; j++)
                {
                    if (j == c)
                    {
                        continue;
                    }
                    submat[subi][subj] = mat[i][j];
                    subj++;
                }
                subi++;
            }
        d = d + (pow(-1 ,c) * mat[0][c] * det(n - 1 ,submat));
        }
    }
    return d;
}
int main()
{
    char ch;
    char cno;
    cout<<"--------------------------------------------------------------------------"<<endl;
    cout<<"------------------------------- WELCOME ----------------------------------"<<endl;
    cout<<"------------------- CP Semester Final Assignment -------------------------"<<endl;
    cout<<"--------------------------- Submitted By ---------------------------------"<<endl;
    cout<<"-------- F16CS06, F16CS40, F16CS42, F16CS52, F16CS152 --------------------"<<endl;
    cout<<"--------------------------------------------------------------------------"<<endl;
    yy:
    //do
    {
        cout<<endl;
        cout<<"--------------------------------------------------------------------------"<<endl;
        cout<<"         MENU:"<<endl;
        cout<<"               1. Calculator"<<endl;
        cout<<"               2. Mathematical Table Generator"<<endl;
        cout<<"               3. Matrix Generator"<<endl;
        cout<<"               4. Pattern Generator"<<endl;
        cout<<"               5. Start KBC Game"<<endl;
        cout<<"               6. GPA Generator MUET 2k17"<<endl;
        cout<<"               7. Utility Bill Generator"<<endl;
        cout<<"               8. Coin Sorter"<<endl;
        cout<<"               9. Exit Application"<<endl;
        cout<<"--------------------------------------------------------------------------"<<endl;
        zuma:
        cout<<"Your Input: ";
        cin>>cno;
        cout<<endl;
        switch (cno)
        {
        case '1':
            char calchoice;
            cout<<"Which Calculator Do you Want to Use?\n";
            cout<<"         1. Simple Calculator\n";
            cout<<"         2. Scientific Calculator\n";
            cout<<"Your Input: ";
            cin>>calchoice;
            switch (calchoice)
            {
            case '1':
                {
                    char opr;
                    float a, b, c;
                    cout<<"\n---------------------------- Simple Calculator----------------------------"<<endl;
                    cout<<"Please enter 1st Number: ";
                    cin>>a;
                    cout<<"Please enter 2nd Number: ";
                    cin>>b;
                    cout<<"Please enter the operation desired \n '+' for Addition \n '-' for Subtraction \n '/' for Division \n '*' for Multiplication \n Your Input: ";
                    cin>>opr;
                    switch (opr)
                    {
                    case '+':
                        cout<<a+b;
                        break;
                    case '-':
                        cout<<a-b;
                        break;
                    case '*':
                        cout<<a*b;
                        break;
                    case '/':
                        cout<<a/(float)b;
                        break;
                    default:
                        cout<<"Please enter a correct operation i.e. +  -  *  /";
                    }

                }
                break;
                case '2':
                    {
                        cout<<"\n-------------------- Scientific Calculator -------------------------------\n";
                        float a, b, c;
                        int e,trig;
                        double tv;
                        double d=1;
                        char s;
                        cout<<"\t\tTypes of Operations Included:"
                        <<"\n\t\t'U\' for Unary(Single Term)"<<endl
                        <<"\t\t'B\' for Binary(Two Terms)"<<endl
                        <<"\t\t'T\' for Trigonometric Functions"<<endl
                        <<"\n\t\tIn case of Percentage(Binary) Operation,\n\t\tFirst Enter obtained Marks,\n\t\tthen Enter Total Marks"
                        <<"\n \t\tPlease Select Operation Type: ";

                        cin>>s;
                        switch (s) {
                        case 'b':
                        case 'B':
                            cout<<"\t\tPlease Enter Two Numbers: ";
                            cin>>a>>b;
                        cout<<endl
                        <<"\t\t+ for Additon"<<endl
                        <<"\t\t- for Subtraction"<<endl
                        <<"\t\t/ for Division"<<endl
                        <<"\t\t* for Multiplication"<<endl
                        <<"\t\tM for Modulus"<<endl
                        <<"\t\t% for Percentage"<<endl
                        <<"\t\tPlease Select the Mathematical Operation: ";
                        cin>>s;
                        switch(s){
                        case '+':
                            cout<<"\t\tAddition is: "<<a+b;
                            break;
                        case '-':
                            cout<<"\t\tSubtraction is: "<<a-b;
                            break;
                        case '*':
                            cout<<"\t\tMultiplication is: "<<a*b;
                            break;
                        case '/':
                            cout<<"\t\tDivision is: "<<a/b;

                        break;
                        case '%':
                            cout<<"\t\tPercentage is: "<<(a*100)/b;
                            break;
                        case 'M':
                        case 'm':
                            int M=a, m=b;
                            cout<<"\t\tModulus is: "<<M%m;
                            break;
                        }
                        break;
                        case 'u':
                        case 'U':
                        cout<<endl
                        <<" \t\t '1\' for Factorial"<<endl
                        <<" \t\t '2\' for Square"<<endl
                        <<" \t\t'3\' for Square root"<<endl
                        <<" \t\t'4\' for Raise to Power"<<endl
                        <<"\t\tPlease Select An Operation: ";
                        cin>>e;
                        switch (e) {
                        case 1:
                            int n;
                            cout<<"\t\tPlease Input Number for Factorial Operation: ";
                            cin>>n;
                            for (int i=1; i<=n; i++) {
                                d*=i;
                            }
                            cout<<endl<<"\t\tThe Factorial is: "<<d;
                            break;
                        case 2:
                            cout<<endl<<"\t\tPlease Input a Number for Squaring: ";
                            cin>>e;
                            cout<<endl<<"\t\tThe Square is: "<<e*e;
                            break;
                        case 3:
                            cout<<endl<<"\t\tPlease Enter a Number for Square Root: ";
                            cin>>e;
                            cout<<endl<<"\t\tThe Square Root is: "<<sqrt(e);
                            break;
                        case 4:
                            cout<<endl<<"\t\tPlease Enter a Number and its Power: ";
                            cin>>a>>e;
                            cout<<endl<<"\t\tThe Raised Number is: "<<pow(a,e);
                            break;
                        }
                        break;
                        case 'T':
                        case 't':
                                cout<<"\n\t\t1- Sine\n\t\t2- Cosine\n\t\t3- Tangent\n\t\t4- Sine Inverse\n\t\t5- Cos Inverse\n\t\t6- Tan Inverse"
                                <<"\n\t\t7-Sine hyperbolic\n\t\t8- Cosine Hyperbolic\n\t\t9-Tangent Hyperbolic\n\t\t10-Sine Inverse hyperbolic\n\t\t11- Cosine Inverse Hyperbolic"
                                <<"\n\t\t12-Tangent Inverse Hyperbolic "<<endl
                                <<"\t\tPlease Select a Trigonometric Operation: ";
                                cin>>trig;
                                switch (trig) {
                            case 1:
                                cout<<"\t\tEnter Value in Degrees: ";
                                cin>>tv;
                                sine(tv);
                            break;
                            case 2:
                                cout<<"\t\tEnter Value in Degrees: ";
                                cin>>tv;
                                cosine(tv);
                            break;
                            case 3:
                                cout<<"\t\tEnter Value in Degrees: ";
                                cin>>tv;
                                tangent(tv);
                            break;
                            case 4:
                                cout<<"\t\tEnter Value in Degrees: ";
                                cin>>tv;
                                isine(tv);
                            break;
                            case 5:
                                cout<<"\t\tEnter Value in Degrees: ";
                                cin>>tv;
                                icosine(tv);
                            break;
                            case 6:
                                cout<<"\t\tEnter Value in Degrees: ";
                                cin>>tv;
                                itangent(tv);
                            break;
                            case 7:
                                cout<<"\t\tEnter Value in Degrees: ";
                                cin>>tv;
                                cout<<sineh(tv);
                            break;
                            case 8:
                                cout<<"\t\tEnter Value in Degrees: ";
                                cin>>tv;
                                cout<<cosineh(tv);
                            break;
                            case 9:
                                cout<<"\t\tEnter Value in Degrees: ";
                                cin>>tv;
                                cout<<tangenth(tv);
                            break;
                            case 10:
                                cout<<"\t\tEnter Value in Degrees: ";
                                cin>>tv;
                                cout<<isineh(tv);
                            break;
                            case 11:
                                cout<<"\t\tEnter Value in Degrees: ";
                                cin>>tv;
                                cout<<icosineh(tv);
                            break;
                            case 12:
                                cout<<"\t\tEnter Value in Degrees: ";
                                cin>>tv;
                                cout<<itangenth(tv);
                            break;
                                }
                        break;
                        }
                    }
            }
            break;
        case '2':
            {
                cout<<"\n ----------------------------- Table Generator ---------------------------\n";
                int a, b=1,c;
                cout<<"Table of: ";
                cin>>a;
                cout<<"Till: ";
                cin>>c;
                do
                {
                    if(a>0 && a<100)
                    {
                        cout<<a<<"x"<<b<<"="<<a*b<<endl;
                    }
                    b++;
                }
                while(b<=c);
            }
            break;
        case '3':
            {
                char matin;
                matrixx:
                cout<<"\tPlease Enter What you want to do with the Matrix?\n\t\t1- Addition\n\t2- Multiplication\n\t3- Determinant\n\t4- Transpose";
                cin>>matin;
                switch (matin)
                {
                case '1':
                    {
                        int r, c, a[100][100], b[100][100], sum[100][100], i, j;
                        cout << "Enter number of rows (between 1 and 100): ";
                        cin >> r;
                        cout << "Enter number of columns (between 1 and 100): ";
                        cin >> c;
                        cout << endl << "Enter elements of 1st matrix: " << endl;
                        // Storing elements of first matrix entered by user.
                        for(i = 0; i < r; ++i)
                           for(j = 0; j < c; ++j)
                           {
                               cout << "Enter element a" << i + 1 << j + 1 << " : ";
                               cin >> a[i][j];
                           }

                        // Storing elements of second matrix entered by user.
                        cout << endl << "Enter elements of 2nd matrix: " << endl;
                        for(i = 0; i < r; ++i)
                           for(j = 0; j < c; ++j)
                           {
                               cout << "Enter element b" << i + 1 << j + 1 << " : ";
                               cin >> b[i][j];
                           }

                        // Adding Two matrices
                        for(i = 0; i < r; ++i)
                            for(j = 0; j < c; ++j)
                                sum[i][j] = a[i][j] + b[i][j];

                        // Displaying the resultant sum matrix.
                        cout << endl << "Sum of two matrix is: " << endl;
                        for(i = 0; i < r; ++i)
                            for(j = 0; j < c; ++j)
                            {
                                cout << sum[i][j] << "  ";
                                if(j == c - 1)
                                    cout << endl;
                            }

                    }
                    break;
                case '2':
                    {
                       int a[10][10], b[10][10], mult[10][10], r1, c1, r2, c2, i, j, k;
                        cout << "Enter rows and columns for first matrix: ";
                        cin >> r1 >> c1;
                        cout << "Enter rows and columns for second matrix: ";
                        cin >> r2 >> c2;
                        // If column of first matrix in not equal to row of second matrix,
                        // ask the user to enter the size of matrix again.
                        while (c1!=r2)
                        {
                            cout << "Error! column of first matrix not equal to row of second.";
                            cout << "Enter rows and columns for first matrix: ";
                            cin >> r1 >> c1;
                            cout << "Enter rows and columns for second matrix: ";
                            cin >> r2 >> c2;
                        }
                        // Storing elements of first matrix.
                        cout << endl << "Enter elements of matrix 1:" << endl;
                        for(i = 0; i < r1; ++i)
                            for(j = 0; j < c1; ++j)
                            {
                                cout << "Enter element a" << i + 1 << j + 1 << " : ";
                                cin >> a[i][j];
                            }
                        cout << endl << "Enter elements of matrix 2:" << endl;
                        for(i = 0; i < r2; ++i)
                            for(j = 0; j < c2; ++j)
                            {
                                cout << "Enter element b" << i + 1 << j + 1 << " : ";
                                cin >> b[i][j];
                            }
                        // Initializing elements of matrix mult to 0.
                        for(i = 0; i < r1; ++i)
                            for(j = 0; j < c2; ++j)
                            {
                                mult[i][j]=0;
                            }
                        // Multiplying matrix a and b and storing in array mult.
                        for(i = 0; i < r1; ++i)
                            for(j = 0; j < c2; ++j)
                                for(k = 0; k < c1; ++k)
                                {
                                    mult[i][j] += a[i][k] * b[k][j];
                                }
                        // Displaying the multiplication of two matrix.
                        cout << endl << "Output Matrix: " << endl;
                        for(i = 0; i < r1; ++i)
                        for(j = 0; j < c2; ++j)
                        {
                            cout << " " << mult[i][j];
                            if(j == c2-1)
                                cout << endl;
                        }
                    }
                    break;
                case '3':
                    {
                        int n;
                        cout<<"enter the order of matrix" ;
                        cin>>n;
                        double mat[10][10];
                        int i, j;
                        cout<<"enter the elements"<<endl;
                        for(i=0;i<n;i++)
                        {
                            for(j=0;j<n;j++)
                            {
                                cin>>mat[i][j];
                            }
                        }
                        cout<<"\ndeterminant"<<det(n,mat);
                    }
                    break;
                case '4':
                    {
      int a[10][10], trans[10][10], r, c, i, j;

        cout << "Enter rows and columns of matrix: ";
        cin >> r >> c;

        // Storing element of matrix entered by user in array a[][].
        cout << endl << "Enter elements of matrix: " << endl;
        for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
        {
            cout << "Enter elements a" << i + 1 << j + 1 << ": ";
            cin >> a[i][j];
        }

        // Displaying the matrix a[][]
        cout << endl << "Entered Matrix: " << endl;
        for(i = 0; i < r; ++i)
            for(j = 0; j < c; ++j)
            {
                cout << " " << a[i][j];
                if(j == c - 1)
                    cout << endl << endl;
            }

        // Finding transpose of matrix a[][] and storing it in array trans[][].
        for(i = 0; i < r; ++i)
            for(j = 0; j < c; ++j)
            {
                trans[j][i]=a[i][j];
            }

        // Displaying the transpose,i.e, Displaying array trans[][].
        cout << endl << "Transpose of Matrix: " << endl;
        for(i = 0; i < c; ++i)
            for(j = 0; j < r; ++j)
            {
                cout << " " << trans[i][j];
                if(j == r - 1)
                    cout << endl << endl;
            }
                    }
                    break;
                default:
                    cout<<"\nPlease Input a Correct Number\n";
                    goto matrixx;

            }
            break;
        case '4':
            {

                    cout<<"\n --------------------------- Pattern Generator ---------------------------\n";
                int pno;
                cout<<"Please Select Which Pattern Do you want to Draw"<<endl;
                cout<<"         1. Semi-Pyramid"<<endl;
                cout<<"         2. Pyramid"<<endl;
                cout<<"         3. Diamond"<<endl;
                cout<<"         4. Heart"<<endl;
                cin>>pno;
                if (pno==1)
                {
                    int d;
                    cout<<"Number of rows: ";
                    cin>>d;
                    for(int a=1; a<=d; a++)
                    {
                        for(int c=1; c<=a; c++)
                        {
                            cout<<"*";
                        }
                        cout<<endl;
                    }
                }
                else if (pno==2)
                {
                    int d;
                    cout<<"Number of rows: ";
                    cin>>d;
                    for(int a=1; a<=d; a++)
                    {
                        for(int c=1; c<=d-a; c++)
                        {
                            cout<<" ";
                        }
                        for (int b=1; b<=(a*2)-1; b++)
                        {
                            cout<<"*";
                        }
                        cout<<endl;
                    }
                }
                else if (pno==3)
                {
                    int d;
                        cout<<"Number of rows: ";
                        cin>>d;
                        for(int a=1; a<=d; a++)
                        {
                            for(int c=1; c<=d-a; c++)
                            {
                                cout<<" ";
                            }
                            for (int b=1; b<=(a*2)-1; b++)
                            {
                                cout<<"*";
                            }
                            cout<<endl;
                        }
                        for (int a=d-1; a>=1; a--)
                        {
                            for (int c=1; c<=d-a; c++)
                            {
                                cout<<" ";
                            }
                            for (int b=1; b<=(a*2)-1; b++)
                            {
                                cout<<"*";
                            }
                            cout<<endl;
                        }
                }
                else if (pno==4)
                {
                        int a;
                        cout<<"Size=";
                        cin>>a;
                        char cha;
                        cout<<"Character: ";
                        cin>>cha;
                        cout<<endl<<endl;
                        double x, y, size=a
                        ;
                        char ch=cha;
                        string messagess;
                        string message(messagess);
                        int print_line = 4;

                        if(message.length() % 2 != 0)
                            message += " ";

                        for(x=0;x<size;x++)
                        {
                            for(y=0;y<=4*size;y++)
                            {
                                double dist1 = sqrt( pow(x-size,2) + pow(y-size,2) );
                                double dist2 = sqrt( pow(x-size,2) + pow(y-3*size,2) );

                                if (dist1 < size + 0.5 || dist2 < size + 0.5 ) {
                                    cout<< ch;
                                }
                                else
                                    cout<< " ";
                            }

                            cout<<"\n";
                        }

                        for(x=1;x<2*size;x++)
                        {
                            for(y=0;y<x;y++)
                                cout << " ";

                            for (y=0;y<4*size + 1 - 2*x; y++)
                            {
                                if (x>= print_line - 1 && x <= print_line + 1) {
                                    int idx = y - (4*size - 2*x - message.length()) / 2;
                                    if(idx < message.length() && idx >= 0) {
                                        if (x == print_line)
                                            cout<<message[idx];
                                        else cout << " ";
                                    }
                                    else
                                        cout << ch;
                                }
                                else
                                    cout<< ch;
                            }
                            cout<<endl;
                        }

                }
                else
                    cout<<"Please Input a correct Value";
                break;
            }
        case '5':
            {
                char name[50],ch[11];
                int x;
                {
                    x=0;
                    cout<<"\n ------------------------------ Welcome to KBC ---------------------------";
                    cout<<"\n\n Enter your name: ";
                    cin>>name;
                    cout<<"\n Enter answer in form of 'a','b' and'c'only.";
                    cout<<"\n Q1.What is called as 'THE HOLY LAND'?";
                    cout<<"\n a.Jerusalem";
                    cout<<"\n b.Makli";
                    cout<<"\n c.Mecca"<<endl;
                    cin>>ch[1];
                    if(ch[1]=='a')
                    {
                        x=x+10;
                        cout<<"\n Good Job.";
                        cout<<"\n Your score is "<<x<<endl;
                    }
                    else
                    {
                        cout<<"\n Sorry wrong answer.";
                        goto abc;
                    }
                    cout<<"\n Q2.What is called as 'THE ROOF OF THE WORLD'?";
                    cout<<"\n a.Nepal";
                    cout<<"\n b.Rome";
                    cout<<"\n c.Tibet"<<endl;
                    cin>>ch[2];
                    if(ch[2]=='c')
                    {
                        x=x+10;
                        cout<<"\n Good Job.";
                        cout<<"\n Your score is "<<x<<endl;
                    }
                    else
                    {
                        cout<<"\n Sorry wrong answer.";
                        goto abc;
                    }
                    cout<<"\n Q3.What is called as 'THE LAND OF RISING SUN'?";
                    cout<<"\n a.Chicago";
                    cout<<"\n b.Japan";
                    cout<<"\n c.Tibet"<<endl;
                    cin>>ch[3];
                    if(ch[3]=='b')
                    {
                        x=x+10;
                        cout<<"\n Good Job.";
                        cout<<"\n Your score is "<<x<<endl;
                    }
                    else
                    {
                        cout<<"\nSorry wrong answer.";
                        goto abc;
                    }
                    cout<<"\n Q4.What is called as 'THE GIFT OF NILE'?";
                    cout<<"\n a.Chicago";
                    cout<<"\n b.Egypt";
                    cout<<"\n c.Africa"<<endl;
                    cin>>ch[4];
                    if(ch[4]=='b')
                    {
                        x=x+10;
                        cout<<"\n Good Job.";
                        cout<<"\n Your score is "<<x<<endl;
                    }
                    else
                    {
                        cout<<"Sorry wrong answer.";
                        goto abc;
                    }
                    cout<<"\n Q5.What is called as 'THE LAND OF MIDNIGHT SUN'?";
                    cout<<"\n a.Norway";
                    cout<<"\n b.Japan";
                    cout<<"\n c.Australia"<<endl;
                    cin>>ch[5];
                    if(ch[5]=='a')
                    {
                        x=x+10;
                        cout<<"\n Good Job.";
                        cout<<"\n Your score is "<<x<<endl;
                    }
                    else
                    {
                        cout<<"\n Sorry wrong answer.";
                        goto abc;
                    }
                    cout<<"\n Q6.What is called as 'THE LAND OF THUNDERBOLT'?";
                    cout<<"\n a.Bhutan";
                    cout<<"\n b.Canada";
                    cout<<"\n c.Arab"<<endl;
                    cin>>ch[6];
                    if(ch[6]=='a')
                    {
                        x=x+10;
                        cout<<"\n Good Job.";
                        cout<<"\n Your score is "<<x<<endl;
                    }
                    else
                    {
                        cout<<"\n Sorry wrong answer.";
                        goto abc;
                    }
                    cout<<"\n Q7.What is called as 'THE WINDY CITY?";
                    cout<<"\n a.Jerusalem";
                    cout<<"\n b.Tokyo";
                    cout<<"\n c.Chicago"<<endl;
                    cin>>ch[7];
                    if(ch[7]=='c')
                    {
                        x=x+10;
                        cout<<"\n Good Job.";
                        cout<<"\n Your score is "<<x<<endl;
                    }
                    else
                    {
                        cout<<"\n Sorry wrong answer.";
                        goto abc;
                    }
                    cout<<"\n Q8.What is called as 'THE LAND OF WHITE ELEPHANTS'?";
                    cout<<"\n a.Bangladesh";
                    cout<<"\n b.Thailand";
                    cout<<"\n c.India"<<endl;
                    cin>>ch[8];
                    if(ch[8]=='b')
                    {
                        x=x+10;
                        cout<<"\n Good Job.";
                        cout<<"\n Your score is "<<x<<endl;
                    }
                    else
                    {
                        cout<<"\n Sorry wrong answer.";
                        goto abc;
                    }
                    cout<<"\n Q9.What is called as 'THE QUEEN OF HILL STATIONS'?";
                    cout<<"\n a.Goa";
                    cout<<"\n b.Muree";
                    cout<<"\n c.Switzerland"<<endl;
                    cin>>ch[9];
                    if(ch[9]=='b')
                    {
                        x=x+10;
                        cout<<"\n Good Job.";
                        cout<<"\n Your score is "<<x<<endl;
                    }
                    else
                    {
                        cout<<"\n Sorry wrong answer";
                        goto abc;
                    }
                    cout<<"\n Q10.What is called as 'THE DARK CONTIENENT'?";
                    cout<<"\n a.Asia";
                    cout<<"\n b.Australia";
                    cout<<"\n c.Africa";
                    cin>>ch[10];
                    if(ch[10]=='c')
                    {
                        x=x+10;
                        cout<<"\n Good Job.";
                        cout<<"\n Your score is "<<x<<endl;
                    }
                    else
                    {
                        cout<<"\n Sorry wrong answer.";
                        goto abc;
                    }
                    abc:
                    if(x==100)
                    {
                        cout<<"\n No cheating...... "<<name<<" you have done this earlier also.";
                    }
                    if(x==90)
                    {
                        cout<<"\n "<<name<<" you are extremely intelligent.";
                        cout<<"\n Your Score is 90";
                    }
                    if(x==80)
                    {
                        cout<<"\n "<<name<<" you are intelligent.";
                        cout<<"\n Your Score is 80";
                    }
                    if(50==x||x==70||x==60)
                    {
                        cout<<"\n "<<name<<" you are average";
                        cout<<"\n Your Score is "<<x<<".";
                        cout<<"\n Better luck next time";
                    }
                    else
                    if(x<=40)
                        cout<<"\n No use........ Not even 5 questions right";
                    }
                getch();
            }
            break;
        case '6':
            {
                int q;
                cout<<"--------------------------- GPA Calculator -------------------------------"<<endl;
                cout<<" How many subject's points do you want to calculate? : ";
                cin>>q;
                cout<<endl;
                float credit [q];
                float point [q];
                cout<<endl;
                for(int i=0;i<q;i++)
                {
                    cout<<"Enter the credit for the subject "<<i+1<<": ";
                    cin>>credit[i];
                    cout<<endl;
                    cout<<"Enter the point of the subject "<<i+1<<": ";
                    cin>>point[i];
                    cout<<endl;
                    cout<<"-----------------------------------\n\n"<<endl;
                }
                float sum=0;
                float tot;
                for(int j=0;j<q;j++)
                {
                    tot=credit[j]*point[j];
                    sum=sum+tot;
                }
                float totCr=0;
                for(int k=0;k<q;k++)
                {
                    totCr=totCr+credit[k];
                }
                cout<<"\n\n\nTotal Points: "<<sum<<" . Total Credits: "<<totCr<<" .Total GPA: "<<(sum/totCr)/25<<" ."<<endl;

            }
            break;
        case '7':
            {
                char A;
                int a,b,c,d,e,W;
                    cout<<endl;
                    cout<<endl;
                    cout<<"============================================================="<<endl;
                    cout<<"            WELCOME TO ONLINE BILLING SYSTEM                 "<<endl;
                    cout<<"============================================================="<<endl;
                    cout<<endl;
                    cout<<endl;
                    cout<<    " YOUR ELECTRICITY BILLS CONTAINS FIXED CHARGES AND GST"<<endl;
                    cout<<    " METER MAINTAINCE RS 10 PKR"<<endl;
                    cout<<    " PTV CHARGES RS 150 PKR"<<endl;
                    cout<<    " AFTER, DUE DATE BILL INCREASE BY PKR 150"<<endl;
                    cout<<endl;
                    cout<<endl;
                     cout<<endl;
                    cout<<endl;
                    cout<<"=================================================="<<endl;
                    cout<<    " ENTER PREVIOUS READING =";
                    cin>>a;
                    cout<<    " ENTER PRESENT  READING =";
                    cin>>b;
                            c=b-a;
                            cout<<endl;
                            cout<<endl;
                    cout<<    " NET READING IS         = "<<c<<endl;
                    cout<<"=================================================="<<endl;

                cout<<endl;
                cout<<endl;
                cout<<    " BILLING IS ACCORDING TO TERRIF SYSTEM"<<endl;
                cout<<    " PRESS 1 FOR  COMMERCIAL USERS"<<endl;
                cout<<    " PRESS 2 FOR DOMESTIC USERS"<<endl;
                cout<<endl;
                  cout<<"=================================================="<<endl;
                cout<<     "ENTER TARRIF HERE = ";
                cin>>W;


                if (W==1)
                {

                    cout<<" NEPRA RATES FOR COMMERCIAL USERS ARE...."<<endl;
                    cout<<" UNITS < 100, 1 UNIT= 7.84 PKR"<<endl;
                    cout<<" UNITS > 100, 1 UNIT= 7.61 PKR (FIXED) "<<endl;
                    cout<<endl;
                    cout<<endl;
                    cout<<"=================================================="<<endl;
                    cout<<endl;
                    cout<<" KINDLY, ENTER NET READING HERE = "; cin>>c;
                    cout<<"=================================================="<<endl;


                if (c<=100)
                {
                    cout<<"YOUR ELECTRICITY BILL IS ="<<(c*7.84)+160;
                }
                else if(c>100)
                {
                    cout<<" YOUR ELECTRICITY BILL IS="<<(c*7.61)+160;
                }
                cout<<endl;

            }
            else if (W==2)
                {
                    cout<<"=================================================="<<endl;
                    cout<<" NEPRA RATES FOR DOMESTIC USERS ARE...."<<endl;
                    cout<<" UNITS < 100, 1 UNIT= 2.65 PKR"<<endl;
                    cout<<" UNITS < 300, 1 UNIT= 3.64 PKR"<<endl;
                    cout<<" UNITS <1000, 1 UNIT= 6.15 PKR"<<endl;
                    cout<<" UNITS >1000, 1 UNIT= 7.41 PKR"<<endl;
                    cout<<"=================================================="<<endl;
                    cout<<endl;
                    cout<<endl;
                    cout<<" ENTER READING HERE = "; cin>>c;
            if (c<=100)
                {
                    cout<<"YOUR ELECTRICITY BILL IS ="<<(c*2.65)+160;
                }
                else if (c>101 && c<=300)
                {
                    cout<<" YOUR ELECTRICITY BILL IS="<<(c*3.64)+160;
                }
                else if (c>301 && c<=1000)
                {
                    cout<<" YOUR ELECTRICITY BILL IS="<<(c*6.15)+160;

                }
                else if (c>1001)
                {
                      cout<<" YOUR ELECTRICITY BILL IS="<<(c*7.41)+160;
                }
                }

            }
            break;
        case '8':
            {

                cout<<"\n ---------------------------- Money Sort ---------------------------------\n";
                long money;
                cout<<"Please Enter the Amount: ";
                cin>>money;
                cout<<endl<<"In 5000: "<<money/5000<<endl;
                money%=5000;
                cout<<"In 1000: "<<money/1000<<endl;
                money%=1000;
                cout<<"In 500: "<<money/500<<endl;
                money%=500;
                cout<<"In 100: "<<money/100<<endl;
                money%=100;
                cout<<"In 50: "<<money/50<<endl;
                money%=50;
                cout<<"In 20: "<<money/20<<endl;
                money%=20;
                cout<<"In 10: "<<money/10<<endl;
                money%=10;
                cout<<"In 5: "<<money/5<<endl;
                money%=5;
                cout<<"In 2: "<<money/2<<endl;
                money%=2;
                cout<<"In 1: "<<money<<endl;
            }
            break;
        case '9':
            {
                char exitch;
                eee:
                cout<<"Are You sure You want to Quit?"<<endl;
                cin>>exitch;
                if (exitch=='y' || exitch=='Y')
                    {
                        exit(EXIT_SUCCESS);
                    }
                else if (exitch=='n'||exitch=='N')
                    goto yy;
                else
                    {
                        cout<<"\nPlease enter a valid character\n\n";
                        goto eee;
                    }
            }
            break;
        default:
            {
                cout<<"\nPlease Enter a Correct Value \n\n";
                goto zuma;
            }
        }
    mf:
    cout<<endl<<"\nDo you want to continue?"<<endl;
    cin>>ch;
    }
    if (ch=='y' || ch=='Y')
                goto yy;
    else if (ch=='n'|| ch=='N')
        exit(EXIT_SUCCESS);
    else
        {
            cout<<"\nPlease Enter y/n";
            goto mf;
        }
   // while(ch=='Y'||ch=='y');
 getch();
}
}
