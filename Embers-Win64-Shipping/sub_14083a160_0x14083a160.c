// 函数: sub_14083a160
// 地址: 0x14083a160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg2 != 0)
    if (rbx.d u> 1)
        int64_t rax_2
        int64_t rdx
        rdx:rax_2 = mulu.dp.q(0x4ec4ec4ec4ec4ec5, sub_140a846a0(rbx * 0x68, 0))
        uint32_t rdx_1 = (rdx u>> 5).d
        
        if (rbx.d s> rdx_1)
            rdx_1 = 0x7fffffff
        
        rbx = zx.q(rdx_1)
    else
        rbx = 1

if (rbx.d s<= arg3)
    *(arg1 + 0x74) = arg3
    return 

sub_140839310(arg1, 0, rbx.d, 0x68)
*(arg1 + 0x74) = rbx.d
