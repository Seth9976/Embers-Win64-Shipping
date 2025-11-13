// 函数: sub_1410f6640
// 地址: 0x1410f6640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax = &rcx_2[2]

if (rax u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x18)
    rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax = &rcx_2[2]

*(arg2 + 0x30) = rax
int64_t* rax_1 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_1 = rcx_2
*(arg2 + 8) = &rcx_2[1]
rcx_2[1] = 0
*rcx_2 = &data_142dd5b50
return &data_142dd5b50
