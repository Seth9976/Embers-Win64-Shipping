// 函数: sub_141fdaba0
// 地址: 0x141fdaba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2[1].d)
void* rbx = *(arg1 + 8)

if (rdi.d == 0)
    return 

int32_t rax_1 = *(rbx + 0x28)
int32_t rdx = rax_1 + rdi.d

if (rdx s> *(rbx + 0x2c))
    sub_1405dadb0(rbx + 0x20, rdx)
    rax_1 = *(rbx + 0x28)

memcpy(*(rbx + 0x20) + (sx.q(rax_1) << 2), *arg2, (rdi << 2).d)
*(rbx + 0x28) += rdi.d
