class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") return "0";

        int n1 = num1.length(), n2 = num2.length();
        int* products = new int[n1 + n2]();  // initialize to 0

        for (int i = n1 - 1; i >= 0; i--) {
            for (int j = n2 - 1; j >= 0; j--) {
                int tmp1 = num1[i] - '0', tmp2 = num2[j] - '0';
                products[i + j + 1] += tmp1 * tmp2;
            }
        }

        int tmp = 0;
        for (int i = n1 + n2 - 1; i >= 0; i--) {
            int temp = (products[i] + tmp) % 10;
            tmp = (products[i] + tmp) / 10;
            products[i] = temp;
        }

        std::string s;
        int i = 0;
        while (i < n1 + n2 && products[i] == 0) i++;  // skip leading zeros
        for (; i < n1 + n2; i++) {
            s += (products[i] + '0');
        }

        delete[] products;
        return s.empty() ? "0" : s;
    }
};
