#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};
double min(double x,double y)
{
    if(x>=y) return y;
    else return x;
}
double max(double x,double y)
{
    if(x>=y) return x;
    else return y;
}
double overlap(Rect *A,Rect *B){
    double dx,dy;
    dy=min(A->y,B->y)-max((A->y-A->h),(B->y-B->h));
    dx=min((A->x+A->w),(B->x+B->w))-max(A->x,B->x);
    
    if(dx<=0 || dy<=0){
        return 0;
    }else return dx*dy;
}