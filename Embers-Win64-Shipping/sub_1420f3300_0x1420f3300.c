// 函数: sub_1420f3300
// 地址: 0x1420f3300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
*(arg1 + 0x10) = *(arg2 + 0x10)
*(arg1 + 0x20) = *(arg2 + 0x20)
*(arg1 + 0x30) = *(arg2 + 0x30)
*(arg1 + 0x40) = *(arg2 + 0x40)
arg1[0x14] = arg2[0x14]
arg1[0x15] = arg2[0x15]
*(arg1 + 0x58) = 0
int32_t i_1 = arg2[0x18]
int16_t* rbx = *(arg2 + 0x58)
arg1[0x18] = i_1

if (i_1 != 0)
    sub_1405a4c70(&arg1[0x16], i_1, 0)
    int16_t* rax_3 = *(arg1 + 0x58)
    int32_t i
    
    do
        int16_t rcx_1 = *rbx
        rbx = &rbx[1]
        *rax_3 = rcx_1
        rax_3 = &rax_3[1]
        i = i_1
        i_1 -= 1
    while (i != 1)
else
    arg1[0x19] = 0

return arg1
