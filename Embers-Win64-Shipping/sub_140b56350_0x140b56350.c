// 函数: sub_140b56350
// 地址: 0x140b56350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rflags
int32_t temp0
temp0, rflags = _bit_scan_reverse(arg3)
int64_t __saved_rdi
int32_t r9

if (&__saved_rdi == 0x20)
    r9 = 0x20
else
    r9 = 0x1f - temp0

int32_t r9_2 = r9 << 0x1a s>> 0x1f
uint64_t rflags_1
int32_t temp0_1
temp0_1, rflags_1 = _bit_scan_reverse(arg3 - 1)
int32_t rcx

if (r9_2 == 0)
    rcx = 0x20
else
    rcx = 0x1f - temp0_1

int64_t rax_3 = *(arg1 + 0xa8)
int64_t rdx_3 = (sx.q(0x20 - rcx) & sx.q(not.d(r9_2))) + *(arg1 + 0xa0)

if (rdx_3 s> rax_3)
    if (*(arg1 + 0xb0) == 0)
        *(arg1 + 0x29) |= 1
        return rax_3
    
    int64_t rax_4 = rax_3 * 2
    
    if (rax_4 s>= rdx_3)
        rdx_3 = rax_4
    
    *(arg1 + 0xa8) = rdx_3
    int64_t r14_1 = sx.q(*(arg1 + 0x98))
    int32_t r15_3 = ((rdx_3 + 7) s>> 3).d - *(arg1 + 0x98)
    int32_t rax_5 = r14_1.d + r15_3
    *(arg1 + 0x98) = rax_5
    
    if (rax_5 s> *(arg1 + 0x9c))
        sub_1405daba0(arg1 + 0x90)
    
    memset(r14_1 + *(arg1 + 0x90), 0, sx.q(r15_3))

int32_t r10 = 0
int32_t i = 1

if (arg3 u> 1)
    while (i != 0)
        if ((arg2 & i) != 0)
            int64_t r9_4 = *(arg1 + 0xa0)
            char* r8_3 = sx.q((r9_4 s>> 3).d) + *(arg1 + 0x90)
            *r8_3 += *((zx.q(r9_4.d) & 7) + &data_142e78978)
            r10 += i
        
        *(arg1 + 0xa0) += 1
        i *= 2
        
        if (i + r10 u>= arg3)
            break

return i
