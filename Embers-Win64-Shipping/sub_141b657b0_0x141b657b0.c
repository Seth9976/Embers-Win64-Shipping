// 函数: sub_141b657b0
// 地址: 0x141b657b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg2 != 0)
    if (rbx.d u> 3)
        uint32_t rax = (sub_140a846a0(rbx << 3, 0) u>> 3).d
        
        if (rbx.d s> rax)
            rax = 0x7fffffff
        
        rbx = zx.q(rax)
    else
        rbx = 3

if (rbx.d == *(arg1 + 0x24))
    return 

int32_t rdx = *(arg1 + 0x20)
*(arg1 + 0x24) = rbx.d
sub_1413a8580(arg1, rdx, rbx.d, 8)
