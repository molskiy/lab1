#include <stdio.h>
#include <math.h>
float min(float a, float b, float c){
    float minz = a;
    if (b < minz)
        minz = b;
    if (c < minz)
        minz = c;
    return minz;
}
int main() {
    float x, y;
    float hx = 0.6;
    float hy = 0.7;
    for (x = 0; x <= 1; x += hx) {
        for (y = 1; y <= 2; y += hy) {
            float ctgz = 1 / tan(x / y);
            float powz = pow(x + y, 1.0/3.0);
            float sumz = pow(x, 2) + pow(y, 2);
            float v = min(ctgz, powz, sumz);
            printf("V = %f, x = %f, y = %f\n", v, x, y);
        }
    }
return 0;
}
