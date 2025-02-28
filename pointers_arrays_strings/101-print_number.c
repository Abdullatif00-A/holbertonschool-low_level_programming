#include <string.h>

char *infinite_add(char *n1, char *n2, char *r, int size_r) {
    int len1 = strlen(n1);
    int len2 = strlen(n2);
    int carry = 0;
    int i = len1 - 1;
    int j = len2 - 1;
    int k = 0;

    // Check if buffer is too small (needs space for result + null terminator)
    if (size_r < (len1 > len2 ? len1 : len2) + 1) {
        return 0;
    }

    // Add digits from right to left
    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += n1[i--] - '0';
        if (j >= 0) sum += n2[j--] - '0';
        carry = sum / 10;
        r[k++] = (sum % 10) + '0';
        if (k >= size_r) return 0; // Buffer overflow
    }
    r[k] = '\0';

    // Reverse the result
    for (int start = 0, end = k - 1; start < end; start++, end--) {
        char temp = r[start];
        r[start] = r[end];
        r[end] = temp;
    }

    return r;
}
