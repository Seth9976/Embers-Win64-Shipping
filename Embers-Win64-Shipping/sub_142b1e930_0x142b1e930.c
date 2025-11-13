// 函数: sub_142b1e930
// 地址: 0x142b1e930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 8) = *(arg2 + 0x20)
*(arg1 + 0xa) = *(arg2 + 0x24)
*(arg1 + 0xc) = *(arg2 + 0x48)
*(arg1 + 0xe) = *(arg2 + 0x28)
*(arg1 + 0x10) = *(arg2 + 0x38)
*(arg1 + 0x12) = *(arg2 + 0x2c)
*(arg1 + 0x14) = *(arg2 + 0x3c)
*(arg1 + 0x16) = *(arg2 + 0x40)
*(arg1 + 0x18) = *(arg2 + 0x44)
*(arg1 + 0x1a) = *(arg2 + 0x30)
uint32_t rcx = zx.d(*(arg2 + 0x34))
*(arg1 + 0x1e) = rcx.w
*(arg1 + 0x20) = arg3
*(arg1 + 0x1c) = (rcx.w u>> 3) - 0x41
*(arg1 + 0x28) = arg4
*(arg1 + 0x30) = arg4 + (sx.q(0xfc00 - rcx) s>> 1 << 1)
*(arg1 + 0x38) = arg5
return arg5
