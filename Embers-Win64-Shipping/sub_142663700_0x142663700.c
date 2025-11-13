// 函数: sub_142663700
// 地址: 0x142663700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x3f8) & 4) == 0)
    int64_t* rcx_4 = *(arg1 + 0x2e0)
    
    if (rcx_4 != 0)
        jump(*(*rcx_4 + 0x30))
    
    return 

int64_t rdi_1 = sx.q(arg2[1].d)

if (rdi_1.d == 0)
    return 

int32_t rax_1 = *(arg1 + 0x2f8)
int32_t rdx = rax_1 + rdi_1.d

if (rdx s> *(arg1 + 0x2fc))
    sub_1405a51b0(arg1 + 0x2f0, rdx)
    rax_1 = *(arg1 + 0x2f8)

memcpy((sx.q(rax_1) << 5) + *(arg1 + 0x2f0), *arg2, (rdi_1 << 5).d)
*(arg1 + 0x2f8) += rdi_1.d
