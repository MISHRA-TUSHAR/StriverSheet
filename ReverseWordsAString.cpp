#include<bits/stdc++.h>
string reverseString(string &str){
   stack<string> st;
   string s;
  for(int i=0;i<str.size();i++){
   if(s.empty()&&str[i]==' ')continue;
   else if(str[i]==' '){
     st.push(s);
     s.erase();
   }
else {
  s.push_back(str[i]);
}
