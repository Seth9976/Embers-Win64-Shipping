// 函数: sub_140dbd1e0
// 地址: 0x140dbd1e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg2 != 0)
    if (rbx.d u> 0x64)
        uint32_t rax = (sub_140a846a0(rbx << 2, 0) u>> 2).d
        
        if (rbx.d s> rax)
            rax = 0x7fffffff
        
        rbx = zx.q(rax)
    else
        rbx = 0x64

if (rbx.d == *(arg1 + 0x19c))
    return 

int32_t rdx = *(arg1 + 0x198)
*(arg1 + 0x19c) = rbx.d
sub_140dbbfb0(arg1, rdx, rbx.d, 4)
