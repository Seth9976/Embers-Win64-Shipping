// 函数: sub_14149c8a0
// 地址: 0x14149c8a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg2 != 0)
    if (rbx.d u> 6)
        uint32_t rax = (sub_140a846a0(rbx << 4, 0) u>> 4).d
        
        if (rbx.d s> rax)
            rax = 0x7fffffff
        
        rbx = zx.q(rax)
    else
        rbx = 6

if (rbx.d == *(arg1 + 0x74))
    return 

int32_t rdx = *(arg1 + 0x70)
*(arg1 + 0x74) = rbx.d
sub_14149bbd0(arg1, rdx, rbx.d, 0x10)
