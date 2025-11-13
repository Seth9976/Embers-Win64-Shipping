// 函数: sub_14037859c
// 地址: 0x14037859c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = 1

if (arg1[7] != 0x20)
    r9 = 0

if (*arg1 == 0xfffe && arg1[9] != 0x20 && arg1[9] != 0)
    r9 = 0

uint32_t r8 = zx.d(arg1[6])
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(zx.d(arg1[7]) * zx.d(arg1[1]))

if (r8 != (temp1 + (temp0 & 7)) s>> 3)
    r9 = 0

if (*(arg1 + 8) != r8 * *(arg1 + 4))
    r9 = 0

return zx.q(r9)
