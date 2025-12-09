## Input

p: first prime number

q: second prime number

M: numeric message to encrypt

Constraints:

p and q must be prime numbers.

M must be less than n = p * q.

/////////////////////////////

## Functions Used

isprime(n): Checks if a number n is prime.

modInverse(e, phi): Finds modular inverse of e modulo phi.

power(base, exp, mod): Performs modular exponentiation.

generateKeys(p, q, e, d, n): Generates the RSA public and private keys.

encrypt(M, e, n): Encrypts the numeric message.

decrypt(C, d, n): Decrypts the numeric message.

/////////////////////////////////////////

## Notes

This implementation is for educational purposes and works for small integers.

For real-world RSA, larger primes and optimized modular inverse computation (e.g., Extended Euclidean Algorithm) should be used.

The program exits if the provided numbers are not prime.
