// 函数: sub_141beee10
// 地址: 0x141beee10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141beee70(arg1)
void* result = arg1[0x26]

if (result != 0)
    *(*(result + 0x400) + 0x5f0) = *(arg1 + 0x120)
    result = arg1[0x28]
    *(*(arg1[0x26] + 0x400) + 0x678) = result

return result
