// 函数: sub_140b74690
// 地址: 0x140b74690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

BOOL result

if (arg3 == 0 || arg1 == 0)
    result.b = 0
else
    int32_t numberOfBytesWritten = 0
    result.b = WriteFile(arg1, arg2, arg3, &numberOfBytesWritten, nullptr) != 0
    
    if (arg4 != 0)
        *arg4 = numberOfBytesWritten

return result
