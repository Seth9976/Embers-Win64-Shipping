// 函数: sub_142a49310
// 地址: 0x142a49310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t r10 = *(arg4 + 8)
int32_t rax_1

if (r10 s< 0)
    rax_1 = *(arg4 + 0xc)
else
    rax_1 = sx.d(r10) s>> 5

int32_t rcx = arg5
int32_t rdx = 0

if (rcx s< 0)
    rcx = 0
else if (rcx s> rax_1)
    rcx = rax_1

if (arg6 s>= 0)
    int32_t rax_2 = rax_1 - rcx
    rdx = arg6
    
    if (arg6 s> rax_2)
        rdx = rax_2

void* r9

if ((r10.b & 2) == 0)
    r9 = *(arg4 + 0x18)
else
    r9 = arg4 + 0xa

return sub_142a49390(arg1, arg2, arg3, r9, rcx, rdx) __tailcall
