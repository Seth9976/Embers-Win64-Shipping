// 函数: sub_141be5a30
// 地址: 0x141be5a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x124) = arg2
*(arg1 + 0x128) = arg3

if (arg3 s< 1)
    arg3 = 1
    *(arg1 + 0x128) = 1

void* result = *(arg1 + 0x140)

if (result != 0)
    *(result + 0x8e8) = arg2
    *(result + 0x8ec) = arg3

return result
