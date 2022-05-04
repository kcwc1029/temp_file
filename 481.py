dic={
  'A':'A','B':'-1','C':'-1','D':'-1','E':'3','F':'-1','G':'-1','H':'H','I':'I',
  'J':'L','K':'-1','L':'J','M':'M','N':'-1','O':'O','P':'-1','Q':'-1','R':'-1',
  'S':'2','T':'T','U':'U','V':'V','W':'W','X':'X','Y':'Y','Z':'5','0':'0',
  '1':'1','2':'S','3':'E','4':'-1','5':'Z','6':'-1','7':'-1','8':'8','9':'-1'
}

def  slove(str1):
    str2=str1[len(str1)::-1]#回文
    print(str1)
    print(str2)
    #先設置一個鏡像flag，然後從前面開始檢查
    str3=True#鏡相
    for i in range(len(str1)):
        if(dic[str1[i]]=='-1' or dic[str1[i]]!=str1[-i-1]):  #dic[str1[i]]!=str1[-i-1] 前跟後倒映的公式
            str3=False
            break

    if (str1==str2 and str3): print(str1+" -- is a mirrored palindrome.")
    elif (str1==str2): print(str1+" -- is a regular palindrome.")
    elif (str3): print(str1+" -- is a mirrored string.")
    else: print(str1+" -- is not a palindrome.")

while True:
    try:
        string=input()
        slove(string)
    except:
        break