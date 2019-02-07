#include <stdio.h>

int main() {
    int i, j, k, l, m, n, o, p, q, r, s;
    long number1, number2;
    unsigned long ans;
    int counter = 0;
    
    int x, y;
    long holder;
    int matcher, templist[10];

    for (i = 1; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            if(j != i) {
                for (k = 0; k < 10; k++) {
                    if(k != i && k != j) {
                        for (l = 0; l < 10; l++) {
                            if(l != i && l != j && l != k) {
                                for (m = 0; m < 10; m++) {
                                    if(m != i && m != j && m != k && m != l) {
                                        for (o = 1; o < 10; o++) {
                                            if(o != i && o != j && o != k && o != l && o != m) {
                                                for (p = 0; p < 10; p++) {
                                                    if(p != i && p != j && p != k && p != l && p != m && p != n && p != o) {
                                                        for (q = 0; q < 10; q++) {
                                                            if(q != i && q != j && q != k && q != l && q != m && q != n && q != o && q != p) {
                                                                for (r = 0; r < 10; r++) {
                                                                    if(r != i && r != j && r != k && r != l && r != m && r != n && r != o && r != p && r != q) {
                                                                        for (s = 0; s < 10; s++) {
                                                                            if(s != i && s != j && s != k && s != l && s != m && s != n && s != o && s != p && s != q && s != r) {
                                                                                number1 = i * 10000 + j * 1000 + k * 100 + l * 10 + m;
                                                                                number2 = o * 10000 + p * 1000 + q * 100 + r * 10 + s;
                                                                                ans = number1 * number2;
                                                                                if (ans >= 1000000000){
       

        holder = ans_f;
        matcher = 0;
        for (x = 0; x < 10; x++) {
            if (matcher == 1) {
                break;
            }
            templist[x] = holder % 10;
            y = 0;
            while(y < x) {
                if(templist[y] == templist[x]) {
                    matcher = 1;
                }
                y++;
            }
            holder = (holder - templist[x]) / 10;
        }
        if (matcher == 0) {
            counter++;
            printf("%4d::%ld,%ld,%ld\n", counter, number1, number2, ans);
        }

                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
	
    return 0;
}