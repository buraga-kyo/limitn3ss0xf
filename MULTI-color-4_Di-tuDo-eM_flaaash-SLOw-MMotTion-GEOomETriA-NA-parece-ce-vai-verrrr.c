#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <termios.h>
#include <sys/ioctl.h>
#include <setjmp.h>
#include <signal.h>
#include <errno.h>
#include <math.h>
#include <time.h>
#include <fcntl.h>
#include <poll.h>
#include <string.h>
#define D double
#define N 4096
#define E "\033["
#define B(c,x,y) (((void(*[])(void)){y,x})[!!(c)])()
#define G g,g,g,g
#define R(i) r[(i)*3]
#define P(i) r[(i)*3+1]
#define L(i) r[(i)*3+2]



                                            typedef  struct{D x,y,z                                                                                          ;}V;typedef struct {V p
                                       , n ; } M ; typedef  struct{D z,l;                                                                              uint32_t f,b;int c;}C;typedef void
                                  (*F) (int) ;typedef void(* J)( F, int,int );                                                                    typedef void(*A)( void);V v (D x,D  y,D z) {
                               return(V){x,y ,z};} V ad(V a,V b){return v(a.x+b.x,                                                            a.y+b. y,a .z+b.z);}V mu(V a,D b){return v(a.x*b,a.
                            y*b,a.z*b);}V cr(V a ,V b){return v(a.y*b.z-a .z*b.y,a.z*                                                      b.x -a.x*b.z,a.x*b.y-a.y*b.x);} D dt(V a,V b){return a.x*
                          b.x+a.y*b.y+a.z *b.z;}V un(V a){ return mu(a,1/sqrt(fmax(dt(a,                                                a),1e-12)));}V mx(V a ,V b,D t){return ad(mu(a,1-t) ,mu(b,t));
                        }V qv,lo={.1,.2 ,.3} ;D qw;V ro(V a){return ad(a,mu(cr(qv,ad(cr(qv,                                          a),mu(a,qw))),2));}void w(F,int,int);void z(F f,int l ,int h){(void
                      )f;(void)l;(void)h; }void a(F f,int l,int h){(void )h;f(l);}void b(F  f                                      ,int l,int h){ int m=l+(h-l)/2;w(f,l,m);w(f,m,h);}void w (F f,int l,int
                    h){( (J[] ){z, a,b})[(h>l)+(h- l>1) ](f, l,h);}void nil(void){}uint64_t aa=                                  UINT64_C(0x9e3779b97f4a7c15);D ru(void){aa^=aa>>12;aa^= aa<< 25; aa^=aa>>27
                   ;return (D )((aa* UINT64_C( 2685821657736338717) )>>11)* 0x1p-53; }uint32_t hs(                            uint32_t x){x^=x>>16; x*=0x7feb352dU;x^=x >>15;x*=0x846ca68bU;return x^(x >>16)
                 ;}M*ab;C*ac,*ae,*cp;D*r;char *af;size_t ag,ah,ai;int aj,ak,al,am,an,ao,ap,aq, ar,as                        ,at;int sx,sy,ci,dirty= 1,ax =-2,ay=-2;uint32_t fg,bg;D au,av, aw,az ;V ba;volatile
                sig_atomic_t bb,bc;struct termios bd,be;jmp_buf bf ;A bh;int bi[12][128] ,bj[12];const                    char  bk [ ] = "(i7bi+.(Y(" "(.(U)(G((+" "((iiiiiL)+" "AY(.4Y(+4Y" "J)E(hiPiiJ" "+((/"
              "(Y)I+(hiPi" "i)IH(OBYA4""hiPiiZA4AO"")b/(6(//bI""+/""Yi(f7I+/EI""L+Y)(.(I)(" "A(hiPii)A("                "(.(I)((.(Y""+""(O)YY(.AY(""4.(`ii+Yi("".AY(4.(O)I""Z(4AI)f7((""("".(I)(D(Y.I""V)DD``Oii)"
             "fYLBO5fY+.""fI)7fYOB.7""f(""(I/(4)(+(b" "((/(b(*.(7""((hiPii)((""hiPii)((hi" "Pii)";void bl              (int i){int s=i/128,k=i%128,c=(unsigned char )bk[s*22+k/ 6];bi[s][bj [s]]=k;bj[ s]+=((c-40-(
            c>63)-(c>92))>>(k%6) )&1;} void g(int s,int i){int k=bi[s][i*bj[s]/N ];D x= ru()-.5,y=ru()-.5,z          =ru ()-.5;ab[s*N+i]=(M){v((k%16-7.5+x)*.25,(k/16-3.5 +y)*.45,z*.4), un(v(x*.3,y*.3 ,-1))};}V bm
           (D t){ return v((2 +cos(3* t))*cos(2*t)*.6,(2+cos(3*t))*sin(2*t)*.6,sin(3*t)*.6);}void k(int s,int      i){ D a= 6.283185307179586*( i+.5)/N,b=6.283185307179586*fmod(i*.618033988749895,1);V p=bm(a),t=un
          (ad (bm(a+.001),mu(p,-1))),x=un(cr(t,v(0,0,1))),y=cr(t,x),n=ad(mu(x,cos(b)),mu (y,sin(b )));ab[ s*N+i  ]=( M){ad (p,mu (n,.18 )),n };}void  m(int s ,int i) {D a= 6.283185307179586*(i +.5)/ N,b = (fmod( i*
          .618033988749895,1) -.5)*1.3,r=1.4+b*cos(a/2);V p =v(r*cos(a),r *sin(a)*.82+b* sin(a/2)*.57,r* sin(a)*.57-b*sin (a/2)*.82),u= v(-r*sin(a)-b*.5*sin(a/2)* cos(a),r*cos(a),b*.5*cos(a/2 )),n=un(cr(u,v(cos(a/2
         ) *cos(a),cos(a/2)*sin(a),sin (a/2))));ab[s*N+i]=(M){p,n};} void d(int s,int i){D y=4*(i+.5 )/N-2,a=y *2.8+(i%2)*3.141592653589793,b=6.283185307179586*fmod(i* .618033988749895,1),j=!(i%5),h=(1- j)+j*(2*fmod
        (i*.414213562373095, 1)-1);V n=v(cos(b)*cos(a),sin( b),cos(b)*sin(a));ab[s*N+i]= (M){ad(v(h*cos(a),y,h*sin(a) ),mu(n,.12*(1-j ))),n};}V dx( V a){return v(10*(a. y-a.x),a.x*(28-a.z)-a.y, a.x*a.y-8*a.z/3);}void
        bn(int i){(void)i;V a=dx(lo),b=dx(ad(lo,mu            (a ,.003))),c=dx(ad(lo,mu(b,.003)) ),d=dx(ad(lo,mu(c,.006) ));lo=ad(lo,mu(ad(ad(a ,mu(b,2)),ad(mu(c,            2) ,d)),.001));}void l(int s,int i){bn(i);
       V p=v(lo.x*.09,(lo.z- 25) *-.077,lo.y*                      .057);ab[s*N+i]=(M){p,un(v(p. x,p. y,-1 ))}; }void t(int s,int i){D a=6.283185307179586*(i                      + .5 ) / N,b=6.283185307179586*fmod(i*
       .618033988749895,1),r=1.35+.48*cos (                            b);V n=v( cos(b)*cos(a),cos(b)*sin(a)*.8- sin(b)*.6,cos(b)*sin(a)*.6+sin(b)*.8);ab                            [s*N+i]= (M){v(r*cos(a),r*sin(a)*.8-
      .48*sin(b)*.6,r*sin(a) *.6+.48*sin(                                 b)*.8), n};} void s(int  j,int i){D  y=1- 2*(i +.5)/N,r =sqrt(1 -y*y ),a= i*                                 2.399963229728653 ;V n=v(r*cos(a),y
      ,r*sin(a));ab[j*N+i]=(M){mu(n,1.8                                     ),n};}void bo(int i){(( void(*[ ])(int ,int)){G,G,G,k,m,d,l,t,s})[i/N](i                                     /N,i%N); }uint32_t bp(V a){return
     (uint32_t)fmin(255,fmax(0,a.x))<<                                         16|(uint32_t)fmin(255,fmax(0,a .y))<<8| (uint32_t)fmin(255, fmax(0                                         ,a.z));}void bq(int fd,const char
     * s){ssize_t n=write(fd,s,strlen                                            (s ));(void)n ;}void br(void){tcsetattr(0, TCSANOW,&bd);bq(1,E                                            "0m"E"?25h"E"?1049l" );fcntl (1,
     F_SETFL ,at);an=0;}void bs(void                                               ){B(an ,br,nil);}void bt(void) {free(ab);free(ac);free(ae)                                               ;free(r);free(af);}void bu(void
     ){bs();bt ();exit(0);}void bv (                                                 void ){bs( ) ; bt() ; bq (2, "ouroboros:" " memoria, "                                                 "terminal o" "u argument""o\n")
     ; exit(1);}void bw(void) { B (                                                    tcsetattr(0 ,TCSANOW,&be)<0,bv, nil);an=1;B(fcntl(                                                    1 ,F_SETFL,at|O_NONBLOCK)<0,bv
     , nil);bq(1,E"?1049h"E"?25l" E                                                     "2J");dirty=1; }void bx(void){ bs();bc=0 ;raise(                                                     SIGSTOP);B(am,bw,nil);}void by
     ( int s){bb|=(s!=SIGTSTP);bc|=                                                       ( s == SIGTSTP ) ; } void  bz(int i){ struct                                                       sigaction a= {0};a.sa_handler=
     by;sigfillset( &a.sa_mask); B(                                                     sigaction(((int[]){SIGINT,SIGTERM,SIGHUP,SIGTSTP                                                     ,SIGPIPE} )[i],&a,0)<0,bv,nil)
     ;}void  ca(int i){R(i)=ru()*ak                                                    ;P(i )=.35+ru()*.65;L(i)=6+ru()*ak *.65;}void  cb(                                                    void ){free(ac);free(ae);free(
     r);free(af);al=aj*ak;ai=(size_t                                                 )al*80 +256;ac=calloc( (size_t)al,sizeof*ac);ae=calloc                                                 ((size_t)al,sizeof*ae);r=calloc
     ( (size_t)aj*3,sizeof*r) ; af =                                               malloc(ai);B (!ac||!ae||!r||!af,bv,nil);w(ca ,0,aj);dirty=                                               1;}void cc(void){struct winsize
     z={0};(void )ioctl(1,TIOCGWINSZ,                                            &z);int x=( int)fmin(z.ws_col+(!z.ws_col)*100,512),y=(int)fmin                                            ( z.ws_row+(!z.ws_row)* 36,256),
     changed=(x!=aj)|(y!=ak);aj =x;ak=                                         y;B(changed,cb,nil);}void cd(int i){ae[i]=(C){1e9,0,0,0,' '};}void                                         ce(int j){int y =(( int)R(ci))-j;
      int valid=(y>=0)& (y<ak);int i=(y                                     * aj+ci)*valid;D tail=1-j/L(ci),x=(ci-aj*.5)/fmax(aj *.34,1),v =(y-ak*.5                                     )/ fmax(ak*.5,1),power=(.04 +.36*
      tail*tail)*(1 -.85*exp(-2*(x*x+v*v)                                 ) );uint32_t  h=hs ((uint32_t)(ci*917+y*131)^(uint32_t)(aq/3));C p={1e9,0,bp                                 ( mu ( ba,power ) ) ,0,"0123456789"
       "ABCDEFGHIJ""KLMNOPQRST""UVWXYZ:;<>"                            "/[]"[h%42]};ae[i]= ((C[]){ae[i],p})[valid];}void cf(int i){ci=i ;R(i)+=P(i)*(! ao                            );R(i)=fmod (R(i),ak+L(i)) ;w(ce,0,(
       int)L (i));}void cg(void){cp=&ae[sy*aj                      +sx] ;int ok= au<cp-> z;C a ={au, av,bp( mx(mu( ba,.35+ .6*av) ,v(255,255,255),av*.28)),0,                      ".:-=+*#%@" [(int)fmin(8,fmax(0,av*8))
        ]};*cp=(( C[]){*cp,a})[ok];}void ch(int i)            {int s=(aq /100)%18,n=(s+ 1)%18;M a=ab[s*N+i],b=ab[n*N+i];V p=ro(mx(a.p, b.p,aw)),normal=un (ro(mx(a            .n,b.n,aw)));au=6.5+p.z;D f=fmin(aj*.25,ak
        *.5) *2.1/fmax(au,.1); sx=(int)(aj*.5+ p.x*f*2);sy=(int)(ak*.5+p.y*f);av=.35+.65*fabs(dt(normal,un(v(-.4,-.5,- 1))));B((sx >=0)&(sy>=0)& (sx<aj)&(sy<ak)&(au>.1),cg,nil);}void cj(int i){D a=i*6.283185307179586
         /384+aq*.002;V p=v(cos(a)*2.4,sin(a )*2.1,cos(a)*.5) ;p=ro(p);D z= 6.5+p.z,f=fmin(aj *.25,ak*.5)*2.1/z;int x=(int)(aj*.5+p.x*f*2),y= (int)(ak*.5+p.y *f),ok=(x>=0) &(x<aj)&(y>=0 )&(y<ak),j=( y*aj+x)*ok;C c={
          1e9,0 ,bp(mu(ba,.15)),0 ,".+"[!(i%32)]};ae[j]=((C[]){ae[j],c})[ok];}void ck(int i){int x=i%aj,y=i/aj;D a =ae[i].l;int l=( x>0),r=(x+1< aj),u=(y>0),d =(y+1<ak);a+=ae [i-l].l*l+ae[ i+r].l*r+ae[i -u*aj].l*u+
          ae[i+d*aj].l*d;ae [i].b=bp(ad(v(2,4,7), mu(ba,a *.028)));}void cl(void){ag +=(size_t)sprintf (af+ag,E  "%d;%dH",sy+1,sx+ 1);}void cm(void){uint32_t a=cp->f,b=cp->b;ag+=(size_t)sprintf(af+ag ,E"38;2;%u;%u"
           ";%um"E"48;2;%u;%u"";%um",a>>16,(a>>8)&255,a&255,b >>16,(b>>8)&255,b&255);fg=a;bg=b;}void cn (void      ){B((sx!=ax+1)|(sy!=ay),cl,nil);B((fg!= cp->f)|(bg!=cp->b),cm,nil);af[ag++]=(char)cp-> c;ax=sx ;ay
            =sy;}void co(int  i){sx= i%aj;sy=i/aj;cp=&ae[i];C a=ac[i];B(dirty |(a.c !=cp->c)|(a.f!=cp->f)|(          a. b!=cp->b), cn,nil);}void  cq(void){ag+=(size_t)sprintf(af+ag,E"0m"E"2J"E"H"); }void cs(void)
             ;void ct(void);void cu(void){struct timespec d={0,50000000};(void )nanosleep(&d,0);}void  cv              (void){++as;aq+=!ao;B((!am)&(as>=ar),bu,nil);B(am,cu,nil);bh=cs;}void cw(void){struct pollfd
              p={1,POLLOUT,0};(void)poll(&p,1,50);}void ct(void){errno=0;ssize_t n=write(1,af+ah,(size_t                )fmin(8192,ag-ah));B((n<0 )&(errno!=EINTR)&(errno!=EAGAIN),bv,nil);B((n<0)&(errno ==EAGAIN
                ),cw,nil);ah+=(size_t)n*(n>0);bh=((A[]){ct,cv})[ ah>=ag] ;}void cx (int c) {int x=c|32                    ;bb|=(x=='q')|(c==27)|(c ==3); bc|=(c==26);ao^=(c== ' ');ap =(ap+(x=='p'))%4;aq+=(x ==
                 'n')*100;aq*= x!='r' ;}void  cy(void){unsigned char c=0;ssize_t n= read(0 ,&c,1);cx                        (c*(n> 0));}void cs(void){B(am,cy,nil);B(bb,bu ,nil); B(bc,bx,nil);cc();D f=(aq%100
                   -60)/40.;aw=fmax(0,f) ;aw*=aw *(3-2*aw);az= sin(aq* .009)*.9;qv=mu(un(v(.35, 1,                            .2 )),sin (az/2 ));qw =cos(az/2);ba=((V[]){v(50,255,145),v(184,115,255), v(255,
                    170,50 ),v(65,220,255)})[ap];w(cd,0,al);w(cf,0,aj);w(cj,0,384 );w( ch,0, N)                                  ; w(ck,0,al);ag =ah=0;ax= ay=-2;fg=bg=UINT32_MAX ;B(dirty,cq,nil);w(co,0,al
                      -1 );ag +=(size_t )sprintf( af+ag,E"0m");B(ag>=ai,bv,nil);C*s=ac;ac=ae;                                      ae=s;dirty=0;bh=ct;}void cz(void){B( !isatty(0) ||!isatty(1)||tcgetattr
                        ( 0,& bd)< 0,bv ,nil) ;at=fcntl(1,F_GETFL);B(at<0,bv,nil);be=bd;be.                                          c_lflag&= (tcflag_t) ~(ICANON |ECHO| IEXTEN);be.c_iflag&=(tcflag_t)
                          ~( IXON|ICRNL);be.c_cc[ VMIN] =be.c_cc[VTIME]=0 ;bw();}void da                                                (void){B(bb, bu,nil);B(bc,bx,nil);bh();longjmp (bf,1);}int  db
                            (const char*s){char*e;errno=0;long n=strtol(s ,& e, 10) ;                                                      B(errno||*e||e ==s ||n <0 ||n>1000000,bv,nil);return(int)
                               n;}int  main( int n,char**a){am= n== 1;const char*p                                                            []={"0",a[ (n> 1)] },* q[]={"0",a[(n>2)*2]};ar=db(p
                                  [n>1]);aq=db( q[n>2]);B((!am )&(ar<1),bv,nil                                                                    );w(bz,0,5) ;w (bl ,0 ,1536);ab=calloc(18*N,
                                       sizeof*ab);B(! ab,bv ,nil) ;w(bn,0                                                                              ,2000);w(bo, 0,18*N );B(am,cz, nil
                                            ); bh= cs;(void) setjmp                                                                                          (bf);da ();return 0 ; }

