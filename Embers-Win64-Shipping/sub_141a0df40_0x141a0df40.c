// 函数: sub_141a0df40
// 地址: 0x141a0df40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = *(arg1 + 0x5e0)
void* rbx = arg2

if (rsi == 0)
    return 

int64_t rdi_1 = sx.q(*(arg2 + 0x48))
int32_t rax_1 = (rdi_1 + 1).d
*(arg2 + 0x48) = rax_1

if (rax_1 s> *(arg2 + 0x4c))
    sub_140809370(rbx, rdi_1.d)

void* rax = *(rbx + 0x40)

if (rax != 0)
    rbx = rax

*(rbx + (rdi_1 << 3)) = rsi
