// 函数: sub_141f22810
// 地址: 0x141f22810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg2 != 0)
    if (rbx.d u> 3)
        int64_t rax_2
        int64_t rdx
        rdx:rax_2 = mulu.dp.q(-0x15f15f15f15f15f1, sub_140a846a0(rbx * 0x8c, 0))
        uint32_t rdx_1 = (rdx u>> 7).d
        
        if (rbx.d s> rdx_1)
            rdx_1 = 0x7fffffff
        
        rbx = zx.q(rdx_1)
    else
        rbx = 3

if (rbx.d s<= arg3)
    *(arg1 + 0x1b4) = arg3
    return 

sub_141f22760(arg1, 0, rbx.d, 0x8c)
*(arg1 + 0x1b4) = rbx.d
