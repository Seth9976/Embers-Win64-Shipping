// 函数: sub_142c36e20
// 地址: 0x142c36e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 4)
int64_t rax

if (rcx s< 0)
    rax.b = 0
    return rax

if (arg2 u<= rcx)
    rax.b = 1
    return rax

int32_t rbx = rcx

do
    rbx = rbx + 8 + (rbx u>> 1)
while (arg2 u>= rbx)

uint64_t rax_2

if (rbx s>= 0 && rbx u>= rcx && rbx u< 0x9249249)
    rax_2 = sub_140dc0f10(*(arg1 + 8), zx.q(rbx) * 0x1c)
    
    if (rax_2 != 0)
        *(arg1 + 8) = rax_2
        rax_2.b = 1
        *(arg1 + 4) = rbx
        return rax_2

rax_2.b = 0
*(arg1 + 4) = 0xffffffff
return rax_2
