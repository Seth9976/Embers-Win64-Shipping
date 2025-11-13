// 函数: sub_140b64230
// 地址: 0x140b64230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = arg2
*arg1 = &data_142e7cab0
arg1[6] = 0
arg1[7] = 0

if (arg2 - 1 u<= -3)
    int64_t fileSize
    GetFileSizeEx(arg2, &fileSize)
    arg1[7] = fileSize

__builtin_memset(&arg1[2], 0, 0x20)
return arg1
