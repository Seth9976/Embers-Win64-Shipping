// 函数: sub_141a64350
// 地址: 0x141a64350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg2 != 0)
    if (rbx.d u> 8)
        uint32_t rax = (sub_140a846a0(rbx << 2, 0) u>> 2).d
        
        if (rbx.d s> rax)
            rax = 0x7fffffff
        
        rbx = zx.q(rax)
    else
        rbx = 8

if (rbx.d == *(arg1 + 0x2c))
    return 

int32_t rdx = *(arg1 + 0x28)
*(arg1 + 0x2c) = rbx.d
sub_1408390d0(arg1, rdx, rbx.d, 4)
