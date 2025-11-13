// 函数: sub_142ab6bb0
// 地址: 0x142ab6bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 8)
*arg1 = *arg2

if (rbx != 0)
    if (*(rbx + 0xc) != 0)
        sub_142a7dcd0(*rbx)
    
    sub_142a47920(rbx)

*(arg1 + 8) = *(arg2 + 8)
arg1[4] = arg2[4]
*(arg2 + 8) = 0
return arg1
