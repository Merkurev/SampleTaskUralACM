@echo off
if "%~x1"==".class" (
	..\!test.exe java %~n1
) else (
	..\!test.exe %1
)
