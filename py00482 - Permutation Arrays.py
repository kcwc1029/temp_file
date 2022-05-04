t=int(input())

for _ in range(t):
    o=input()
    index=list(map(int,input().split()))
    #print(*index)
    num=list(map(str,input().split()))
    #print(num)
    ans=['0']*(len(index)+1)
    for i in range(len(index)):
        ans[index[i]]=num[i]
    ans=ans[1:]
    print(*ans,sep="\n")