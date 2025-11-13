// 函数: sub_141fa4960
// 地址: 0x141fa4960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rax = nullptr
*arg1 = 0
arg1[1] = 0

if (arg3 u>= 0x80 && *arg2 == 0x44 && arg2[1] == 0x44 && arg2[2] == 0x53 && arg2[3] == 0x20
        && *(arg2 + 4) == 0x7c && *(arg2 + 0x4c) == 0x20)
    if ((*(arg2 + 8) & 0x1007) == 0x1007)
        rax = &arg2[4]
    
    *arg1 = rax

if (*(arg2 + 0x54) == 0x30315844)
    arg1[1] = &arg2[0x80]

return arg1
