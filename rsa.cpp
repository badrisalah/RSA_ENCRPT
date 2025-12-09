#include <bits/stdc++.h>
using namespace std;

bool isprime(long long n) {
    if (n < 2) return false;
    for (long long i = 2; i*i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

int modInverse(int e, int phi) {
    for (int d = 2; d < phi; d++)
        if ((e * d) % phi == 1) return d;
    return -1;
}

int power(int base, int expo, int m) {
    int res = 1;
    base = base % m;
    while (expo > 0) {
        if (expo & 1) res = (res * 1LL * base) % m;
        base = (base * 1LL * base) % m;
        expo /= 2;
    }
    return res;
}

void generateKeys(int p, int q, int &e, int &d, int &n) {
    if (!isprime(p) || !isprime(q)) exit(1);
    n = p * q;
    int phi = (p - 1) * (q - 1);
    for (e = 2; e < phi; e++)
        if (__gcd(e, phi) == 1) break;
    d = modInverse(e, phi);
}

int encrypt(int m, int e, int n) {
    return power(m, e, n);
}

int decrypt(int c, int d, int n) {
    return power(c, d, n);
}

int main() {
    int p, q, M;
    cin >> p >> q >> M;
    int e, d, n;
    generateKeys(p, q, e, d, n);
    int C = encrypt(M, e, n);
    int decrypted = decrypt(C, d, n);
    cout <<"original  data :"<< M << "\n";
    cout <<"encrypted data :"<< C << "\n";
    cout <<"decrypted data :"<< decrypted << "\n";
}

