import os

cwd = os.getcwd()

project_name_lst = [i for i in os.listdir(".\\") if os.path.isdir(os.path.join(".\\", i)) and (not i.startswith("."))]
# project_name_lst = [i for i in os.listdir(".\\")]
# print(project_name_lst)

for num, project in enumerate(project_name_lst):
    print(num, project)
num_of_project = int(input("请选择工程编号: "))

cmdStr = "D:\\Green_Software\\processing-4.0b7\\processing-java.exe --force --sketch=" + cwd + "\\" + project_name_lst[num_of_project] + " --output=" + cwd + "\\" + project_name_lst[num_of_project] + "\\out --run"
os.system(cmdStr)