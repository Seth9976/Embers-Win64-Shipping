// 函数: sub_142152f20
// 地址: 0x142152f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg2 != 0)
    int64_t rax_2
    int64_t rdx
    rdx:rax_2 = mulu.dp.q(-0x1c71c71c71c71c71, sub_140a846a0(rbx * 0x24, 0))
    uint32_t rdx_1 = (rdx u>> 5).d
    
    if (rbx.d s> rdx_1)
        rdx_1 = 0x7fffffff
    
    rbx = zx.q(rdx_1)

if (rbx.d == *(arg1 + 0xc))
    return 

uint64_t rdx_2 = zx.q(arg1[1].d)
*(arg1 + 0xc) = rbx.d
sub_140a30eb0(arg1, rdx_2, rbx.d, 0x24, 0)
