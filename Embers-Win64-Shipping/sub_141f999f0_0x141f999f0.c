// 函数: sub_141f999f0
// 地址: 0x141f999f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = arg1[0x10].d

if (rdx s<= 0 && arg1[0xa].d s< (zx.d(*(arg3 + 0xf0)) u>> 2 & 1) + 0xff)
    if ((*(arg3 + 0x29) & 1) == 0)
        sub_141f99040(arg1, arg2, arg3, arg4, arg5)
        return arg2
    
    sub_14213f9e0(arg1[5])
else if (rdx s< 0x8000)
    int64_t rbp_1 = sx.q(arg1[0x10].d)
    int32_t rax_7 = (rbp_1 + 1).d
    arg1[0x10].d = rax_7
    
    if (rax_7 s> *(arg1 + 0x84))
        sub_1405a4df0(&arg1[0xf])
    
    int64_t rax_8 = arg1[0xf]
    int64_t rcx_3 = rbp_1 * 3
    *(rax_8 + (rcx_3 << 3)) = 0
    *(rax_8 + (rcx_3 << 3) + 8) = 0
    *(rax_8 + (rcx_3 << 3) + 0x10) = 0
    int64_t rax_9 = arg1[0xf]
    int64_t* rsi_2 = rax_9 + (rcx_3 << 3)
    int32_t rax_13 = ((*(arg3 + 0xa0) + 7) s>> 3).d + *(rax_9 + (rcx_3 << 3) + 8)
    rsi_2[1].d = rax_13
    
    if (rax_13 s> *(rsi_2 + 0xc))
        sub_1405daba0(rsi_2)
    
    memcpy(*rsi_2, *(arg3 + 0x90), ((*(arg3 + 0xa0) + 7) s>> 3).d)
    rsi_2[2].d = *(arg3 + 0xa0)
else
    *(arg1[5] + 0x134) = 1

*arg2 = -1
return arg2
