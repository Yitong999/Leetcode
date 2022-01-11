//
// Created by thoma on 1/11/2022.
//

#ifndef UNTITLED_Q67_ADDBINARY_H
#define UNTITLED_Q67_ADDBINARY_H
#include <string>
#include <algorithm>

using namespace std;
class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.length() - 1;
        int j = b.length() - 1;
        int carry = 0;
        string result = "";
        while(i >= 0 | j >= 0 | carry > 0){
            int tmp = 0;
            if(i >= 0){
                tmp += a[i] - 48;
                i--;
            }
            if(j >= 0){
                tmp += b[j] - 48;
                j--;
            }
            if(carry > 0){
                tmp += carry;
                carry = 0;
            }

            switch(tmp){
                case 0:  result.append("0"); break;
                case 1:  result.append("1"); break;
                case 2:  result.append("0");
                    carry = 1; break;
                case 3:  result.append("1");
                    carry = 1; break;
            }
        }

        reverse(result.begin(), result.end());
        return result;
    }
};
#endif //UNTITLED_Q67_ADDBINARY_H
