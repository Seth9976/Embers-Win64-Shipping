// 函数: sub_141034c30
// 地址: 0x141034c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(*(*(*(arg2 + 8) + 0x10) + 0x20) + 0x4e8)
int64_t r8_2

if (sub_140a80f10() == 0)
    r8_2 = *(rbx + 0x38)
else
    r8_2 = *(rbx + 0x40) + 1

if (*(arg2 + 0x20) u>= r8_2)
    r8_2 = *(arg2 + 0x20)

*(arg2 + 0x20) = r8_2
int64_t rdi_1 = sx.q(*(arg1 + 0x30))
int32_t rax_3 = (rdi_1 + 1).d
*(arg1 + 0x30) = rax_3

if (rax_3 s> *(arg1 + 0x34))
    sub_1405a4d70(arg1 + 0x28)

int64_t result = *(arg1 + 0x28)
*(result + (rdi_1 << 3)) = arg2
return result
