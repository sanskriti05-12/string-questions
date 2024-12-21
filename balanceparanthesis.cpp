#inclue<iostream>
using namespace std;
void balance(string &str){
    int square,circle,curli,ch;
    for(i=0;i<str;i++){
        ch=str[i];
   if( ch=='{'){
    curli++;
   }
  else if( ch=='('){
    circle++;
   }
   
  else if( ch=='['){
    square++;
   }
    }
   
   

}
int main(){
     string str="[{()}]";
    balance(str);
    cout<<str;


}