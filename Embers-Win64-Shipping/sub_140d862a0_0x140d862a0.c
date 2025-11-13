// 函数: sub_140d862a0
// 地址: 0x140d862a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
HWND hWnd = __security_cookie ^ &var_58
HWND hWnd_1 = hWnd

if (data_143ddb400 != 0 && *(arg1 + 0x18) s> 1)
    hWnd = GetConsoleWindow()
    int32_t var_28
    
    if (hWnd != 0)
        GetWindowRect(hWnd, &var_28)
        sub_140b00a60(data_143ddb400, u"DebugWindows", u"ConsoleX", var_28, arg1 + 0x10)
        int32_t var_24
        hWnd = sub_140b00a60(data_143ddb400, u"DebugWindows", u"ConsoleY", var_24, arg1 + 0x10)
    
    HANDLE hConsoleOutput = *(arg1 + 0x20)
    
    if (hConsoleOutput != 0)
        hWnd = GetConsoleScreenBufferInfo(hConsoleOutput, &var_28)
        
        if (hWnd.d != 0)
            sub_140b00a60(data_143ddb400, DebugWindows", ConsoleWidth", sx.d(var_28.w), arg1 + 0x10)
            hWnd = sub_140b00a60(data_143ddb400, DebugWindows", ConsoleHeight"
                , sx.d(var_28:2.w), arg1 + 0x10)

__security_check_cookie(hWnd_1 ^ &var_58)
return hWnd
