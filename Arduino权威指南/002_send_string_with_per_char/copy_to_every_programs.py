import os

# 获取项目文件夹中所有项目文件夹列表
folder_lst = [i for i in os.listdir(".\\") if os.path.isdir(os.path.join(".\\", i)) and (not i.startswith("Environment"))]
# print(folder_lst)

py_file_lst = [i for i in os.listdir(".\\") if os.path.isfile(os.path.join(".\\", i)) and i.endswith(".py") and (not i.startswith("copy_to_every_folder"))]

for folder in folder_lst:
    print(folder.find("Environment"))
    if folder.find("Environment") == -1:
        cmdStr = "xcopy .\\Environment .\\" + folder + "\\Environment /d /y /i /h /e"
        # print(cmdStr)
        os.system(cmdStr)
        for file in py_file_lst:
            cmdStr = "copy .\\" + file + " .\\" + folder + "\\" + file + " /y"
            # print(cmdStr)
            os.system(cmdStr)