// 函数: sub_141a2bb90
// 地址: 0x141a2bb90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = *(arg1 + 0x108)
void* rbx = arg1
int64_t rsi = sx.q(arg3)
int64_t rbp = sx.q(arg2)
int32_t rax = rdi + rsi.d
*(arg1 + 0x108) = rax

if (rax s> *(arg1 + 0x10c))
    sub_141a63dd0(arg1, rdi)

void* rax_1 = *(rbx + 0x100)

if (rax_1 != 0)
    rbx = rax_1

void* rbx_1 = rbx + (rbp << 5)
return memmove((rsi << 5) + rbx_1, rbx_1, (rdi - rbp.d) << 5) __tailcall
