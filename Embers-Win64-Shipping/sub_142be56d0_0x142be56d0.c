// 函数: sub_142be56d0
// 地址: 0x142be56d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8_2 = *(arg1 + 0x18)
int32_t rdx = arg2 - (zx.d(*(r8_2 + 6)) << 8 | zx.d(*(r8_2 + 7)))

if (rdx u>= (zx.d(*(r8_2 + 8)) << 8 | zx.d(*(r8_2 + 9))))
    return 0

void* r8_1 = r8_2 + 0xa + zx.q(rdx * 2)
return zx.q(*(r8_1 + 1)) | zx.q(zx.d(*r8_1) << 8)
