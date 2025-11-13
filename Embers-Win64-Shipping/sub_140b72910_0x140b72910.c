// 函数: sub_140b72910
// 地址: 0x140b72910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

HWND result = GetConsoleWindow()

if (result == 0)
    return result

return SetConsoleCtrlHandler(sub_140b65bf0, 1) __tailcall
