// 函数: sub_140d18af0
// 地址: 0x140d18af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi

if (arg1[3].d == 0)
    rdi = sx.q(arg1[1].d)
    int32_t rax_2 = (rdi + 1).d
    arg1[1].d = rax_2
    
    if (rax_2 s> *(arg1 + 0xc))
        sub_1405c5060(arg1)
    
    int32_t* rcx_2 = rdi * 0x50 + *arg1
    *rcx_2 = 0xffffffff
    __builtin_memset(&rcx_2[2], 0, 0x41)
else
    int64_t r9_1 = sx.q(arg1[3].d)
    rdi = zx.q(*(arg1[2] + (r9_1 << 2) - 4))
    arg1[3].d = (r9_1 - 1).d

*(*arg1 + sx.q(rdi.d) * 0x50) = arg2
arg1[4].d += 1
return zx.q(rdi.d)
