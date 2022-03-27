import os

user_id = ""
with open(r"C:\ZJWL_Manage_System\Current_ID.txt" , "r" , encoding="utf-8") as f:
    user_id = f.readline()

folder_lst = []
user_path = os.path.join("Y:\\Programs", user_id)
# print(user_path)
for folder in os.listdir(user_path):
    if os.path.isdir(os.path.join(user_path, folder)):
        folder_lst.append(folder)

for num, i in enumerate(folder_lst):
    print(num, i)

program_num = int(input("请输入需要导入的项目编号："))

program_path = os.path.join(user_path, folder_lst[program_num], "Codes")

# print(program_path)

file_lst = [file for file in os.listdir(program_path) if file.endswith("ino") or file.endswith(".mix")] 

for file in file_lst:
    cmdStr = "copy " + os.path.join(program_path, file) + " " + file
    # print(cmdStr)
    os.system(cmdStr)