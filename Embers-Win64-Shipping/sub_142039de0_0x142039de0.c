// 函数: sub_142039de0
// 地址: 0x142039de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(*(arg1 + 0x240))
int32_t r9 = 0

if (rax.d s<= 0)
    return rax

int64_t rax_1 = 0
int64_t rcx = *(arg1 + 0x238)

while (*(rcx + (rax_1 << 3)) != arg2)
    r9 += 1
    rax_1 += 1
    
    if (rax_1 s>= rax)
        return rax_1

int32_t rdx = *(arg1 + 0x240)
int32_t rax_3 = rdx - r9

if (rax_3 != 1)
    memmove(rcx + (sx.q(r9) << 3), rcx + (sx.q(r9 + 1) << 3), (rax_3 - 1) << 3)
    rdx = *(arg1 + 0x240)

*(arg1 + 0x240) = rdx - 1
return sub_1405c53d0(arg1 + 0x238) __tailcall
