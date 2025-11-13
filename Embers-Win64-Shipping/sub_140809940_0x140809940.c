// 函数: sub_140809940
// 地址: 0x140809940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg2 != 0)
    if (rbx.d u> 0xc)
        uint32_t rax = (sub_140a846a0(rbx << 3, 0) u>> 3).d
        
        if (rbx.d s> rax)
            rax = 0x7fffffff
        
        rbx = zx.q(rax)
    else
        rbx = 0xc

if (rbx.d == *(arg1 + 0x6c))
    return 

int32_t rdx = *(arg1 + 0x68)
*(arg1 + 0x6c) = rbx.d
sub_140808d90(arg1, rdx, rbx.d, 8)
