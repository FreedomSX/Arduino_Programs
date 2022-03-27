
import os 

program_path = os.getcwd()  #当前文件路径
program_name = program_path.split("\\")[-1] #在路径中获取项目名称
print(program_name)
# copy .\Codes\testArduino.ino Y:\Common\share\%program_name% /d /y /i /h /e

# 要发送到share文件夹的文件列表
file_name_lst = [i for i in os.listdir(".\\Codes\\") if i.endswith(".py") or i.endswith(".ino") or i.endswith(".mix")]
print(file_name_lst)
tools_name_lst = [i for i in os.listdir(".\\Codes\\tools") if i.endswith(".py") or i.endswith(".ino") or i.endswith(".mix")]
# file_name_lst = [
#     "testArduino.ino",
#     "save_program.py",
#     "UNO_Compile_And_Upload_testArduino.py",
#     "UNO_Compile_And_Upload.py",
#     "Uno_Compile_testArduino.py",
#     "Uno_Compile.py",
#     "Uno_Upload_testArduino.py",
#     "Uno_Upload.py",
#     "ino.py"
# ]

# 在Share中建立对应的项目文件夹
cmdStr = "if not exist Y:\Common\share" + "\\" + program_name + "\\Codes" + " (mkdir Y:\Common\share" + "\\" + program_name + "\\Codes)"
# print(cmdStr)
os.system(cmdStr)
# 在Share中建立对应的tools
cmdStr = "if not exist Y:\Common\share" + "\\" + program_name + "\\Codes\\Tools" + " (mkdir Y:\Common\share" + "\\" + program_name + "\\Codes\\Tools)"
# print(cmdStr)
os.system(cmdStr)

# 根据文件列表复制文件
for name in file_name_lst:
    cmdStr = r"copy .\Codes" + "\\" + name + r" Y:\Common\share" + "\\" + program_name + "\\Codes\\" + name + " /y"
    print(cmdStr)
    os.system(cmdStr)
# 根据tools列表复制文件
for name in tools_name_lst:
    cmdStr = r"copy .\Codes\tools" + "\\" + name + r" Y:\Common\share" + "\\" + program_name + "\\Codes\\Tools\\" + name + " /y"
    print(cmdStr)
    os.system(cmdStr)

# 在Share中建立对应的项目文件夹
cmdStr = "if not exist Y:\Common\share" + "\\" + program_name + "\\Simulation" + " (mkdir Y:\Common\share" + "\\" + program_name + "\\Simulation)"
# print(cmdStr)
os.system(cmdStr)

# 根据复制pds文件
cmdStr = r"copy Simulation\Simulation.pdsprj Y:\Common\share" + "\\" + program_name + "\\Simulation\\Simulation.pdsprj" + " /y"
# print(cmdStr)
os.system(cmdStr)

# 根据复制pds文件
cmdStr = r"copy Simulation\Simulation_mixly.pdsprj Y:\Common\share" + "\\" + program_name + "\\Simulation\\Simulation_mixly.pdsprj" + " /y"
# print(cmdStr)
os.system(cmdStr)


# 获取mixlyBuild文件夹中所有用户文件夹列表
folder_lst = [i for i in os.listdir("Y:\\mixlyBuild") if os.path.isdir(os.path.join("Y:\\mixlyBuild", i))]
print(folder_lst)

# 
for name in folder_lst:
    cmdStr = "if not exist Y:\mixlyBuild" + "\\" + name + "\\Simulion (mkdir Y:\mixlyBuild" + "\\" + name + "\\Simulion)"
    # print(cmdStr)
    os.system(cmdStr)
    cmdStr = r"copy .\Simulation\Simulation.pdsprj Y:\mixlyBuild" + "\\" + name + "\\Simulion\\" + name + "_" + program_name + ".pdsprj" + " /y"
    # print(cmdStr)
    os.system(cmdStr)

os.system(os.path.join("md Y:\\common\\share", program_name, "Codes\\testArduino"))
cmdStr = "xcopy .\\Codes\\testArduino " + os.path.join(" Y:\\common\\share", program_name, "Codes\\testArduino" + " /d /y /i /h /e")
print(cmdStr)
os.system(cmdStr)

os.system(os.path.join("md Y:\\common\\share", program_name, "Codes\\.vscode"))
cmdStr = "xcopy .\\Codes\\.vscode " + os.path.join(" Y:\\common\\share", program_name, "Codes\\.vscode" + " /d /y /i /h /e")
print(cmdStr)

os.system(cmdStr)

os.system("pause>nul")