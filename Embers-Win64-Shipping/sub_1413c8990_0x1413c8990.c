// 函数: sub_1413c8990
// 地址: 0x1413c8990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1
int64_t rdi = sx.q(*(rbx + 0x1148))
int32_t rax = (rdi + 1).d
*(rbx + 0x1148) = rax

if (rax s> *(rbx + 0x114c))
    sub_1405a4d70(rbx + 0x1140)

*(*(rbx + 0x1140) + (rdi << 3)) = arg1[1]
void* rdx_2 = *arg1
return sub_141239530(rdx_2 + 0x1150, rdx_2, arg1[1]) __tailcall
