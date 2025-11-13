// 函数: sub_141f314b0
// 地址: 0x141f314b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_141f54910(arg1) == 0)
    bool cond:0 = *(arg1 + 0x684) == 0
    *(arg1 + 0x680) = 0
    
    if (not(cond:0))
        sub_1405a5220(arg1 + 0x678, 0)
    
    return 0

void* rdx = *(arg1 + 0x430)

if (*(arg1 + 0x680) != *(rdx + 0x1b0))
    sub_140780b40(arg1 + 0x678, rdx + 0x1b8)

int32_t result
result.b = 1
return result
