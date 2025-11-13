// 函数: sub_141105040
// 地址: 0x141105040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg2 != 0)
    if (rbx.d u> 2)
        uint32_t rax = (sub_140a846a0(rbx * 2, 0) u>> 1).d
        
        if (rbx.d s> rax)
            rax = 0x7fffffff
        
        rbx = zx.q(rax)
    else
        rbx = 2

if (rbx.d == *(arg1 + 0x14))
    return 

int32_t rdx = *(arg1 + 0x10)
*(arg1 + 0x14) = rbx.d
sub_141104ab0(arg1, rdx, rbx.d, 2)
