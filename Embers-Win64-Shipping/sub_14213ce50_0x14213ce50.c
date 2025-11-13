// 函数: sub_14213ce50
// 地址: 0x14213ce50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x408))
void* rbx = arg1
int32_t rax = (rdi + 1).d
*(arg1 + 0x408) = rax

if (rax s> *(arg1 + 0x40c))
    sub_142152d60(arg1, rdi.d)

void* rcx = *(rbx + 0x400)

if (rcx != 0)
    rbx = rcx

return (rdi << 4) + rbx
