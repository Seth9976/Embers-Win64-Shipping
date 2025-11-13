// 函数: sub_141a12290
// 地址: 0x141a12290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg1 s<= 0)
    arg1[6].b = *(arg2 + 0x449) & 1
    arg1[7] = *(arg2 + 0x480)
    arg1[8] = *(arg2 + 0x484)
    arg3 = 1
    sub_141a139a0(arg1, *(arg2 + 0x178), 1.q)
    sub_141a11af0(arg1, 0)
else
    int64_t r10_1 = *(arg1 + 8)
    uint32_t r8 = *(arg2 + 0x178)
    uint32_t r9_1 = r8
    uint32_t arg_8
    arg_8.q = r10_1
    int32_t r14_1 = arg1[5]
    int32_t r15_1 = arg1[4]
    uint32_t rcx = r15_1 + r10_1.d
    uint32_t rcx_1 = *(arg2 + 0x17c)
    uint32_t r11_1 = rcx_1
    arg_8.q = rcx.q
    arg3 = arg3 + r14_1 - 1
    uint32_t rax_2 = (r10_1 u>> 0x20).d
    
    if (r10_1.d s<= r8)
        r9_1 = r10_1.d
    
    if (rax_2 s<= rcx_1)
        r11_1 = rax_2
    
    uint32_t rax_4 = ((rcx - 1).q u>> 0x20).d
    uint32_t arg_14 = r11_1
    
    if (rax_4 s>= rcx_1)
        rcx_1 = rax_4
    
    if (rcx - 1 s>= r8)
        r8 = rcx - 1
    
    uint32_t r8_1 = r8 - r9_1
    arg_8.q = r8.q
    arg_8.q = r8_1.q
    uint32_t rax_7 = r8_1 + 1
    arg3 = rcx_1 - r11_1 + 1
    uint32_t rcx_2
    
    if (r9_1 != r10_1.d || r11_1 != (r10_1 u>> 0x20).d)
        rcx_2.b = 1
    else
        rcx_2.b = 0
    
    int64_t r8_2 = rax_7.q
    
    if (rcx_2.b == 0)
        if (r15_1 != rax_7 || r14_1 != (r8_2 u>> 0x20).d)
            rax_7.b = 1
        else
            rax_7.b = 0
    
    if (rcx_2.b != 0 || rax_7.b != 0)
        sub_141a139a0(arg1, r9_1.q, r8_2)
        sub_141a11af0(arg1, 0)
    
    void* rax_9 = *(arg2 + 0x5d0)
    void* r8_3 = arg2 + 0x5c0
    int32_t r9_2 = *(arg2 + 0x5d8)
    
    if (rax_9 != 0)
        r8_3 = rax_9
    
    int32_t rdx_2 = 0
    int64_t rax_10 = 0
    uint64_t rcx_6 = zx.q((r9_2 + 0x1f) u>> 5)
    
    if (rcx_6 != 0)
        while (*(r8_3 + (rax_10 << 2)) == 0)
            rdx_2 += 1
            rax_10 += 1
            
            if (rax_10 s>= rcx_6)
                break
    
    if (rdx_2 s< rcx_6.d)
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = __bsf_gprv_memv(*(r8_3 + (sx.q(rdx_2) << 2)))
        int32_t rdx_4 = (rdx_2 << 5) + temp0_1
        
        if (rdx_4 s< r9_2 && rdx_4 != 0xffffffff)
            arg1[1] += 1

*arg1 += 1
int64_t rax_15 = *(arg2 + 0x178)
int64_t rcx_14 = *(arg1 + 0x28)
int64_t rdx_6 = sx.q(rax_15.d + ((rax_15 u>> 0x20).d - arg1[3]) * arg1[4] - arg1[2]) * 5
*(rcx_14 + (rdx_6 << 2)) = *(arg2 + 0x488)
*(rcx_14 + (rdx_6 << 2) + 0x10) = *(arg2 + 0x498)
int64_t rax_19 = *(arg2 + 0x178)
int32_t zmm2 = *(arg2 + 0xd8)
float zmm3[0x4] = *(arg2 + 0xc0)
int128_t zmm0 = *(arg2 + 0xc4)
int32_t zmm1 = *(arg2 + 0xc8)
int32_t rcx_18 = ((rax_19 u>> 0x20).d - arg1[3]) * arg1[4]
float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
temp0_2[0] = zmm0.d
float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc6)
temp0_3[0] = zmm1
int32_t rcx_20 = rcx_18 - arg1[2] + rax_19.d
float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x27)
int64_t rax_20 = *(arg1 + 0xb8)
temp0_4[0] = zmm2
*(rax_20 + sx.q(rcx_20) * 0x10) = _mm_shuffle_ps(temp0_4, temp0_4, 0x39)
int64_t rax_21 = *(arg2 + 0x178)
int64_t result = *(arg1 + 0xc8)
*(result + (sx.q(((rax_21 u>> 0x20).d - arg1[3]) * arg1[4] - arg1[2] + rax_21.d) << 3)) = arg2
return result
