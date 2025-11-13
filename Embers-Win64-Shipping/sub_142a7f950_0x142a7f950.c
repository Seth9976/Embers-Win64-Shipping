// 函数: sub_142a7f950
// 地址: 0x142a7f950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x1a0) == 0)
    int64_t rax_1 = sub_142a7dd00(0x50)
    *(arg1 + 0x1b0) = rax_1
    
    if (rax_1 == 0)
        *(arg1 + 0x1ac) = 7
        return rax_1
    
    *(arg1 + 0x1a0) = 0xa

int32_t rax_2 = *(arg1 + 0x1a0)

if (*(arg1 + 0x1a4) s< rax_2)
    goto label_142a7fa14

int64_t rdi_1 = *(arg1 + 0x1b0)
void* rax_4 = sub_142a7dd30(rdi_1, sx.q(rax_2 * 2) << 3)
*(arg1 + 0x1b0) = rax_4

if (rax_4 != 0)
    *(arg1 + 0x1a0) *= 2
label_142a7fa14:
    int32_t r8
    int32_t arg_c = r8
    rax_4 = arg2.q
    *(*(arg1 + 0x1b0) + (sx.q(*(arg1 + 0x1a4)) << 3)) = rax_4
    *(arg1 + 0x1a4) += 1
else
    *(arg1 + 0x1b0) = rdi_1
    *(arg1 + 0x1ac) = 7

return rax_4
