// 函数: sub_142634120
// 地址: 0x142634120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xc) = *arg2
*(arg1 + 0x10) = arg2[1]
int64_t rdi = sx.q(arg4)
*(arg1 + 0x14) = arg2[2]
int64_t result = memcpy(*(arg1 + 0x48), arg3, (rdi << 3).d)
*(arg1 + 0x40) &= 0xfffffff8
*(arg1 + 0x50) = rdi.d
return result
