// 函数: sub_141d35a40
// 地址: 0x141d35a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = *(*(*arg1 + 0x420) + (sx.q(*arg2) << 3))
int32_t rax = 0

if (0 == *(r9 + 0x16c))
    *(r9 + 0x16c) = 0
else
    rax = *(r9 + 0x16c)

*(r9 + 0x160) += 1
int64_t rdx = sx.q(rax)
*(r9 + (rdx << 2) + 0x164) = *(r9 + 0x160)
int64_t result = rdx * 6
*(r9 + (result << 3) + 0x170) = *(r9 + 0x130)
*(r9 + (result << 3) + 0x180) = *(r9 + 0x140)
*(r9 + (result << 3) + 0x190) = *(r9 + 0x150)
return result
