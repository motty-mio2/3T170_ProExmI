#include <stdio.h>

int main(){
    int inyear, inmonth, inday = 1;
    int year, month;
    int h_year, l_year;
    int temp;
    int dow;
    do {
        printf("年を入力してください >>>"); scanf("%d",&inyear);
    } while(inyear <= 0);
    do {
        printf("月を入力してください >>>"); scanf("%d",&inmonth);
    } while (inyear < 1 || 12 < inmonth);

    if (inmonth <= 2) {
        month = inmonth + 12;
        year = inyear - 1;
    } else {
        month = inmonth;
        year = inyear;
    }

    l_year = year % 100;
    h_year = (year - l_year) / 100;

    temp = l_year + (h_year / 4) + (l_year / 4) - 2 * h_year + (13 * (month + 1) / 5) + inday;
    dow = ((temp - 1) % 7 + 7) % 7;

    int uru = 0;
    int lastday;
    int week = 0;

    if (inyear % 4 == 0 && (inyear % 100 != 0 || inyear % 400 == 0)) {
        uru = 1;
    }

    switch (inmonth){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: lastday = 31; break;
        case 4:
        case 6:
        case 9:
        case 11: lastday = 30; break;
        default : lastday = 28 + uru;
    }

    printf("      %4d年 %2d月\n", inyear, inmonth);
    printf(" 日 月 火 水 木 金 土\n");
    for(int day = 1 - dow; day <= lastday; day++) {
        printf(" ");
        if (day > 0) {
            printf("%2d",day);
        } else {
            printf("  ");
        }
        week++;
        if (week == 7) {
            week = 0;
            printf("\n");
        }
    }

    printf("\n");

    return 0;
}