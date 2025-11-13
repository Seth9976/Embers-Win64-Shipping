// 函数: sub_142c02e50
// 地址: 0x142c02e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = arg2

if (zx.w(*(arg1 + 2)) * 0x100 == neg.w(zx.w(*(arg1 + 3))))
    return zx.q(arg2)

if (arg2 u>= (zx.d(*(arg1 + 2)) << 8) + zx.d(*(arg1 + 3)))
    r11 = zx.d(*(arg1 + 3)) - 1 + (zx.d(*(arg1 + 2)) << 8)

uint32_t r9_1 = zx.d(*(arg1 + 1))
int32_t rdx = 0
int32_t i_1 = (r9_1 u>> 4 & 3) + 1
void* r8_1 = arg1 + 4 + zx.q(i_1 * r11)
int32_t i

do
    uint32_t rax_5 = zx.d(*r8_1)
    r8_1 += 1
    rdx = (rdx << 8) + rax_5
    i = i_1
    i_1 -= 1
while (i != 1)
char r9_2 = r9_1.b & 0xf
return (zx.q((1 << (r9_2 + 1)) - 1) & zx.q(rdx)) | zx.q(rdx u>> (r9_2 + 1) << 0x10)
