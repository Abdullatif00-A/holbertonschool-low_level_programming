#include "main.h"
#include <string.h>

/**
 * infinite_add - Adds two numbers represented as strings.
 * @n1: First number as a string.
 * @n2: Second number as a string.
 * @r: Buffer to store the result.
 * @size_r: Size of the buffer.
 * Return: Pointer to the result (r) if successful, 0 if the result cannot fit.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1 = strlen(n1); // طول السلسلة الأولى
    int len2 = strlen(n2); // طول السلسلة الثانية
    int carry = 0;         // متغير النقل
    int i = len1 - 1;      // مؤشر لآخر رقم في n1
    int j = len2 - 1;      // مؤشر لآخر رقم في n2
    int k = 0;             // مؤشر للموقع في المصفوفة r

    // التحقق مما إذا كان الحجم كافيًا لاستيعاب النتيجة (بما في ذلك \0)
    int max_len = (len1 > len2 ? len1 : len2) + 1; // أقصى طول ممكن للنتيجة
    if (size_r < max_len)
    {
        return 0; // إذا كان الحجم غير كافٍ، أرجع 0
    }

    // جمع الأرقام من اليمين إلى اليسار
    while (i >= 0 || j >= 0 || carry)
    {
        int sum = carry; // ابدأ بالنقل
        if (i >= 0)
            sum += n1[i--] - '0'; // أضف الرقم من n1 إذا كان موجودًا
        if (j >= 0)
            sum += n2[j--] - '0'; // أضف الرقم من n2 إذا كان موجودًا
        carry = sum / 10;         // احسب النقل للخانة التالية
        r[k++] = (sum % 10) + '0'; // احفظ الرقم الحالي في r

        // تحقق من تجاوز الحجم
        if (k >= size_r)
            return 0;
    }

    r[k] = '\0'; // أضف العلامة النهائية

    // عكس النتيجة لأننا بنيناها من اليمين إلى اليسار
    for (int start = 0, end = k - 1; start < end; start++, end--)
    {
        char temp = r[start];
        r[start] = r[end];
        r[end] = temp;
    }

    return r; // أرجع مؤشرًا إلى النتيجة
}
