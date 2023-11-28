#include <iostream>

typedef long long ll ; 

using namespace std ;


//viet chtrinh nhap mang n ptu
void setArray(ll a[],ll &n){
    cout<<"Enter the number of elements of array a:";
    cin>>n;
    for(ll i = 0 ; i < n ; i ++){
        cout<<"Input"<<" "<<"a"<<"["<<i<<"]"<<" "<<"="<<" ";
        cin>>a[i];
    }
    cout<<endl;
}
ll isPrime(ll n ){
    for(ll i = 2  ; i < n ; i ++){
        if(n%i==0){
            return 0;
        }
    }
    return n>1;
}

//Xuat ra mang n phan tu 
void printArray(ll a[], ll n ){
    for(ll i = 0 ; i < n ; i ++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
//Tinh tong ptu cua mang 
void sumArray(ll a[],ll n ){
    ll sum = 0 ;
    for(ll i = 0 ; i < n ; i ++ ){
        sum += a[i];
    }
    cout<<"Total element of array:"<<sum;
    cout<<endl;
}
//Tim min cua mang
void find_min_Array(ll a[],ll n ){
    ll min_value=a[0];
    for(ll i = 0 ; i < n ; i ++ ){
        if(min_value > a[i]) {
           min_value = a[i];
        }
    }
    cout<<"The smallest value of the array:"<<min_value;
    cout<<endl;
}
//Dem xem mang co bao nhieu so ngto
//Viet ham ktra so ngto
ll  checkPrime(ll n){
    for(ll i = 2 ; i * i <= n ; i ++ ){
        if(n%i==0){
            return 0;
        }
    }
    return n>1;
}
//Dem so ngto trong mang
void countNumberofPrime(ll a[],ll n ){
    ll count = 0 ; 
    for(ll i = 0 ; i < n ; i ++ ){
        if(checkPrime(a[i]) ){
            ++count;
        }
    }
  
    cout<<"Number of prime numbers in the array:"<<count;
    cout<<endl;
}
//Ktra mang co tang dan hay khong
ll isAscendingOrder(ll a[],ll n){
    for(ll i = 0 ; i < n ; i ++ ){
        if(a[i]> a[i+1]){
            cout<<"Array is not ascending";
            cout<<endl;
            return 0;
        }
    }
    cout<<"Ascending array";
    cout<<endl;
    return 1;
}
//Dem so lan xuat hien gia tri x trong mang 
ll countOccurrences(ll a[],ll n , ll y ){
    ll count = 0 ; 
    cout<<"Input value y :";
    cin>>y;
    for(ll i = 0 ; i < n ; i ++){
        if(a[i]==y){
            ++count;
        }
    }
    cout<<"The number of times the value y appears:"<<count ;
    cout<<endl;
    return count;
}
//Xoa ca ptu co gia tri x,duyet mang neu 
void deleteItems(ll a[], ll &n, ll x){
        cout<<"Input value x:";
        cin>>x;
      for(ll i = 0 ; i < n ; i ++ ){
          if(a[i]!=x){
              cout<<a[i]<<" ";
          }
      }
         cout<<endl;
}

//chen mot so k  vao mang ,o vi tri  idx
void InsertArray(ll a[],ll& n , ll k , ll  idx ){
     n = n + 1 ;
     if(idx < 0 || idx >= n ){
         cout<<"ERROR";
     }
     else {
     for( ll i = n-1 ; i > idx ; i --){
         a[i]=a[i-1];
     }
     a[idx]=k;
    } 
    for(ll i = 0 ; i < n ; i ++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
//Xoa no_items ptu  lien tuc bat dau tu vi tri index cho truoc
void deleteItemsFromIndex(ll a[], ll &n, ll index, ll no_items){
    cout<<"Input index"<<" ";
    cin>>index;
    cout<<endl;
    cout<<"Input no_items"<<" ";
    cin>>no_items;
    ll cnt = 0 ; 
    if(n<= 0||index < 0 ||n<= index  ; no_items > n  ){
        cout<<"ERROR";
    }
    else {
    for(ll i = index   ; i < n;  i ++ ){
            a[i]=a[i+no_items];
            
        }

    n -= no_items;
    for(ll i = 0 ; i < n ; i ++ ){
        cout<<a[i]<<" ";
    }
    cout<<endl;
   }
}
//noi hai mang thanh mot mang
void concatTwoArrays(ll a[], ll n, ll b[], ll nb, ll c[], ll &nc){
    setArray(a,n);
    cout<<"Enter the number of elements array b:";
    cin>>nb;
    for(ll i = 0 ; i < nb ; i ++){
        cout<<"Input"<<" "<<"b"<<"["<<i<<"]"<<" "<<"="<<" ";
        cin>>b[i];
    }
    cout<<"Enter the number of elements of array c:";
    cin>>nc;
    if(nc!= n+nb){
        cout<<"ERROR";
    }
    else {
    ll idx = 0 ; 
    for(ll i = 0 ; i < n ; i ++ ){
        c[idx] = a[i];
        ++idx;
    }
    for(ll i = 0 ; i < nb ; i ++ ){
        c[idx]=b[i];
        ++idx;
    }
    cout<<"Enter the number of elements array c:";
    cin>>nc;
    for(ll j = 0 ; j < nc ; j ++ ){
        cout<<c[j]<<" ";
    }
    cout<<endl;
  }
}
//Ham noi 2 mang xen ke thanh 1 mang
void concatInterspersedlyTwoArrays(ll a[], ll na, ll b[], ll nb, ll c[], ll &nc){
    cout<<"Enter the number of elements of array a:";
    cin>>na;
    for(ll i = 0;i<na;i++){
        cout<<"Input"<<" "<<"a"<<"["<<i<<"]"<<" "<<"="<<" ";
        cin>>a[i];
    }
    cout<<"Enter the number of elements of array b:";
    cin>>nb;
    for(ll i = 0;i<nb;i++){
        cout<<"Input"<<" "<<"b"<<"["<<i<<"]"<<" "<<"="<<" ";
        cin>>b[i];
    }
    cout<<"Enter the number of elements of array c:";
    cin>>nc;
    if(nc!=na+nb){
        cout<<"ERROR";
    }
    else {
    ll idx = 0 ; 
    for(ll i = 0 ; i <  nc ; i ++){
           c[idx]=a[i];
           idx += 2;
       }
       idx = 1 ; 
    for(ll i = 0 ; i <  nc ; i++  ){
           c[idx] = b[i];
           idx += 2 ; 
       }
   
    for(ll j = 0 ; j < nc; j ++ ){
        if(c[j]!= 0){
        cout<<c[j]<<" ";
        }
    }
 }
}

int main(){

    ll a[100],b[100],c[200];
    ll n ,y,x,index,no_items,na,nb,nc;
    
    setArray(a,n);
    printArray(a,n);
    sumArray(a,n);
    find_min_Array(a,n);
    countNumberofPrime(a,n);
    isAscendingOrder(a,n);
    countOccurrences(a,n,y);
    deleteItems(a, n,x);
    ll idx,k;cin>>idx>>k;
    InsertArray(a,n,k,idx);
    deleteItemsFromIndex(a,n,index,no_items);
    concatTwoArrays(a,n,b,nb,c,nc);
    concatInterspersedlyTwoArrays(a,na,b,nb,c,nc);
    
    return 0;
}