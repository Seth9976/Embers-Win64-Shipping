// 函数: sub_142a49b10
// 地址: 0x142a49b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = 0

if (arg2 s>= 0)
    int16_t rax_1 = *(arg1 + 8)
    int32_t r9_1
    
    if (rax_1 s< 0)
        r9_1 = *(arg1 + 0xc)
    else
        r9_1 = sx.d(rax_1) s>> 5
    
    if (arg2 s> r9_1)
        if (rax_1 s< 0)
            arg2 = *(arg1 + 0xc)
        else
            arg2 = sx.d(rax_1) s>> 5
else
    arg2 = 0

if (arg3 s>= 0)
    int16_t rax_2 = *(arg1 + 8)
    int32_t r9_3
    
    if (rax_2 s< 0)
        r9_3 = *(arg1 + 0xc)
    else
        r9_3 = sx.d(rax_2) s>> 5
    
    if (arg3 s> r9_3)
        if (rax_2 s< 0)
            arg3 = *(arg1 + 0xc)
        else
            arg3 = sx.d(rax_2) s>> 5
else
    arg3 = 0

int16_t r9_4 = *(arg1 + 8)
int32_t r8_1 = arg3 - arg2
int32_t rax_4

if (r9_4 s< 0)
    rax_4 = *(arg1 + 0xc)
else
    rax_4 = sx.d(r9_4) s>> 5

if (arg2 s< 0)
    arg2 = 0
else if (arg2 s> rax_4)
    arg2 = rax_4

if (r8_1 s>= 0)
    int32_t rax_5 = rax_4 - arg2
    r10 = r8_1
    
    if (r8_1 s> rax_5)
        r10 = rax_5

void* rcx

if ((r9_4.b & 2) == 0)
    rcx = *(arg1 + 0x18)
else
    rcx = arg1 + 0xa

void* rdx_1 = rcx + (sx.q(arg2) << 1)
int64_t result = sx.q(arg5)
int64_t rcx_1 = arg4 + (result << 1)

if (rdx_1 != rcx_1 && r10 s> 0)
    return memmove(rcx_1, rdx_1, r10 * 2) __tailcall

return result
