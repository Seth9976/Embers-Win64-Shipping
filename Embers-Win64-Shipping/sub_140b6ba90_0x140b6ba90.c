// 函数: sub_140b6ba90
// 地址: 0x140b6ba90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

HANDLE hProcess = *arg1
BOOL exitCode = 0
BOOL result

if (GetExitCodeProcess(hProcess, &exitCode) != 0)
    result = exitCode
    
    if (result != 0x103)
        if (arg2 != 0)
            *arg2 = result
        
        result.b = 1
        return result

result.b = 0
return result
