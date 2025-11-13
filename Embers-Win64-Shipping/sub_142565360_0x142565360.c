// 函数: sub_142565360
// 地址: 0x142565360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1].b = arg2[1].b
*(arg1 + 0xc) = *(arg2 + 0xc)
arg1[2].d = arg2[2].d

if (&arg1[3] != &arg2[3])
    int32_t r8_1 = *(arg1 + 0x24)
    int32_t rbp_1 = arg2[4].d
    int64_t r14_1 = arg2[3]
    arg1[4].d = rbp_1
    
    if (rbp_1 != 0 || r8_1 != 0)
        sub_1405a4c70(&arg1[3], rbp_1, r8_1)
        memcpy(arg1[3], r14_1, rbp_1 * 2)
    else
        *(arg1 + 0x24) = rbp_1

arg1[5] = arg2[5]
return arg1
