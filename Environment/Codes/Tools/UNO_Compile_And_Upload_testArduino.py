import os 
port_num = input("请输入端口号：COM")

cmd_str = r"arduino --board arduino:avr:uno --save-prefs"
os.system(cmd_str)

cmd_str = r"arduino_debug -v --board arduino:avr:uno --pref build.path=testArduino --port COM" + port_num + " --upload \"testArduino.ino\""
print(cmd_str)
os.system(cmd_str)
os.system("pause>nul")