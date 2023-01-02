#include <bits/stdc++.h> 
string replaceSpaces(string &str){

//Solution 1

    int len = str.length();
//  string str2 = "@40";
// 	for(int i=0;i<len;i++){
//         if(str[i]==' '){
//             str.replace(i,1,str2);
//             len+=2;
//         }
//     }
//     return str;
   
// Solution 2

    string temp="";
    for(int i=0;i<len;i++){
        if(str[i]==' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else{
            temp.push_back(str[i]);
        }
    }
    return temp;
}
