t=int(input())
blank=input()
for _ in range(t):
    a=int(input())
    f=int(input())
    for f0 in range(f):#總共幾個波
        for a0 in range(1,a+1):#列出的數字
            for i in range(a0):#列出一行有幾個
                print(a0,end='')
            print('')
        for i in range(a-1,0,-1):
            for j  in range(i):
                print(i,end='')
            print('')
        print('')