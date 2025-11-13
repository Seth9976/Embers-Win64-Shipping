// 函数: sub_140b548f0
// 地址: 0x140b548f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rflags
int32_t temp0
temp0, rflags = _bit_scan_reverse(arg3)
int64_t __saved_r14
int32_t rdx

if (&__saved_r14 == 0x28)
    rdx = 0x20
else
    rdx = 0x1f - temp0

int32_t rsi = arg3 - 1
int32_t rdx_2 = rdx << 0x1a s>> 0x1f
uint64_t rflags_1
int32_t temp0_1
temp0_1, rflags_1 = _bit_scan_reverse(rsi)
int32_t rcx

if (rdx_2 == 0)
    rcx = 0x20
else
    rcx = 0x1f - temp0_1

if (*arg2 u< arg3)
    rsi = *arg2

int64_t r9_1 = *(arg1 + 0xa0)
int64_t rax_3 = *(arg1 + 0xa8)
int64_t r14_2 = (sx.q(0x20 - rcx) & sx.q(not.d(rdx_2))) + r9_1

if (r14_2 s> rax_3)
    if (*(arg1 + 0xb0) == 0)
        *(arg1 + 0x29) |= 1
        return rax_3
    
    int64_t rax_4 = rax_3 * 2
    
    if (rax_4 s>= r14_2)
        r14_2 = rax_4
    
    *(arg1 + 0xa8) = r14_2
    int64_t r15_1 = sx.q(*(arg1 + 0x98))
    int32_t r14_5 = ((r14_2 + 7) s>> 3).d - *(arg1 + 0x98)
    int32_t rax_5 = r15_1.d + r14_5
    *(arg1 + 0x98) = rax_5
    
    if (rax_5 s> *(arg1 + 0x9c))
        sub_1405daba0(arg1 + 0x90)
    
    memset(r15_1 + *(arg1 + 0x90), 0, sx.q(r14_5))
    r9_1 = *(arg1 + 0xa0)

int32_t r10 = 0
int32_t i = 1

if (arg3 u> 1)
    while (i != 0)
        if ((i & rsi) != 0)
            char* r8_3 = sx.q((r9_1 s>> 3).d) + *(arg1 + 0x90)
            *r8_3 += *((zx.q(r9_1.d) & 7) + &data_142e78978)
            r10 += i
        
        i *= 2
        r9_1 += 1
        
        if (i + r10 u>= arg3)
            break

*(arg1 + 0xa0) = r9_1
return i
