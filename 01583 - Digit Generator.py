t=int(input())
for _ in range(t):
    n=int(input())
    ans=0

    for i in range(1,n):
        copy_i=i
        temp=i
        i=str(i)
        for j in i:
            temp+=int(j)
        # print("temp",temp)
        if temp==n:
            ans=i
            break
    print(ans)