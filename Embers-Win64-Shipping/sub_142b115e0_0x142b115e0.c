// 函数: sub_142b115e0
// 地址: 0x142b115e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdx = arg5

if (*rdx s> 0)
    return 

int16_t rax_1 = *(arg2 + 8)
int32_t rax

if (rax_1 s< 0)
    rax = *(arg2 + 0xc)
else
    rax = sx.d(rax_1) s>> 5

if (rax s> 0xffff)
    *rdx = 8
    return 

int16_t rcx = *(arg4 + 8)
int32_t rcx_2

if (rcx s< 0)
    rcx_2 = *(arg4 + 0xc)
else
    rcx_2 = sx.d(rcx) s>> 5

*arg1 = rcx_2
arg5.w = rax.w
sub_142a48d70(arg4, &arg5, 0, 1)
arg1[1] = arg3
int16_t rax_3 = *(arg2 + 8)
int32_t r9_1

if (rax_3 s< 0)
    r9_1 = *(arg2 + 0xc)
else
    r9_1 = sx.d(rax_3) s>> 5

sub_142a48d00(arg4, arg2, 0, r9_1)
