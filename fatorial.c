int fatorial (int n){
if(n == 0 || n == 1){
return 1;
}
return fatorial(n)*fatorial(n-1);
}