// 函数: sub_142b3fb40
// 地址: 0x142b3fb40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rax = *(arg3 + 8)
int32_t r10_1

if (rax s< 0)
    r10_1 = *(arg3 + 0xc)
else
    r10_1 = sx.d(rax) s>> 5

if (r10_1 == 0)
    return 0

int32_t rcx_1

if (rax s< 0)
    rcx_1 = *(arg3 + 0xc)
else
    rcx_1 = sx.d(rax) s>> 5

if (rcx_1 != 1)
    int32_t rcx_7
    
    if (rax s< 0)
        rcx_7 = *(arg3 + 0xc)
    else
        rcx_7 = sx.d(rax) s>> 5
    
    return sub_142b3fc00(arg1, arg2, arg3, 0, rcx_7, arg4, arg5)

int32_t rcx_3

if (rax s< 0)
    rcx_3 = *(arg3 + 0xc)
else
    rcx_3 = sx.d(rax) s>> 5

int16_t rax_2

if (rcx_3 == 0)
    rax_2 = -1
else if ((rax.b & 2) == 0)
    rax_2 = **(arg3 + 0x18)
else
    rax_2 = *(arg3 + 0xa)

return sub_142b3fd70(arg1, arg2, zx.d(rax_2), arg4, arg5) __tailcall
