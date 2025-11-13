// 函数: sub_141b651d0
// 地址: 0x141b651d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg2 != 0)
    if (rbx.d u> 2)
        int64_t rax_2
        int64_t rdx
        rdx:rax_2 = mulu.dp.q(-0x5555555555555555, sub_140a846a0(rbx * 0x30, 0))
        uint32_t rdx_1 = (rdx u>> 5).d
        
        if (rbx.d s> rdx_1)
            rdx_1 = 0x7fffffff
        
        rbx = zx.q(rdx_1)
    else
        rbx = 2

if (rbx.d s<= arg3)
    *(arg1 + 0x6c) = arg3
    return 

sub_141b65130(arg1, 0, rbx.d, 0x30)
*(arg1 + 0x6c) = rbx.d
