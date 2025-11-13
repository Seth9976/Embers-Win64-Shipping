// 函数: sub_14199f590
// 地址: 0x14199f590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x48)
int32_t var_14 = rax
int32_t var_10 = rax
int32_t var_c = rax
void*** rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
int64_t rsi = *(*(arg1 + 0x40) + 0x10)
void* rax_2 = &rcx_2[5]

if (rax_2 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_2 = &rcx_2[5]

*(arg2 + 0x30) = rax_2
int64_t* rax_3 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_3 = rcx_2
*(arg2 + 8) = &rcx_2[1]
rcx_2[1] = 0
rcx_2[2] = rsi
*rcx_2 = &data_142f115d8
*(rcx_2 + 0x18) = rax.o
return &data_142f115d8
