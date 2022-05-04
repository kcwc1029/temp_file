# 用DP寫
# 大小是開到100000

r=100000
arr=[0,1]
yy=0
for i in range(1,r):
    y=yy+(i*2)
    arr.append(y)
    arr.append(y+(i+1))
    yy=y

t=int(input())
for _ in range(t):
    a,b=map(int,input().split())
    for i in range(r):
        if abs(a-b)<=arr[i]:
            print(i)
            break