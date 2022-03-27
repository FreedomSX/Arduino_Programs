import os 

folder_lst = [i for i in os.listdir() if os.path.isdir(i)]
# print(folder_lst)
for i in enumerate(folder_lst):
    print(i)
hex_file_num = int(input("请选择位置的编号："))
folder_name = folder_lst[hex_file_num]

#set the path of the local command
cmd_path = os.getcwd()
# print("cmd_path", cmd_path)
folder_path = os.path.join(cmd_path, folder_name)
# print(folder_path)

hex_file_lst = [i for i in os.listdir(folder_path) if i.endswith(".hex")]
# print(hex_file_lst)
for i in enumerate(hex_file_lst):
    print(i)
hex_file_num = int(input("请选择hex文件的编号："))
hex_file_name = hex_file_lst[hex_file_num]
hex_file_path = os.path.join(folder_path, hex_file_name)

cmdStr = "copy " + ".\\" + folder_name + "\\" + hex_file_name + r" C:\mixly\mixlyBuild\testArduino.ino.hex /y"
# print(cmdStr)
os.system(cmdStr)
os.system("pause>nul")