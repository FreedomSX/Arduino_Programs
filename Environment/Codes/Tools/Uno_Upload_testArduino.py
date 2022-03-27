import os
os.system("@echo off")
import sys

# folder_lst = [i for i in os.listdir() if os.path.isdir(i)]
# # print(folder_lst)
# for i in enumerate(folder_lst):
#     print(i)
# hex_file_num = int(input("请选择位置的编号："))
# folder_name = folder_lst[hex_file_num]
folder_name = "testArduino"

#set the path of the local command
cmd_path = os.getcwd()
# print("cmd_path", cmd_path)
# folder_path = os.path.join(cmd_path, folder_name)
# # print(folder_path)

# hex_file_lst = [i for i in os.listdir(folder_path) if i.endswith(".hex")]
# # print(hex_file_lst)
# for i in enumerate(hex_file_lst):
#     print(i)
# hex_file_num = int(input("请选择hex文件的编号："))
# hex_file_name = hex_file_lst[hex_file_num]
# hex_file_path = os.path.join(folder_path, hex_file_name)

port_num = input("请输入端口号：COM")

cmd_str = r"C:\mixly\arduino\hardware\tools\avr\bin\avrdude.exe -C C:\mixly\arduino\hardware\tools\avr\etc\avrdude.conf -v -p atmega328p -c arduino -P COM" + port_num + " -b 115200 -D -U flash:w:\"" + cmd_path + "\\" + folder_name + "\\testArduino.ino.hex\":i"
print(cmd_str)
os.system(cmd_str)
os.system("pause>nul")
