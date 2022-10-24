int main()  
{  
int num, count = 1, sum = 0;   
printf("Ingrese un numero:\n");  
scanf("%d", &num);    
while(count <= num)  
{  
if(count%2 != 0)  
{  
sum = sum + count;  
}  
count++;  
}    
printf("La suma de los numero impares es %d\n", sum);  
  
return 0;
}  