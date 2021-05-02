#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
#include <string.h>
using namespace std;
class Complex {
            
    public:
        int real,img;
        Complex(){
            real = 0;
            img = 0;

        }
        Complex( int a , int b){
            
            real = a;
            img = b;
        }
        friend void assign(Complex &obj,string s);
        friend void conjucate(Complex &obj);
        friend void printComplex(Complex &obj, string s);
        Complex operator+ (const Complex &obj){
            Complex newObj;
            newObj.img = img + obj.img;
            newObj.real = real + obj.real;
            return newObj;

        }
        Complex operator- (const Complex &obj){
            Complex newObj;
            newObj.img = img - obj.img;
            newObj.real = real - obj.real;
            return newObj;

        }
        Complex operator* (const Complex &obj){
            Complex newObj;
            newObj.img = img * obj.real + real * obj.img;
            newObj.real = real * obj.real - img * obj.img;
            return newObj;
        }
        Complex operator/ (const Complex &obj){
            Complex newObj;
            newObj.img = (img * obj.real - real * obj.img) / (obj.real ^ 2 + obj.img ^ 2 );
            newObj.real =(real * obj.real + img * obj.img) / (obj.real ^ 2 + obj.img ^ 2 );
            return newObj;
        }

    
        ~Complex(){
            real = 0;
            img = 0;
        }
        
            
};
void assign(Complex &obj, string s){
                cout << "Enter Complex"<< " "<< s << ":" << endl;
                cout << "\t Real Part : \t " ;
                cin >> obj.real;
                cout << "\t Img Part : \t " ;
                cin >> obj.img;
            
            
    }
void conjucate(Complex &obj, string s){
    cout<<"The conjucate of"<< " " << s << " "<< "=" <<" ";
    int imgConjucate = (-1) * obj.img;
    if (imgConjucate > 0){
        cout << obj.real << "+"<< imgConjucate<< "i" << endl;
    
    }else if(imgConjucate == 0 ){
        cout << obj.real<<endl;
        
    }else{
        cout << obj.real<<imgConjucate<<"i"<<endl;
    
    }

}
void printComplex(Complex &obj , string s){
    cout<<""<<s << " "<<"="<<" ";
    if (obj.img > 0){
        cout << obj.real << "+"<<obj.img<< "i" << endl;
    }else if(obj.img == 0 ){
        cout << obj.real<<endl;
    }else{
        cout << obj.real<<obj.img<< "i"<<endl;
    }

}
#endif