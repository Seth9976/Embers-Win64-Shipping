// 函数: sub_141507390
// 地址: 0x141507390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_c = (zx.d(arg3) << 4 | (zx.d(arg5) & 0xf)) << 0x18 | (arg4 & 0xffffff)
int64_t rax_2 = (*arg2).q
int64_t rcx_3 = (rax_2 u>> 0x21 ^ rax_2) * -0xae502812aa7333
int64_t r8_3 = (rcx_3 u>> 0x21 ^ rcx_3) * -0x3b314601e57a13ad

for (int32_t i = *(*(arg1 + 0x60) + (((r8_3 u>> 0x21 ^ r8_3) & zx.q(*(arg1 + 0x54))) << 2)); 
        i != 0xffffffff; i = *(*(arg1 + 0x68) + (zx.q(i) << 2)))
    if (*(*(arg1 + 0x70) + (sx.q(i) << 3)) == rax_2)
        return zx.q(i)

return 0xffffffff
