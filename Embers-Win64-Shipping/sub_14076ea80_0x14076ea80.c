// 函数: sub_14076ea80
// 地址: 0x14076ea80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t var_48[0x4][0x4]
uint32_t (* rax)[0x4] = sub_140631b10(arg1 + 0x80, &var_48)
*(arg1 + 0x1b0) = *rax
*(arg1 + 0x1c0) = rax[1]
*(arg1 + 0x1d0) = rax[2]
int64_t rax_1 = *(arg1 + 0x150)
*(arg1 + 0x1e0) = rax[3]
jump(*(rax_1 + 0x30))
