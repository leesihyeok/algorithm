a= int(input())
b= int(input())
c= int(input()) # 단, a,b,c 는 100이상 1000미만 자연수 

temp_list = []
for elem in range(10):
    temp2 = [0]
    temp2.append(elem)
    temp_list.append(temp2) # [[개수, 원소]] 

for i in str(a*b*c):
    for j in temp_list:
        if int(i) == j[1]:
            j[0]+=1

for i in temp_list:
    print(i[0])