// 函数: sub_14278ea50
// 地址: 0x14278ea50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1
int64_t rdi = sx.q(*(rbx + 0x1d8))
int32_t rax = (rdi + 1).d
*(rbx + 0x1d8) = rax

if (rax s> *(rbx + 0x1dc))
    sub_14090a6a0(rbx + 0x1d0)

return sub_141d2d5a0(rdi * 0x60 + *(rbx + 0x1d0), &arg1[1]) __tailcall
