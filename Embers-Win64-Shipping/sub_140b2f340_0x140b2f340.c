// 函数: sub_140b2f340
// 地址: 0x140b2f340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0
int32_t rcx = *arg2
*arg1 = rcx

if (rcx == 0 || rcx == 1 || rcx == 2)
    *(arg1 + 8) = *(arg2 + 8)
else
    if (rcx == 3)
        sub_140597df0(&arg1[4], &arg2[4])
        return arg1
    
    if (rcx == 4)
        *(arg1 + 8) = *(arg2 + 8)

return arg1
