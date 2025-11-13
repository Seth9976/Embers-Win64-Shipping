// 函数: sub_1429a8180
// 地址: 0x1429a8180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 0x10)
void* r11 = *(rdi + 0x138)
int64_t rax
int64_t rdx
rdx:rax = muls.dp.q(0x4924924924924925, *(rdi + 0x140) - r11)
int64_t r14_1 = rdx s>> 4
int64_t r14_2 = r14_1 + (r14_1 u>> 0x3f)
uint64_t rax_4 = r14_2 u>> 1

if (r14_2 u> 4)
    r14_2 = rax_4

if (arg6 != 1)
    rax_4 = 0

void* r11_1 = r11 + rax_4 * 0x38
int32_t rcx = *(r11_1 + 0x34)
int32_t r8

if (arg2 s< 0)
    int32_t rax_11
    
    if (rcx s< 0)
        rax_11 = not.d(rcx) - arg2
    else
        rax_11 = rcx - arg2 - 1
    
    r8 = neg.d(divs.dp.d(sx.q(rax_11), rcx))
else
    r8 = divs.dp.d(sx.q(arg2), rcx)

if (arg2 != r8 * rcx)
    *arg4 = 0
    *arg5 = 0
    *arg3 = 0
    rcx = *(r11_1 + 0x34)
    rdi = *(arg1 + 0x10)

int32_t rax_17

if (arg2 s< 0)
    int32_t rax_20
    
    if (rcx s< 0)
        rax_20 = not.d(rcx) - arg2
    else
        rax_20 = rcx - arg2 - 1
    
    rax_17 = neg.d(divs.dp.d(sx.q(rax_20), rcx))
else
    rax_17 = divs.dp.d(sx.q(arg2), rcx)

int32_t rdx_9 = *(rdi + 0x84)
int32_t rcx_1 = *(r11_1 + 0x30)
int32_t r9

if (rdx_9 s< 0)
    int32_t rax_30
    
    if (rcx_1 s< 0)
        rax_30 = not.d(rdx_9) - rcx_1
    else
        rax_30 = rcx_1 - rdx_9 - 1
    
    r9 = neg.d(divs.dp.d(sx.q(rax_30), rcx_1))
else
    r9 = divs.dp.d(sx.q(rdx_9), rcx_1)

int32_t rdx_16 = *(rdi + 0x88)
int32_t r8_3

if (rdx_16 s< 0)
    int32_t rax_38
    
    if (rcx_1 s< 0)
        rax_38 = not.d(rdx_16) - rcx_1
    else
        rax_38 = rcx_1 - rdx_16 - 1
    
    r8_3 = neg.d(divs.dp.d(sx.q(rax_38), rcx_1))
else
    r8_3 = divs.dp.d(sx.q(rdx_16), rcx_1)

int64_t rcx_2 = sx.q(r9)
*arg3 = rcx_2 * *(r11_1 + 0x20) + *(r11_1 + 0x28) * sx.q(rax_17) + *r11_1
uint64_t result =
    zx.q((divu.dp.q(0:(((sx.q(r8_3) - rcx_2) * *(r11_1 + 0x20) + 2) u>> 1), r14_2) + 1).d) & 7
*arg4 = (divu.dp.q(0:(((sx.q(r8_3) - rcx_2) * *(r11_1 + 0x20) + 2) u>> 1), r14_2) + 1) u>> 3
*arg5 = result
return result
