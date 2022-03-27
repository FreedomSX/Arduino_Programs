import os

user_id = ""
with open(r"C:\ZJWL_Manage_System\Current_ID.txt" , "r" , encoding="utf-8") as f:
    user_id = f.readline()


program_path = os.getcwd()
program_name = program_path.split("\\")[-2]
# print(program_name)

# file_name_lst = [
#     "testArduino.ino",
#     "mixly.mix"
# ]

file_name_lst = [i for i in os.listdir(".\\") if i.endswith(".mix") or i.endswith(".ino")]
print(file_name_lst)

cmdStr = "if not exist Y:\Programs" + "\\" + user_id  + "\\" + program_name + " (mkdir Y:\Programs" + "\\" + user_id  + "\\" + program_name + "\\Codes)"
# print(cmdStr)
os.system(cmdStr)

for name in file_name_lst:
    cmdStr = r"copy ." + "\\" + name + r" Y:\Programs" + "\\" + user_id  + "\\" + program_name + "\\Codes\\" + name + " /y"
    # print(cmdStr)
    os.system(cmdStr)
os.system("pause>nul")