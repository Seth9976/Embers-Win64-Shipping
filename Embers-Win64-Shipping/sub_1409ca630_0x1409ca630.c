// 函数: sub_1409ca630
// 地址: 0x1409ca630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = *(arg1 + 0x20)
int64_t r14 = sx.q(arg2)
*(arg1 + 0x20) = rsi + 1

if (rsi + 1 s> *(arg1 + 0x24))
    sub_1405a4f90(arg1 + 0x18)

int64_t rbx_1 = r14 << 4
int64_t rdx_2 = *(arg1 + 0x18) + rbx_1
memmove(rdx_2 + 0x10, rdx_2, (rsi - r14.d) << 4)
int64_t rax_1 = *(arg1 + 0x18)
*(rbx_1 + rax_1) = 0
*(rbx_1 + rax_1 + 8) = 0
int64_t* rbx_2 = rbx_1 + *(arg1 + 0x18)
int32_t rdi = *(arg1 + 0xc)
rbx_2[1].d = 0

if (rdi s> *(rbx_2 + 0xc))
    sub_1405c5510(rbx_2, rdi)

return sub_1409c8c40(rbx_2, rdi - 1, arg1 + 0x28) __tailcall
