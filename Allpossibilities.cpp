#include <iostream>
using namespace std;
int vz,n,mask,maxmask,vcur,vmax;
int v[31];
main(){
 cin>>vz>>n;
 for (int i=1;i<=n;i++) cin>>v[i];
 
 maxmask=1; maxmask=maxmask<<n;
 
 cout<<maxmask<<endl;
 
 
 for (mask=0; mask<maxmask; mask++){
  
  vcur=0;
  int e=1;
  for (int i=n;i>=1;i--){
   if ((e&mask)>0)	vcur=vcur+v[i];
   e=e<<1;   
  }
  
  	
  if (vcur<=vz && vcur>vmax) vmax=vcur;
 }

 cout<<vmax<<endl;

}

