// 函数: sub_1429e7760
// 地址: 0x1429e7760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char const* const r8

if (arg2 != 1)
    r8 = "Invalid reference frame"
else
    int64_t rax_1 = sx.q(*(arg1 + 0x410))
    int64_t rax_3
    void* rcx
    int32_t* rcx_1
    
    if (rax_1.d s>= 0)
        rcx = rax_1 * 0xd0
        rax_3 = *(arg1 + 0x47e8) + 0x70
        rcx_1 = rcx + rax_3
    
    if (rax_1.d s< 0 || rcx == neg.q(rax_3))
        sub_1429da010(arg1 + 0x270, 1, "No 'last' reference frame", arg4)
        return 1
    
    if (rcx_1[1] == arg3[1] && *rcx_1 == *arg3 && rcx_1[6] == arg3[6] && rcx_1[5] == arg3[5])
        sub_142a216f0(rcx_1, arg3)
        return zx.q(*(arg1 + 0x270))
    
    r8 = "Incorrect buffer dimensions"

sub_1429da010(arg1 + 0x270, 1, r8, arg4)
return zx.q(*(arg1 + 0x270))
