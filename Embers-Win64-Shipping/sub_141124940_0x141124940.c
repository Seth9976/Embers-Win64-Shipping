// 函数: sub_141124940
// 地址: 0x141124940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rax = zx.d(*(arg1 + 0x14))
uint32_t r11 = zx.d(*(arg1 + 0x1c))
uint32_t r10 = zx.d(*(arg1 + 0xc))
uint32_t r9 = zx.d(*(arg1 + 4))
int64_t rbp = sx.q(arg3[1].d)

if (rax u>= r11)
    r11 = rax

if (r9 u>= r10)
    r10 = r9

if (r10 u>= r11)
    r11 = r10

int32_t rax_2 = (rbp + 1).d + r11
arg3[1].d = rax_2

if (rax_2 s> *(arg3 + 0xc))
    sub_1405a4d70(arg3)

int64_t result = memset(*arg3 + (rbp << 3), 0, zx.q(r11 + 1) << 3)

if (*(arg1 + 6) u> 0)
    result = *(arg2 + 0x18)
    *(*arg3 + (zx.q(*(arg1 + 4)) << 3)) = result

if (*(arg1 + 0xe) u> 0)
    result = *(arg2 + 0x58)
    *(*arg3 + (zx.q(*(arg1 + 0xc)) << 3)) = result

if (*(arg1 + 0x16) u> 0)
    result = *(arg2 + 0x38)
    *(*arg3 + (zx.q(*(arg1 + 0x14)) << 3)) = result

if (*(arg1 + 0x1e) u> 0)
    result = *(arg2 + 0x78)
    *(*arg3 + (zx.q(*(arg1 + 0x1c)) << 3)) = result

return result
