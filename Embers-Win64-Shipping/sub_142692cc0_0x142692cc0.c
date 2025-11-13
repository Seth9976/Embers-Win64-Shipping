// 函数: sub_142692cc0
// 地址: 0x142692cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg2 != 0)
    if (rbx.d u> 6)
        int64_t rax_2
        int64_t rdx
        rdx:rax_2 = mulu.dp.q(-0x5555555555555555, sub_140a846a0(rbx * 0xc, 0))
        uint32_t rdx_1 = (rdx u>> 3).d
        
        if (rbx.d s> rdx_1)
            rdx_1 = 0x7fffffff
        
        rbx = zx.q(rdx_1)
    else
        rbx = 6

if (rbx.d s<= arg3)
    *(arg1 + 0x54) = arg3
    return 

sub_142692c20(arg1, 0, rbx.d, 0xc)
*(arg1 + 0x54) = rbx.d
