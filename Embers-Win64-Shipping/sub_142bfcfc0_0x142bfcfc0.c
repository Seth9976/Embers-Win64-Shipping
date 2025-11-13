// 函数: sub_142bfcfc0
// 地址: 0x142bfcfc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 4)
int64_t rax

if (rcx s< 0)
    rax.b = 0
    return rax

if (arg2 u<= rcx)
    rax.b = 1
    return rax

uint64_t rbx = zx.q(rcx)

do
    rbx = zx.q(rbx.d + 8 + (rbx.d u>> 1))
while (arg2 u>= rbx.d)

uint64_t rax_2

if (rbx.d s>= 0 && rbx.d u>= rcx && rbx.d u< 0x6666666)
    rax_2 = sub_140dc0f10(*(arg1 + 8), rbx * 0x28)
    
    if (rax_2 != 0)
        *(arg1 + 8) = rax_2
        rax_2.b = 1
        *(arg1 + 4) = rbx.d
        return rax_2

rax_2.b = 0
*(arg1 + 4) = 0xffffffff
return rax_2
