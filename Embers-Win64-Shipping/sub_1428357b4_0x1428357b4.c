// 函数: sub_1428357b4
// 地址: 0x1428357b4
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

strcpy(arg1, arg2)
*(arg1 + 0x40) = *(arg3 + 0x10)
int32_t rdx = *(arg2 + 0x18)
*(arg1 + 0x18) = rdx
int32_t rcx_1 = *(arg2 + 0x1c) + *(arg2 + 0x18)
*(arg1 + 0x1c) = rcx_1
*(arg1 + 0x20) = *(arg2 + 0x20) + *(arg2 + 0x18)
*(arg1 + 0x24) = *(arg2 + 0x24) + *(arg2 + 0x18)
*(arg1 + 0x28) = *(arg2 + 0x28)
*(arg1 + 0x2c) = zx.d(arg2[0x2c])
*(arg1 + 0x30) = sx.d(arg2[0x2d])
uint32_t rax_8 = zx.d(*(arg2 + 0x2e))
*(arg1 + 0x34) = rax_8

if (test_bit(rax_8, 0xf))
    *(arg1 + 0x38) = 0
    sub_142833a04(2, "Ignoring sample %s: can't use ROM samples", arg1)
    rcx_1 = *(arg1 + 0x1c)
    rdx = *(arg1 + 0x18)

if (rcx_1 - rdx u< 8)
    *(arg1 + 0x38) = 0
    sub_142833a04(2, "Ignoring sample %s: too few sample data points", arg1)

return 0
