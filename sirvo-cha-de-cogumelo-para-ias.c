#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <termios.h>
#include <sys/ioctl.h>
#include <setjmp.h>
#include <math.h>
#define D double
#define P printf
#define R rand()
#define E "\33["
#define T struct termios
#define W struct winsize
#define A z.ws_row
#define B z.ws_col
#define S(x) tcsetattr(0,TCSANOW,&x)
#define J ioctl(1,TIOCGWINSZ,&z)
#define M(n) malloc(n*sizeof*a)
#define C(r,q,g) P(E"%d;%dH%s%c",(r)%h+1,x+1,q,g)
#define Q(k,c) ((O[(k)*22+(c)/6]-40-(O[(k)*22+(c)/6]>63)-(O[(k)*22+(c)/6]>92))>>(c)%6&1)
#define SE(c,x,y) (((F[]){y,x})[!!(c)])()
                                      typedef void(*F)(
                                  void);typedef struct Fx{D(*f
                               )(struct Fx,D);}Fx;D*a,*p,*d,f,L,X
                            ,y,Z,g,j,l,m,q,I,H,u;T o,n;W z;jmp_buf
                          JB;Fx yc;F cel;int h,w,x,r,Y,k,i,t,s,e,b,v,
                        x2,y2,i2,u2,b2,V[12][128],N[12];char c,*O="(i7b"
                      "i+.(Y((.(U)(G((+((iiiiiL)+AY(.4Y(+4YJ)E(hiPiiJ+((/"
                    "(Y)I+(hiPii)IH(OBYA4hiPiiZA4AO)b/(6(//bI+/"
                   "Yi(f7I+/EIL+Y)(.(I)(A(hiPii)A((.(I)((.(Y+"
                  "(O)YY(.AY(4.(`ii+Yi(.AY(4.(O)IZ(4AI)f7((("
                ".(I)(D(Y.IV)DD``Oii)fYLBO5fY+.fI)7fYOB.7f("
               "(I/(4)(+(b((/(b(*.(7((hiPii)((hiPii)((hiPii"
                           ")";void nada(void){}void foge(
                             void){exit(1);}void cb(void);                    void
                              ca(void){V[k][N[k]]=i;N[k]+=Q(k,               i);++i;
                               cb();}void cb(void){SE(i<128,ca,            nada);}
                               void cd(void);void cc(void){i=0;cb();++k;cd();}void cd(
                               void){SE(k<12,cc,nada);}void xb(void);void xa(void){cel(
         );++                 x2;xb();}void xb(void){SE(x2<w,xa,nada);}void yb(void);
        void                 ya(void){x2=0;xb();++y2;yb();}void yb(void){SE(y2<h,ya,nada
       );}void             varre(F z2){cel=z2;y2=0;yb();}void zc(void){d[y2*w+x2]=1e9;}
       void ac2(void){P(E"%d;%dH ",y2+1,x2+1);d[i2]=1e9;}void ac(void){i2=y2*w+       x2;
      SE(d[i2]<1e9,ac2,nada);}void pc2(           void){u2=(13.5-d[i2])/3.2;P           (E
      "%d;%dH"E"%sm%c",y2+1,x2+1,((                 char*[]){"2;32","2;32",
     "2;32","2;32","1;32","1;32","1"                 ";37","1;37","1;37"})[
     u2],".:-=+*#%@"[u2]);}void pc(                   void){i2=y2*w+x2;SE(d[             i2
    ]<1e9,pc2,nada);}D nb(Fx w2,D                     s2){(void)w2;return s2;           }D
    na(Fx,D);D na(Fx w2,D s2){(void                   )w2;yc=((Fx[]){{nb},{na}}       )[v-->
   0];return yc.f(yc,.5*(s2+p[2]/s2)                 );}void mb(void);void ma(void){p=a+4*x;*
   p=R%h;p[1]=1+R%3;p[2]=p[1]*p[1];p[               3]=26;++x;mb();}void mb(void){SE(x<w,ma,
   nada);}void wb(void);void wa(void){*           p-=h;wb();}void wb(void){SE(*p>=h,wa,nada);
  }void tb(void);void ta(void){p[3]++;C(r+h*10-10,"",32);r=(r+1)%h;tb();}void tb(void){SE(r!=Y
  ,ta,nada);}void kb(void);void ka(void){i=p[3]-k;b=(i>=0)&(i<16);u2=(i&15)*b;c=((int[]){33+R%
  94,"!0:'084U10U7'424"[u2]^117})[b];C(Y+h*10-k,((char*[]){E"1;37m",E"32m",""})[(k>0)+(k>1)],c
  );++k;kb();}void kb(void){SE(k<11,ka,nada);}void ra(void){k=1+R%3;p[2]=k*k;}void rb(void){SE
 ((R%50<1)&(p[3]>25),ra,nada);}void qa(void){p[3]=0;p[2]=1;}void qb(void){SE((R%5000<1)&(p[3]>
 25),qa,nada);}void pb(void);void pa(void){p=a+4*x;r=*p;v=0;yc=(Fx){na};p[1]=yc.f(yc,p[1]);*p+=
 p[1];wb();Y=*p;tb();k=0;kb();rb();qb();++x;pb();}void pb(void){SE(x<w,pa,nada);}void eb(void);
 void ea(void){q=X+e%4*.25;I=y+e/4%4*.5;Z=(e/16-1)*1.2;H=q*g+Z*j;Z=Z*g-q*j;q=I*l-Z*m;Z=I*m+Z*l;
 u=L*40/(40+Z);x2=w/2+H*u;y2=h/2+q*u/2;b=(x2>=0)&(x2<w)&(y2>=0)&(y2<h);i2=(y2*w+x2)*b+w*h*!b;d[
 i2]=  fmin( d[i2] ,Z*b+ 1e9*! b);++ e;eb( );}   void  eb(   void) {SE(e <48,  ea,   nada) ;}
 void ib(   void) ;void ia(   void) {k=V[ s][i] ;r=V[ b2][i *N[b2 ]/N[s ]];X= (k%16 -7.5) *(1-f
                                      )+(r%16-7.5)*f;y=(k/
                             16*2-7)*(1-f)+(r/16*2-7)*f;e=0;eb();++
                             i;ib();}void ib(void){SE(i<N[s],ia,
                                      nada);}void geo(void
                                      ){q=sin(t*.03)*.6;g=
                                      cos(q);j=sin(q);q=
                                      sin(t*.021)*.35;l=
                                      cos(q);m=sin(q);L=(w
                                      /2+(h-w/2)*(h<w/2))*
    .075;s=t                          /100%12;b2=(s+1)%12;
    e=t%100;                          f=((D[]){0,(e-60)/
                                     40.})[e>=60];f=f*f*(3-
                                     2*f);}void realoca(
                                     void){h=A;w=B;free(a);                       free(d);
                                     a=M(w*4);d=malloc((w*h                       +1)*
                                    sizeof*d);SE(!a|!d,foge,
                                    nada);x=0;mb();varre(zc)
                                    ;d[w*h]=1e9;P(E"2J");}
                                   void rez(void){SE((h-A)|(w
                                   -B),realoca,nada);}void
                                  encerra(void){P(E"0m"E"?25h"
      E"?1049l")                  ;fflush(stdout);S(o);free(a)
      ;free(d);                  exit(0);}void quadro(void){J;A
                                 +=!A*24;B+=!B*80;rez();varre(
                                ac);x=0;pb();geo();i=0;ib();
                               varre(pc);fflush(stdout);usleep(                 50000);++t
                              ;longjmp(JB,1);}void ciclo(void){SE(              (read(0,&c
                             ,1)<1)|(((c|32)-'q'!=0)&(c!=3)),quadro
                            ,encerra);}int main(void){SE(tcgetattr(0
                           ,&o),foge,nada);;;;;;;;;n=o;;;;;;;;;n.
                          c_lflag&=~(ECHO|ICANON|ISIG);;;;;;;;;n.c_cc[
                         VMIN]=n.c_cc[VTIME]=0;;;;;;;;;S(n);;;;;;;;;
                       srand(getpid());;;;;;;;;P(E"?1049h"E"?25l");;;;;;;
   ;;cd();;;;;;       ;;setjmp(JB);;;;;;;;ciclo();;;;;;;;return 0;;;;;;;;}
