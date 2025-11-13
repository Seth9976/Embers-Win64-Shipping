// 函数: sub_142c7dac0
// 地址: 0x142c7dac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 0

if (arg1[0xea].d != 0)
    return sub_142c8ecf0(&arg1[0xd3], arg2, arg3) __tailcall

int32_t rcx = 1
*arg2 = arg1[0x47]

if (*(*arg1 + 0x5de) != 0)
    rcx = 0x20003
    arg2[1] = arg1[0x48]
else
    int64_t rax_3 = arg1[0x49]
    int32_t r8 = 1
    int64_t r10_1 = 1
    
    if (rax_3 != -1)
        r8 = 2
        arg2[1] = rax_3
        r10_1 = 2
        rcx = 0x20001
    
    int64_t rax_4 = arg1[0x4a]
    
    if (rax_4 != -1)
        arg2[r10_1] = rax_4
        return zx.q(rcx) | zx.q(1 << ((r8 + 0x10) u% 0x20))

return zx.q(rcx)
