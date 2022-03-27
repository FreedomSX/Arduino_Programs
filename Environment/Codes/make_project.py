import os

project_name = input("请输入工程名称: ")

cmdStr = "md " + project_name
os.system(cmdStr)

cmdStr = "echo. >" + project_name + "\\" + project_name + ".pde"
os.system(cmdStr)