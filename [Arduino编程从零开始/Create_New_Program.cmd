@echo off
set /p folder_name=请输入项目名：
md %folder_name%
md .\%folder_name%\Codes
md .\%folder_name%\Simulation
xcopy .\001_二胎养成计划\Codes .\%folder_name%\Codes /y
xcopy .\001_二胎养成计划\Simulation .\%folder_name%\Simulation /y

pause>nul