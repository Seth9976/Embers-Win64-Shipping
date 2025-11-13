// 函数: sub_140cc2df0
// 地址: 0x140cc2df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x20)
int64_t rdi = sx.q(*(rbx + 0x18))
int32_t rax = (rdi + 1).d
*(rbx + 0x18) = rax

if (rax s> *(rbx + 0x1c))
    sub_1405a4d70(rbx + 0x10)

*(*(rbx + 0x10) + (rdi << 3)) = arg2
int64_t result
result.b = 1
return result
