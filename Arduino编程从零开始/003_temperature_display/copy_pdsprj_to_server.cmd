@echo off

set /p program_name=请输入项目名:
set filename=Simulation

net use y: \\192.168.31.254\新学员资料 123.com /user:administrator

@REM for /d %%i in (Y:\mixlyBuild\*) do copy .\Simulation\Simulation.pdsprj %%i\%%~ni_%filename%.pdsprj /y & xcopy .\Codes Y:\Common\share\%program_name% /d /y /i /h /e
for /d %%i in (Y:\mixlyBuild\*) do copy .\Simulation\Simulation.pdsprj %%i\%%~ni_%filename%.pdsprj /y
::copy .\Simulation\Simulation.pdsprj Y:\mixlyBuild\a\a_%filename%.pdsprj /y

pause>nul