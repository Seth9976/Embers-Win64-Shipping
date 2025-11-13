// 函数: sub_142b5f9f0
// 地址: 0x142b5f9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg4 + 8) & 1) != 0)
    return not.b(*(arg1 + 8)) & 1

int16_t rdx = *(arg4 + 8)
int32_t rax_2

if (rdx s< 0)
    rax_2 = *(arg4 + 0xc)
else
    rax_2 = sx.d(rdx) s>> 5

int32_t rcx = arg5
int32_t r8 = 0

if (rcx s< 0)
    rcx = 0
else if (rcx s> rax_2)
    rcx = rax_2

if (arg6 s>= 0)
    int32_t rax_3 = rax_2 - rcx
    r8 = arg6
    
    if (arg6 s> rax_3)
        r8 = rax_3

void* r9

if ((rdx.b & 2) == 0)
    r9 = *(arg4 + 0x18)
else
    r9 = arg4 + 0xa

return sub_142a48fb0(arg1, arg2, arg3, r9, rcx, r8) __tailcall
