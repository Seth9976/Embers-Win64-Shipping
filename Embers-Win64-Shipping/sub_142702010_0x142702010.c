// 函数: sub_142702010
// 地址: 0x142702010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char var_18 = *arg2
int64_t var_14 = *(arg2 + 4)
int32_t rax_2 = sub_1426f12a0(arg1 + 0xb0, &var_18)

if (rax_2 == 0xffffffff)
    return 0

return *(*(arg1 + 0xb0) + (sx.q(rax_2) << 3))
