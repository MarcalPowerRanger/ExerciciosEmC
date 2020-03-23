#include <stdio.h>
#include <math.h>

int main(){
    double Xum,Xdois,Yum,Ydois;
    scanf("%lf %lf %lf %lf", &Xum, &Yum, &Xdois, &Ydois);
    Xum = sqrt(pow(Xdois-Xum,2)+pow(Ydois-Yum,2));
    printf("%.4lf\n", Xum);
    return 0;
}