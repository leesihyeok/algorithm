number , max = map(int , input().split())
want_dic = {}
# 성별, 학년 
for i in range(number):
    x = tuple((input().split()))
    want_dic[x] = want_dic.get(x , 0) + 1 

want = 0

for value in want_dic.values():
    if value % max != 0 :
        want += (value // max) +1 
    else:
        want += value // max 
    
print(want)