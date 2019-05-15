lower,upper=map(int,input().split())
prime=[]
for num in range(lower+1,upper):
 if num>1:
   for i in range(2,num):
     if(num % i)==0:
       break
  else:
    prime.append(num)
 printf(*prime)
