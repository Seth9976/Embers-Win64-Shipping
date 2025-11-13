// 函数: sub_142a48d00
// 地址: 0x142a48d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 == 0)
    return arg1

int16_t rcx = *(arg2 + 8)
int32_t rax_2

if (rcx s< 0)
    rax_2 = *(arg2 + 0xc)
else
    rax_2 = sx.d(rcx) s>> 5

int32_t r9 = 0

if (arg3 s< 0)
    arg3 = 0
else if (arg3 s> rax_2)
    arg3 = rax_2

if (arg4 s>= 0)
    int32_t rax_3 = rax_2 - arg3
    r9 = arg4
    
    if (arg4 s> rax_3)
        r9 = rax_3

if ((rcx.b & 2) == 0)
    return sub_142a48d70(arg1, *(arg2 + 0x18), arg3, r9) __tailcall

return sub_142a48d70(arg1, arg2 + 0xa, arg3, r9) __tailcall
