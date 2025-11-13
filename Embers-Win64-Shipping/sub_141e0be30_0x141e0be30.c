// 函数: sub_141e0be30
// 地址: 0x141e0be30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg2 != 0)
    if (rbx.d u> 4)
        uint32_t rax = (sub_140a846a0(rbx << 6, 0) u>> 6).d
        
        if (rbx.d s> rax)
            rax = 0x7fffffff
        
        rbx = zx.q(rax)
    else
        rbx = 4

if (rbx.d == *(arg1 + 0x10c))
    return 

int32_t rdx = *(arg1 + 0x108)
*(arg1 + 0x10c) = rbx.d
sub_141e0bb50(arg1, rdx, rbx.d, 0x40)
