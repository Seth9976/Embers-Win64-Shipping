// 函数: sub_140f15240
// 地址: 0x140f15240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg2 != 0)
    if (rbx.d u> 3)
        uint32_t rax = (sub_140a846a0(rbx << 4, 0) u>> 4).d
        
        if (rbx.d s> rax)
            rax = 0x7fffffff
        
        rbx = zx.q(rax)
    else
        rbx = 3

if (rbx.d == *(arg1 + 0x3c))
    return 

int32_t rdx = *(arg1 + 0x38)
*(arg1 + 0x3c) = rbx.d
sub_140f15080(arg1, rdx, rbx.d, 0x10)
