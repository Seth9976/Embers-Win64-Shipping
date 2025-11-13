// 函数: sub_140e3cb10
// 地址: 0x140e3cb10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = arg1[0x695].d

if (rdx != 0x800)
    char rax
    
    if (*(arg1 + 0x34b5) != 0)
        int64_t* rcx = *arg1
        int64_t r9_1 = *rcx
        rax = (*(r9_1 + 8))(rcx, arg1 + 0x2c9c, zx.q(0x800 - rdx), r9_1)
    
    if (*(arg1 + 0x34b5) == 0 || rax == 0)
        rax = 0
    else
        rax = 1
    
    *(arg1 + 0x34b5) = rax

arg1[0x695].d = 0x800
arg1[0x694] = arg1 + 0x2c9c
return arg1 + 0x2c9c
