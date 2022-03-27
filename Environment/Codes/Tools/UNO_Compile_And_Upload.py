import os 

ino_file_lst = [i for i in os.listdir() if os.path.isfile(i) and i.endswith(".ino") or i.endswith(".cpp")]
# print(ino_file_lst)
for i in enumerate(ino_file_lst):
    print(i)
file_num = int(input("请选择要源文件的编号："))
file_name = ino_file_lst[file_num]


#set the path of the local command
#cmd_path = os.getcwd()
# print("cmd_path", cmd_path)
ino_path = file_name
# print(ino_path)
code_name = input("请输入保存位置(默认设置为文件名):")
if code_name=="":
    code_name = file_name


port_num = input("请输入端口号：COM")

cmd_str = r"arduino --board arduino:avr:uno --save-prefs"
os.system(cmd_str)

cmd_str = r"arduino_debug -v --board arduino:avr:uno --pref build.path=" + code_name.split(".")[0].strip() + " --port COM" + port_num + " --upload \"" + ino_path + "\""
print(cmd_str)
os.system(cmd_str)
os.system("pause>nul")