import os

path_current = os.getcwd()

cmd_name_lst = [
    ("打开VSCode和UNO插件", "code_and_uno_open.py"),
    ("打开mixly", "..\\mixly.mix"),
    ("从服务器个人账号拉取项目", "pull_program.py"),
    ("保存项目到服务器", "save_program.py"),
    ("打开仿真软件", "..\\..\\Simulation\\Simulation.pdsprj"),
    ("打开仿真软件关联mixly", "..\\..\\Simulation\\Simulation_mixly.pdsprj"),
    ("编译并上传testArduino.ino.hex至UNO", "UNO_Compile_And_Upload_testArduino.py"),
    ("编译并上传选择的文件至UNO", "UNO_Compile_And_Upload.py"),
    ("发送testArduino.ino.hex至mixly", "copy_testArduino_ino_hex_to_mixly.py"),
    ("选择hex文件并发送至mixly", "select_hex_copy_to_mixly.py"),
    ("编译testArduino.ino", "Uno_Compile_testArduino.py"),
    ("编译选择的文件", "Uno_Compile.py"),
    ("上传testArduino.ino.hex至UNO", "Uno_Upload_testArduino.py"),
    ("上传选择的文件至UNO", "Uno_Upload.py"),
    ("打开串口助手", "Open_Serial_Assistant.py")
]

def show():
    print()
    print()
    print("文件编译上传工具")
    print("*" * 30)
    print("*" * 30)
    for num, tu in enumerate(cmd_name_lst):
        # print(num, tu)
        print(num, tu[0])
    print("*" * 30)
    print("*" * 30)
    print()

while True:
    show()
    cmd_num = int(input("请输入功能编号(-1退出)："))
    # print(cmd_num)
    if cmd_num == -1:
        exit()
    os.startfile(os.path.join(path_current, "Tools", cmd_name_lst[cmd_num][1]))
