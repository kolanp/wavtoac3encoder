@echo off
setlocal

set EnginesFileName=EncWAVtoAC3.engines

set BasePath=..\src\bin\Debug\Win32
rmdir /S /Q "%BasePath%\libaftendll_x86"
rmdir /S /Q "%BasePath%\libaftendll_x86_SSE"
rmdir /S /Q "%BasePath%\libaftendll_x86_SSE2"
rmdir /S /Q "%BasePath%\libaftendll_x86_SSE3"
del "%BasePath%\%EnginesFileName%"

set BasePath=..\src\bin\Release\Win32
rmdir /S /Q "%BasePath%\libaftendll_x86"
rmdir /S /Q "%BasePath%\libaftendll_x86_SSE"
rmdir /S /Q "%BasePath%\libaftendll_x86_SSE2"
rmdir /S /Q "%BasePath%\libaftendll_x86_SSE3"
del "%BasePath%\%EnginesFileName%"

set BasePath=..\src\bin\Debug\x64
rmdir /S /Q "%BasePath%\libaftendll_AMD64"
rmdir /S /Q "%BasePath%\libaftendll_AMD64_SSE2"
rmdir /S /Q "%BasePath%\libaftendll_AMD64_SSE3"
del "%BasePath%\%EnginesFileName%"

set BasePath=..\src\bin\Release\x64
rmdir /S /Q "%BasePath%\libaftendll_AMD64"
rmdir /S /Q "%BasePath%\libaftendll_AMD64_SSE2"
rmdir /S /Q "%BasePath%\libaftendll_AMD64_SSE3"
del "%BasePath%\%EnginesFileName%"

endlocal
