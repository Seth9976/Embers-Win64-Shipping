// 函数: sub_142b8be70
// 地址: 0x142b8be70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = arg1[3]
int32_t rdx = 0x7fffffff

if (arg3 s>= 0)
    rdx = arg3

if (r9 == 0)
    int16_t rax_4 = *(arg2 + 8)
    int32_t r8_4
    
    if (rax_4 s< 0)
        r8_4 = *(arg2 + 0xc)
    else
        r8_4 = sx.d(rax_4) s>> 5
    
    sub_142a49310(arg2, 0, r8_4, *arg1, *(arg1[1] + 8), rdx)
    return arg2

int16_t rax = *(arg2 + 8)
int32_t r10 = arg1[4].d

if (rax s< 0)
    sub_142a49310(arg2, 0, *(arg2 + 0xc), r9, r10, rdx)
    return arg2

sub_142a49310(arg2, 0, sx.d(rax) s>> 5, r9, r10, rdx)
return arg2
