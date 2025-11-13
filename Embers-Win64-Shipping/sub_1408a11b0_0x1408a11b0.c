// 函数: sub_1408a11b0
// 地址: 0x1408a11b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = **(arg1 + 0x20)
int64_t* rax_1 = *(arg1 + 0x40)
int64_t rdi_2 = (*rax_1 - rdx) s>> 1

if (rdi_2 s> 0)
    *(arg1 + 0x78)
    int64_t rax_2 = sub_14089bb30(arg1 + 0x70, rdx, rdi_2)
    int64_t rcx_1 = *(arg1 + 0x80)
    
    if (rax_2 == rdi_2)
        int32_t rdx_2 = (*(arg1 + 0x88)).d
        **(arg1 + 0x20) = rcx_1
        **(arg1 + 0x40) = rcx_1
        int32_t* rax_5 = *(arg1 + 0x58)
        *rax_5 = rdx_2
        return rax_5
    
    int64_t rdx_3 = rcx_1 + (rax_2 << 1)
    int64_t r9_2 = **(arg1 + 0x40)
    int32_t r8_4 = ((rcx_1 + (*(arg1 + 0x88) << 1) - rdx_3) s>> 1).d
    **(arg1 + 0x20) = rdx_3
    **(arg1 + 0x40) = rdx_3
    **(arg1 + 0x58) = r8_4
    int32_t* rax_12 = *(arg1 + 0x58)
    int32_t r9_4 = ((r9_2 - **(arg1 + 0x40)) s>> 1).d
    *rax_12 -= r9_4
    void** rcx_2 = *(arg1 + 0x40)
    rax_1 = sx.q(r9_4) * 2
    *rcx_2 += rax_1

return rax_1
