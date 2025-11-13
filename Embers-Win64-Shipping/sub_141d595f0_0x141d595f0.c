// 函数: sub_141d595f0
// 地址: 0x141d595f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi

if (arg3 s>= 0)
    rdi = *(arg1 + 0x30)
    
    if (arg3 s< rdi)
        rdi = arg3
else
    rdi = 0

int32_t rbp = *(arg1 + 0x30)
*(arg1 + 0x30) = rbp + 1

if (rbp + 1 s> *(arg1 + 0x34))
    sub_1405a4d70(arg1 + 0x28)

int64_t rbx = sx.q(rdi) << 3
int64_t rdx_2 = *(arg1 + 0x28) + rbx
memmove(rdx_2 + 8, rdx_2, (rbp - rdi) << 3)
int64_t result = *(arg1 + 0x28)
*(rbx + result) = arg2
return result
