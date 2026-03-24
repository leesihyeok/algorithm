n= int(input())
elem = input().split()
x= int(input())
count = 0

count_list = [0]*(2000000)

for j in elem:
    count_list[int(j)-1]+=1
    if (int(j) > x-1 or int(j)==x-int(j)):
        continue
    elif (count_list[int(j)-1] + count_list[x-int(j)-1] == 2):
        count+=1 

print(count)

