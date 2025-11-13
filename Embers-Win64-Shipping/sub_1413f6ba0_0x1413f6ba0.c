// 函数: sub_1413f6ba0
// 地址: 0x1413f6ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg2 != 0)
    if (rbx.d u> 0x100)
        uint32_t rax = (sub_140a846a0(rbx << 6, 0) u>> 6).d
        
        if (rbx.d s> rax)
            rax = 0x7fffffff
        
        rbx = zx.q(rax)
    else
        rbx = 0x100

if (rbx.d s<= arg3)
    *(arg1 + 0x400c) = arg3
    return 

sub_1413a8620(arg1, 0, rbx.d, 0x40)
*(arg1 + 0x400c) = rbx.d
