given = input()

save_dic = {}

for i in range(10):
    save_dic[str(i)] = 0

for j in given:
    save_dic[j]+=1

if (save_dic["6"] + save_dic["9"]) % 2 == 1:

    save_dic["x"] = (save_dic["6"] + save_dic["9"])/2 + 0.5 
else: 
    save_dic["x"] = (save_dic["6"] + save_dic["9"])/2 

save_dic["6"] = 0
save_dic["9"] = 0 

print(int(max(save_dic.values())))
    





