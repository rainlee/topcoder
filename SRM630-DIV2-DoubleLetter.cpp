/*
                   _ooOoo_
                  o8888888o
                  88" . "88
                  (| -_- |)
                  O\  =  /O
               ____/`---'\____
             .'  \\|     |//  `.
            /  \\|||  :  |||//  \
           /  _||||| -:- |||||-  \
           |   | \\\  -  /// |   |
           | \_|  ''\---/''  |   |
           \  .-\__  `-`  ___/-. /
         ___`. .'  /--.--\  `. . __
      ."" '<  `.___\_<|>_/___.'  >'"".
     | | :  `- \`.;`\ _ /`;.`/ - ` : | |
     \  \ `-.   \_ __\ /__ _/   .-` /  /
======`-.____`-.___\_____/___.-`____.-'======
                   `=---='
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
         God Bless Me     BUG Free Forever
*/
/*
 Problem Statement for DoubleLetter


Problem Statement
    	You are given a String S. You can modify this string by repeating the following process:
Find the leftmost occurrence of two consecutive letters in S that are the same.
If you found a pair of identical letters in the first step, delete those two letters from S.
For example, if S="aabccb", you can proceed as follows:
Find and erase "aa", producing the string "bccb".
Find and erase "cc", producing the string "bb".
Find and erase "bb", producing the empty string.
For S="axxyybac" you can do at most two steps, erasing "xx" first and "yy" next. Once you obtain the string "abac", you are done. Note that you cannot erase the two "a"s because they are not consecutive. You want to change S into an empty string by repeating the operation described above. Return "Possible" if you can do that, and "Impossible" otherwise.
 
Definition
    	
Class:	DoubleLetter
Method:	ableToSolve
Parameters:	String
Returns:	String
Method signature:	String ableToSolve(String S)
(be sure your method is public)
    
 
Constraints
-	S will contain between 1 and 50 characters.
-	Each character in S will be a lowercase English letter ('a'-'z').
 
Examples
0)	
    	
"aabccb"
Returns: "Possible"
1)	
    	
"aabccbb"
Returns: "Impossible"
The process will terminate with a single 'b'.
2)	
    	
"abcddcba"
Returns: "Possible"
"abcddcba" -> "abccba" -> "abba" -> "aa" -> "".
3)	
    	
"abab"
Returns: "Impossible"
No two successive letters are the same, so we can't do any operation.
4)	
    	
"aaaaaaaaaa"
Returns: "Possible"
5)	
    	
"aababbabbaba"
Returns: "Impossible"
6)	
    	
"zzxzxxzxxzzx"
Returns: "Possible"
*/
#include <iostream>
#include <string>
#include <stack>
using namespace std;

class DoubleLetter {
public:
    string ableToSolve(string &s)
    {
        if (s.empty())
            return "Possible";
        stack<char> sdl;
        for (int i = 0; i < s.size(); ++i)
        {
            if (sdl.empty() || (s[i] != sdl.top()))
                sdl.push(s[i]);
            else
                sdl.pop();
        }
        return (sdl.empty() ? "Possible" : "Impossible" );
    }
};