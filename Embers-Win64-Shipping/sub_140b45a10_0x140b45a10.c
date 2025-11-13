// 函数: sub_140b45a10
// 地址: 0x140b45a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg2 != 0)
    if (rbx.d u> 0x10)
        uint32_t rax = (sub_140a846a0(rbx << 5, 0) u>> 5).d
        
        if (rbx.d s> rax)
            rax = 0x7fffffff
        
        rbx = zx.q(rax)
    else
        rbx = 0x10

if (rbx.d == *(arg1 + 0x20c))
    return 

int32_t rdx = *(arg1 + 0x208)
*(arg1 + 0x20c) = rbx.d
sub_1406c79f0(arg1, rdx, rbx.d, 0x20)
