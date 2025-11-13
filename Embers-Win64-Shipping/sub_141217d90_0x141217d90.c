// 函数: sub_141217d90
// 地址: 0x141217d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg3 == 0xffff)
    return 0xffff

int64_t* rcx = data_143f0f180
int64_t arg_18
(*(*rcx + 0xf8))(rcx, &arg_18, arg4, &data_143e83080, 0, 1)
int64_t rbp_1 = arg_18
uint32_t r14_1 = zx.d(*arg3)
void*** rcx_3 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
int64_t rsi_1 = *arg2
void* rax_2 = &rcx_3[5]

if (rax_2 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x30)
    rcx_3 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_2 = &rcx_3[5]

*(arg1 + 0x30) = rax_2
void**** rax_3 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_3 = rcx_3
*(arg1 + 8) = &rcx_3[1]
rcx_3[1] = 0
*rcx_3 = &data_142f11618
rcx_3[2] = rsi_1
rcx_3[3].d = r14_1
rcx_3[4] = rbp_1
return sub_1405d1550(&arg_18)
