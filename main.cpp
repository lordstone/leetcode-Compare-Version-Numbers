class Solution {
public:
    int compareVersion(string version1, string version2) {
        int ptr1 = 0, ptr2 = 0;
        while(ptr1 < version1.length() || ptr2 < version2.length()){
            int sum1 = 0, sum2 = 0;
            while(version1[ptr1] != '.' && ptr1 < version1.length()){
                sum1 *= 10;
                sum1 += version1[ptr1++] - '0';
            }
            ptr1++;
            while(version2[ptr2] != '.' && ptr2 < version2.length()){
                sum2 *= 10;
                sum2 += version2[ptr2++] - '0';
            }
            ptr2++;
            if(sum1 < sum2) return -1;
            else if (sum1 > sum2) return 1;
        }//end while
        return 0;
    }//int main
};
