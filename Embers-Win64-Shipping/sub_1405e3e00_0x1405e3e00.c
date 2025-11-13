// 函数: sub_1405e3e00
// 地址: 0x1405e3e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg2 != 0)
    uint32_t rax = (sub_140a846a0(rbx << 5, 0) u>> 5).d
    
    if (rbx.d s> rax)
        rax = 0x7fffffff
    
    rbx = zx.q(rax)

if (rbx.d s<= arg3)
    *(arg1 + 0xc) = arg3
    return 

sub_140a30eb0(arg1, 0, rbx.d, 0x20, 0)
*(arg1 + 0xc) = rbx.d
