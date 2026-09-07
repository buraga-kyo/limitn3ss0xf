#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <termios.h>
#include <sys/ioctl.h>
#include <math.h>
#define D double
#define P printf
#define R rand()
#define E "\33["
#define T struct termios
#define W struct winsize
#define A z.ws_row
#define B z.ws_col
#define G tcgetattr(0,&o)
#define S(x) tcsetattr(0,TCSANOW,&x)
#define K n.c_lflag&=~(ECHO|ICANON|ISIG),n.c_cc[VMIN]=n.c_cc[VTIME]=0
#define J ioctl(1,TIOCGWINSZ,&z)
#define M(n) malloc(n*sizeof*a)
#define N3 for(i=0;i<w*h;i++)
#define Y3 p[3]
#define F fflush(stdout)
#define U usleep(50000)
#define C(r,q,g) P(E"%d;%dH%s%c",(r)%h+1,x+1,q,g)
#define Q(k,c) ((O[(k)*22+(c)/6]-40-(O[(k)*22+(c)/6]>63)-(O[(k)*22+(c)/6]>92))>>(c)%6&1)
                             D*a,*p,*d,f,L,X,y,
                         Z,g,j,l,m,q,I,H,u;T o,n;W
                      z;int h,w,x,r,Y,k,i,t,s,e,b,V[12
                    ][128],N[12];char c,*O="(i7bi+.(Y(("
                  ".(U)(G((+((iiiiiL)+AY(.4Y(+4YJ)E(hiPii"
                "J+((/(Y)I+(hiPii)IH(OBYA4hiPiiZA4AO)b/(6(/"
              "/bI+/Yi(f7I+/EIL+Y)(.(I)(A(hiPii)A((."
             "(I)((.(Y+(O)YY(.AY(4.(`ii+Yi(.AY(4.("
                      "O)IZ(4AI)f7(((.(I)(D(Y.IV)"
                        "DD``Oii)fYLBO5fY+.fI)7f"
                         "YOB.7f((I/(4)(+(b((/(b("             "*."
                          "(7((hiPii)((hiPii)((hiP"           "ii)";
                          int main(void){if(G){exit(1       );;;;}n=
                          o;;;;K;;;;S(n);;;;srand(getpid());;;;P(E"?"
                         "1049h"E"?25l");;;for(k=0;k<12;k++){for(i=0;i
     <128               ;i++){if(Q(k,i)){V[k][N[k]++]=i;;;}}}for(;read(
     0,&c,1           )<1||((c|       32)-'q'&&c-3);t++){J;;;A+=!A*24;;
    ;B+=!B*80;;;if((h-A)|(w-B           )){h=A;;;w=B;;;free(a);;;free(d)
    ;;;a=M(w*4);;;d=M(w*h);;             ;if(!a||!d){break;;;}for(x=0;x<
   w;x++){p=a+4*x;;;*p=R%h;               ;;p[1]=1+R%3;;;p[2]=p[1]*p[1];;
   ;Y3=26;;;}N3{d[i]=1e9;;;}             P(E"2J");;;}N3{if(d[i]<1e9){P(E
  "%d;%dH ",i/w+1,i%w+1);;;d[           i]=1e9;;;}}for(x=0;x<w;x++){p=a+4*
  x;;;r=*p;;;p[1]=.5*(p[1]+p[2]       /p[1]);;;*p+=p[1];;;for(;*p>=h;){*p
  -=h;;;}Y=*p;;;for(;r!=Y;r=(r+1)%h){Y3++;;;C(r+h*10-10,"",32);;;}for(k=0;
  k<11;k++){i=Y3-k;;;c=i>=0&&i<16?"!0:'084U10U7'424"[i]^117:33+R%94;;;C(Y+
 h*10-k,k<2?k?E"32m":E"1;37m":"",c);;;}if(R%50<1&&Y3>25){k=1+R%3;;;p[2]=k*k
 ;;;}if(R%5000<1&&Y3>25){Y3=0;;;p[2]=1;;;}}q=sin(t*.03)*.6;;;g=cos(q);;;j=
 sin(q);;;q=sin(t*.021)*.35;;;l=cos(q);;;m=sin(q);;;L=(h<w/2?h:w/2)*.075;;;
 s=t/ 100% 12;; ;b=( s+1) %12; ;;e= t%   100; ;;f= e<60 ?0:( e-60 )/   40.;
 ;;f =f*f *(3- 2*f) ;;;  for( i=0; i<N[ s];i ++){ k=V[ s][i ];;; r=V[ b][i
                              *N[b]/N[s]];;;X=
                       (k%16-7.5)*(1-f)+(r%16-7.5)*f;
                       ;;y=(k/16*2-7)*(1-f)+(r/16*2-7
                              )*f;;;for(e=0;e<
                              48;e++){q=X+e%4*
                              .25;;;I=y+e/4%4*
                              .5;;;Z=(e/16-1)*
                             1.2;;;H=q*g+Z*j;;;
                             Z=Z*g-q*j;;;q=I*l-
                             Z*m;;;Z=I*m+Z*l;;;
                            u=L*40/(40+Z);;;x=w/
                            2+H*u;;;Y=h/2+q*u/2;
                           ;;if(x>=0&&x<w&&Y>=0&&
                           Y<h&&Z<d[Y*w+x]){d[Y*w
                          +x]=Z;;;}}}N3{if(d[i]<
                         1e9){P(E"%d;%dH"E"%sm%c",i
                        /w+1,i%w+1,d[i]<-3?"1;37":d[
                       i]<3?"1;32":"2;32",".:-=+*#%@"
                     [(int)((13.5-d[i])/3.2)]);;;}}F;;;
                    U;;;}P(E"0m"E"?25h"E"?1049l");;;F;;;
                  S(o);;;free(a);;;free(d);;;}
