@echo off
set /p folder_name=��������Ŀ����
md %folder_name%
md .\%folder_name%\Codes
md .\%folder_name%\Simulation
xcopy .\001_��̥���ɼƻ�\Codes .\%folder_name%\Codes /y
xcopy .\001_��̥���ɼƻ�\Simulation .\%folder_name%\Simulation /y

pause>nul