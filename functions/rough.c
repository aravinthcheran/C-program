int main(){
union {int i1;int i2;} myVar={.i2 =100};
printf("%d\n%d\n",myVar.i1,myVar.i2);
return 0;
}