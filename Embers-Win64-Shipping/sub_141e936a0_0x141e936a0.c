// 函数: sub_141e936a0
// 地址: 0x141e936a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi = zx.q(arg2.d)

if (arg4 != 0)
    int32_t rdx_7 = arg1[9].d + (arg2 << 1).d
    
    if (rdx_7 s> *(arg1 + 0x4c))
        sub_1408cf3a0(&arg1[8], rdx_7)
else if (arg3 != 0)
    int32_t rdx_3 = arg1[5].d + rdi.d
    
    if (rdx_3 s> *(arg1 + 0x2c))
        sub_1405dadb0(&arg1[4], rdx_3)
    
    int32_t rdx_5 = (rdi * 3).d + arg1[7].d
    
    if (rdx_5 s> *(arg1 + 0x3c))
        return sub_1405a5220(&arg1[6], rdx_5) __tailcall
else
    int32_t rdx = arg1[1].d + (arg2 << 1).d
    
    if (rdx s> *(arg1 + 0xc))
        return sub_1405a5220(arg1, rdx) __tailcall
