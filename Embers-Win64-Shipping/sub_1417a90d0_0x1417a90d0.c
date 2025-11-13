// 函数: sub_1417a90d0
// 地址: 0x1417a90d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = *arg3
int32_t rax = 0
int32_t r9 = *(arg1 + 0x18)
int32_t r9_1

if (r10 s< r9)
    r9_1 = 0
    
    if (r10 s>= 0)
        r9_1 = r10
else
    r9_1 = r9 - 1

*arg2 = r9_1
int32_t r8 = arg3[1]
int32_t rcx = *(arg1 + 0x1c)
int32_t rcx_1

if (r8 s< rcx)
    rcx_1 = 0
    
    if (r8 s>= 0)
        rcx_1 = r8
else
    rcx_1 = rcx - 1

arg2[1] = rcx_1
int32_t rcx_2 = arg3[2]
int32_t r8_1 = *(arg1 + 0x20)

if (rcx_2 s>= r8_1)
    arg2[2] = r8_1 - 1
    return arg2

if (rcx_2 s>= 0)
    rax = rcx_2

arg2[2] = rax
return arg2
