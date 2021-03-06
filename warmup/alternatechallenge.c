/*Shashank likes strings in which consecutive characters are different. For example, he likes ABABA, while he doesn't like ABAA. Given a string containing characters A and B only, he wants to change it into a string he likes. To do this, he is allowed to delete the characters in the string.

Your task is to find the minimum number of required deletions.

Input Format
The first line contains an integer T i.e. the number of test cases.
Next T lines contain a string each.

Output Format
Print minimum number of required steps for each test case.

Constraints

1≤T≤10
1≤lengthofString≤105 
Sample Input

5
AAAA
BBBBB
ABABABAB
BABABA
AAABBB

Sample Output

3
4
0
0
4
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,n;
    char *s = (char *)malloc(sizeof(char));
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int m=0,n=1,len,count=0;
        scanf("%s",s);
        for(len=0;s[len]!='\0';len++);
        while(m<len-1 || n<len-1)
        {
                if(s[m]==s[n])
                {
                    count++;
                    n++;
                }
                else
                {
                    m=n;
                    n++;
                }
            }
         printf("%d\n",count);
        }
    return 0;
}

