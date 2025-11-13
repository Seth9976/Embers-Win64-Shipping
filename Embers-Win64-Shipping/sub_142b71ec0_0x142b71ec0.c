// 函数: sub_142b71ec0
// 地址: 0x142b71ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xc) = 0xffffffff
*arg1 = 0
arg1[1].d = 0
arg1[2] = 0
arg1[3] = 0
arg1[6].d = 0
arg1[7] = 0
arg1[4].d = 0xffffffff
*(arg1 + 0x24) = arg2
arg1[5].d = arg2
*(arg1 + 0x2c) = arg3
*(arg1 + 0x34) = arg2

if (*arg4 s<= 0)
    *arg1 = sub_142a7dd00(0x4000)
    int64_t rax_2 = sub_142a7dd00(0x10000)
    bool cond:0_1 = *arg1 == 0
    arg1[2] = rax_2
    
    if (not(cond:0_1) && rax_2 != 0)
        arg1[1].d = 0x1000
        arg1[3].d = 0x4000
        return arg1
    
    *arg4 = 7

return arg1
