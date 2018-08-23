@Echo Off
REM Enable pylon logging for this run. The logfile will be created in the %TEMP% directory and named pylonLog.txt
REM You can drag-n-drop any application from the explorer onto this script file to run it with logging enabled.
REM If you just start this script with no args the pylonViewer will be started.

IF !%PYLON_GENICAM_VERSION%! == !! SET PYLON_GENICAM_VERSION=V3_0
if exist "%~dp0\..\DebugLogging.properties" set GENICAM_LOG_CONFIG_%PYLON_GENICAM_VERSION%=%~dp0\..\DebugLogging.properties
if exist "%~dp0\DebugLogging.properties" set GENICAM_LOG_CONFIG_%PYLON_GENICAM_VERSION%=%~dp0\DebugLogging.properties 
if not defined GENICAM_LOG_CONFIG_%PYLON_GENICAM_VERSION% exit /b 1
 
REM start the application

ECHO Logging activated
ECHO Waiting for application to exit ...

IF !%1! == !! (
    Start /WAIT "PylonViewerApp" PylonViewerApp.exe
) ELSE (
    Start /D"%~dp1" /WAIT "%~n1" %1
)

rem open an explorer window and select the logfile
IF EXIST "%TEMP%\pylonLog.txt" Start "" explorer.exe /select,%TEMP%\pylonLog.txt
