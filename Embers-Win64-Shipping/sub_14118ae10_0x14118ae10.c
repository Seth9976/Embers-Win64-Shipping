// 函数: sub_14118ae10
// 地址: 0x14118ae10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1
int64_t rdi = sx.q(*(rbx + 0x1d68))
int32_t rax = (rdi + 1).d
*(rbx + 0x1d68) = rax

if (rax s> *(rbx + 0x1d6c))
    sub_1405a4d70(rbx + 0x1d60)

*(*(rbx + 0x1d60) + (rdi << 3)) = arg1[1]
jump(**arg1[1])
