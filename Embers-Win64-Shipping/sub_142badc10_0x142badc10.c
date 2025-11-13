// 函数: sub_142badc10
// 地址: 0x142badc10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rdx = *(arg1 + 0x120)

if (&rdx[0xa] u> *(arg1 + 0x128))
    return 0x14

*(arg1 + 0x34) = zx.w(*rdx) << 8 | zx.w(rdx[1])
*(arg1 + 0x38) = sx.d(zx.w(rdx[2]) << 8) | zx.d(rdx[3])
*(arg1 + 0x3c) = sx.d(zx.w(rdx[4]) << 8) | zx.d(rdx[5])
*(arg1 + 0x40) = sx.d(zx.w(rdx[6]) << 8) | zx.d(rdx[7])
*(arg1 + 0x44) = sx.d(zx.w(rdx[8]) << 8) | zx.d(rdx[9])
*(arg1 + 0x120) = &rdx[0xa]
return 0
