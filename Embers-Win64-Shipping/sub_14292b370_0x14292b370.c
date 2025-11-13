// 函数: sub_14292b370
// 地址: 0x14292b370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11_3 = arg3 s/ 0x15180 + arg2
int32_t rbx_2 = arg3 s% 0x15180 + (*(arg1 + 8) * 0x3c + *(arg1 + 4)) * 0x3c + *arg1

if (rbx_2 s>= 0x15180)
    r11_3 += 1
    rbx_2 -= 0x15180
else if (rbx_2 s< 0)
    r11_3 -= 1
    rbx_2 += 0x15180

int32_t r8_1 = *(arg1 + 0x10) + 1
uint64_t rdx_3 = zx.q((r8_1 - 0xe) s/ 0xc)
int32_t r9_1 = *(arg1 + 0x14) + rdx_3.d
int32_t temp8
int32_t temp9
temp8:temp9 = sx.q((r9_1 + 0x1a90) s/ 0x64 * 3)
int32_t temp10
int32_t temp11
temp10:temp11 = sx.q((r9_1 + 0x1a2c) * 0x5b5)
int32_t rax_20 = ((temp11 + (temp10 & 3)) s>> 2) - 0x7d4b
    + (r8_1 - ((rdx_3 * 3).d << 2) - 2) * 0x16f s/ 0xc - ((temp9 + (temp8 & 3)) s>> 2)
    + *(arg1 + 0xc)

if (rax_20 + r11_3 s< 0)
    return 0

*arg4 = rax_20 + r11_3
*arg5 = rbx_2
return 1
