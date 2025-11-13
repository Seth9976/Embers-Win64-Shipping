// 函数: sub_141e295c0
// 地址: 0x141e295c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = 0
void* rsi_1 = *arg1 + 0x4a0
arg1[3] = rsi_1
int32_t rdi = *(rsi_1 + 8)
arg1[2].d = 0

if (rdi s> *(arg1 + 0x14))
    sub_141acba60(&arg1[1], rdi)
    rdx = arg1[2].d

int32_t rax = rdx + rdi
arg1[2].d = rax

if (rax s> *(arg1 + 0x14))
    sub_141acb8e0(&arg1[1], rdx)

return sub_141abd4c0(&arg1[4], rsi_1) __tailcall
