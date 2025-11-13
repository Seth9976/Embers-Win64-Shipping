// 函数: sub_1408e7e50
// 地址: 0x1408e7e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2[1].d)

if (rdi.d != 0)
    int32_t rax_1 = *(arg1 + 0x38)
    int32_t rdx = rax_1 + rdi.d
    
    if (rdx s> *(arg1 + 0x3c))
        sub_1405a52a0(arg1 + 0x30, rdx)
        rax_1 = *(arg1 + 0x38)
    
    memcpy((sx.q(rax_1) << 6) + *(arg1 + 0x30), *arg2, (rdi << 6).d)
    *(arg1 + 0x38) += rdi.d

int64_t rdi_1 = sx.q(arg3[1].d)

if (rdi_1.d == 0)
    return 

int32_t rax_2 = *(arg1 + 0x48)
int32_t rdx_2 = rax_2 + rdi_1.d

if (rdx_2 s> *(arg1 + 0x4c))
    sub_1405dadb0(arg1 + 0x40, rdx_2)
    rax_2 = *(arg1 + 0x48)

memcpy(*(arg1 + 0x40) + (sx.q(rax_2) << 2), *arg3, (rdi_1 << 2).d)
*(arg1 + 0x48) += rdi_1.d
