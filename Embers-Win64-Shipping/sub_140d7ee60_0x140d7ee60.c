// 函数: sub_140d7ee60
// 地址: 0x140d7ee60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x20) != 0)
    return zx.q(*(arg1 + 0x29))

enum WIN32_ERROR result

if (AttachConsole(data_1439ae42c) != 0)
    FreeConsole()
else if (GetLastError() == ERROR_ACCESS_DENIED)
    result.b = 1
    return result

result.b = 0
return result
