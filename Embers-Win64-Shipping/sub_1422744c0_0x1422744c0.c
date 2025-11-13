// 函数: sub_1422744c0
// 地址: 0x1422744c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d266d0(arg1)
bool result = *(arg1 + 0x8c)

if (result != 4)
    if (result == 0)
        *(arg1 + 0x8d) = result
    else if (result == 1)
        *(arg1 + 0x8d) = result
    else if (result == 2)
        *(arg1 + 0x8d) = result
    else if (result == 3)
        *(arg1 + 0x8d) = result
    
    *(arg1 + 0x8c) = 4

if (*(arg1 + 0xad) == 0xff)
    result = (*(arg1 + 0xae) == 0) + 1
    *(arg1 + 0xad) = result

if (*(arg1 + 0x130) == 0)
    *(arg1 + 0x130) = 1

return result
