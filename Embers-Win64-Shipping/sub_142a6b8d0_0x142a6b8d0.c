// 函数: sub_142a6b8d0
// 地址: 0x142a6b8d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int64_t rbp_1 = sx.q(arg2)
int32_t r15_1 = arg3
sub_142a67c60(arg1, arg4)

if (*arg4 s> 0)
    return 

uint128_t zmm6
uint128_t var_28_1 = zmm6
uint128_t zmm7
uint128_t var_38_1 = zmm7

if (rbp_1.d u> 0x15)
    *arg4 = 1
    return 

int32_t rdx_16
int32_t r8_12
uint128_t zmm0
uint128_t zmm2

switch (rbp_1)
    case 0, 5, 9, 0xc, 0xd, 0xe, 0x15
        int32_t rax_2 = (*(*arg1 + 0xa0))(arg1, zx.q(rbp_1.d), arg4)
        int64_t r9 = *arg1
        int32_t r8_3 = 1 - rax_2 + (*(r9 + 0xa8))(arg1, zx.q(rbp_1.d), arg4, r9)
        int32_t temp1_1 = mods.dp.d(sx.q(*(arg1 + (rbp_1 << 2) + 0xc) - rax_2 + r15_1), r8_3)
        int32_t r8_4 = r8_3 + temp1_1
        
        if (temp1_1 s>= 0)
            r8_4 = temp1_1
        
        sub_142a6c030(arg1, rbp_1.d, r8_4 + rax_2)
    case 1, 0x11
        int64_t rdi
        rdi.b = 0
        int32_t rax_21 = sub_142a695b0(arg1, 0, arg4)
        
        if (rax_21 == 0)
            int64_t rdx_15 = *arg1
            char* _Str1 = (*(rdx_15 + 0xb0))(arg1, rdx_15)
            
            if (strcmp(_Str1, "gregorian") != 0)
                int64_t j = 0
                
                for (int64_t i = 0; i != 4; )
                    char rax_23 = _Str1[i]
                    i += 1
                    
                    if (rax_23 != *(i + 0x14363f523))
                        do
                            char rax_24 = _Str1[j]
                            j += 1
                            
                            if (rax_24 != *(j + 0x14363f55f))
                                goto label_142a6babf
                        while (j != 7)
                        
                        break
            
            r15_1 = neg.d(r15_1)
            rdi.b = 1
        
    label_142a6babf:
        int32_t rbx_5 = *(arg1 + (rbp_1 << 2) + 0xc) + r15_1
        
        if (rax_21 s> 0 || rbx_5 s>= 1)
            int32_t rax_26 = (*(*arg1 + 0xa8))(arg1, zx.q(rbp_1.d), arg4)
            
            if (rax_26 s>= 0x8000)
                if (rbx_5 s< 1)
                    rbx_5 = 1
                
                r8_12 = rbx_5
                rdx_16 = rbp_1.d
            else if (rbx_5 s< 1)
                rdx_16 = rbp_1.d
                r8_12 = rax_26 - mods.dp.d(sx.q(neg.d(rbx_5)), rax_26)
            else if (rbx_5 s<= rax_26)
                r8_12 = rbx_5
                rdx_16 = rbp_1.d
            else
                rdx_16 = rbp_1.d
                r8_12 = mods.dp.d(sx.q(rbx_5 - 1), rax_26) + 1
        else if (rdi.b == 0)
            r8_12 = rbx_5
            rdx_16 = rbp_1.d
        else
            rdx_16 = rbp_1.d
            r8_12 = 1
        
        goto label_142a6bb4a
    case 2
        int32_t rax_16 = (*(*arg1 + 0xa8))(arg1, 2, arg4)
        int32_t rdx_13 = mods.dp.d(sx.q(*(arg1 + 0x14) + r15_1), rax_16 + 1)
        
        if (rdx_13 s< 0)
            rdx_13 = rdx_13 + 1 + rax_16
        
        sub_142a6c030(arg1, 2, rdx_13)
        (*(*arg1 + 0x158))(arg1, 5, arg4)
    case 3
        int32_t rax_48 = arg1[5].d
        int32_t rax_49 = rax_48 - arg1[0x20].d
        int32_t rbx_12 = 8
        int32_t rbp_6 = rax_49 + 7
        
        if (rax_48 - arg1[0x20].d s>= 0)
            rbp_6 = rax_49
        
        int32_t rcx_34 = rbp_6 - *(arg1 + 0x24) + 1
        int32_t rcx_35 = rcx_34 s% 7
        int32_t r8_21 = rcx_35 + 7
        
        if (rcx_34 s% 7 s>= 0)
            r8_21 = rcx_35
        
        if (7 - r8_21 s>= zx.d(*(arg1 + 0x104)))
            rbx_12 = 1
        
        int32_t rbx_13 = rbx_12 - r8_21
        int32_t rax_55 = (*(*arg1 + 0xa8))(arg1, 6, arg4)
        *(arg1 + 0x24)
        int32_t rdx_40
        int32_t rbp_8
        int32_t temp1_7 = mods.dp.d(sx.q(r15_1 * 7 - rbx_13 + *(arg1 + 0x24)), 
            rax_55 - (rbp_8 - (rdx_40 + (rdx_40 u>> 0x1f)) * 7) - rbx_13 + 7)
        int32_t r8_23 = temp1_7 + rax_55 - (rbp_8 - (rdx_40 + (rdx_40 u>> 0x1f)) * 7) - rbx_13 + 7
        
        if (temp1_7 s>= 0)
            r8_23 = temp1_7
        
        int32_t r8_24 = r8_23 + rbx_13
        
        if (r8_24 s< 1)
            r8_24 = 1
        
        if (r8_24 s> rax_55)
            r8_24 = rax_55
        
        sub_142a6c030(arg1, 6, r8_24)
        sub_142a67b10(arg1, 2)
    case 4
        int32_t rax_35 = arg1[5].d
        int32_t rax_36 = rax_35 - arg1[0x20].d
        int32_t rbx_10 = 8
        int32_t rbp_2 = rax_36 + 7
        
        if (rax_35 - arg1[0x20].d s>= 0)
            rbp_2 = rax_36
        
        int32_t rcx_22 = rbp_2 - arg1[4].d + 1
        int32_t rcx_23 = rcx_22 s% 7
        int32_t r8_17 = rcx_23 + 7
        
        if (rcx_22 s% 7 s>= 0)
            r8_17 = rcx_23
        
        if (7 - r8_17 s>= zx.d(*(arg1 + 0x104)))
            rbx_10 = 1
        
        int64_t r9_1 = *arg1
        int32_t rbx_11 = rbx_10 - r8_17
        int32_t rax_41 = (*(r9_1 + 0xa8))(arg1, 5, arg4, r9_1)
        arg1[4].d
        int32_t rdx_29
        int32_t rbp_4
        int32_t temp1_6 = mods.dp.d(sx.q(r15_1 * 7 - rbx_11 + arg1[4].d), 
            rax_41 - (rbp_4 - (rdx_29 + (rdx_29 u>> 0x1f)) * 7) - rbx_11 + 7)
        int32_t r8_19 = temp1_6 + rax_41 - (rbp_4 - (rdx_29 + (rdx_29 u>> 0x1f)) * 7) - rbx_11 + 7
        
        if (temp1_6 s>= 0)
            r8_19 = temp1_6
        
        int32_t r8_20 = r8_19 + rbx_11
        
        if (r8_20 s< 1)
            r8_20 = 1
        
        if (r8_20 s> rax_41)
            r8_20 = rax_41
        
        sub_142a6c030(arg1, 5, r8_20)
    case 6
        zmm6 = 0x4194997000000000
        uint128_t zmm8 = zx.o(arg1[0x1c])
        int64_t rax_64 = *arg1
        zmm0.q = _mm_cvtepi32_pd(zx.q(*(arg1 + 0x24) - 1)).q f* zmm6.q
        zmm8.q = zmm8.q f- zmm0.q
        int32_t rax_65 = (*(rax_64 + 0xa8))(arg1, 6, arg4)
        zmm0.q = _mm_cvtepi32_pd(zx.q(r15_1)).q f* zmm6.q
        zmm7 = _mm_cvtepi32_pd(zx.q(rax_65))
        zmm0.q = zmm0.q f+ arg1[0x1c]
        zmm7.q = zmm7.q f* zmm6.q
        zmm0.q = zmm0.q f- zmm8.q
        double zmm0_2 = sub_142a4b9c0(zmm0.q, zmm7.q)
        
        if (not(0.0 <= zmm0_2))
            zmm0_2 = zmm0_2 f+ zmm7.q
        
        sub_142a6c1a0(arg1, zmm0_2 f+ zmm8.q, arg4)
    case 7, 0x12
        double zmm3 = 86400000.0
        int32_t rcx_47 = *(arg1 + (rbp_1 << 2) + 0xc)
        zmm2.q = _mm_cvtepi32_pd(zx.q(r15_1)).q f* zmm3
        int32_t rdi_1
        
        if (rbp_1.d != 7)
            rdi_1 = 1
        else
            rdi_1 = arg1[0x20].d
        
        zmm0 = zx.o(arg1[0x1c])
        int32_t rcx_48 = rcx_47 - rdi_1
        zmm7 = 0x41c2064200000000
        zmm6 = zmm0
        zmm0.q = zmm0.q f+ zmm2.q
        int32_t rax_66 = rcx_48 + 7
        
        if (rcx_47 - rdi_1 s>= 0)
            rax_66 = rcx_48
        
        zmm6.q = zmm6.q f- _mm_cvtepi32_pd(zx.q(rax_66)).q * zmm3
        zmm0.q = zmm0.q f- zmm6.q
        double zmm0_3 = sub_142a4b9c0(zmm0.q, zmm7.q)
        
        if (not(0.0 <= zmm0_3))
            zmm0_3 = zmm0_3 f+ zmm7.q
        
        sub_142a6c1a0(arg1, zmm0_3 f+ zmm6.q, arg4)
    case 8
        int32_t rbx_14 = arg1[4].d
        int32_t rdi_4 = (rbx_14 - 1) s/ 7
        int32_t rax_70 = (*(*arg1 + 0xa8))(arg1, 5, arg4)
        double zmm1 = 604800000.0
        zmm2 = zx.o(arg1[0x1c])
        int32_t rcx_53 = rax_70 - rbx_14
        int32_t temp26_1
        int32_t temp27_1
        temp26_1:temp27_1 = muls.dp.d(0x92492493, rcx_53)
        zmm0.q = _mm_cvtepi32_pd(zx.q(rdi_4)).q f* zmm1
        zmm7.q = zmm2.q f- zmm0.q
        int32_t rdx_47 = (temp26_1 + rcx_53) s>> 2
        zmm0.q = _mm_cvtepi32_pd(zx.q(r15_1)).q f* zmm1
        zmm0.q = zmm0.q f+ zmm2.q
        zmm6.q = _mm_cvtepi32_pd(zx.q((rdx_47 u>> 0x1f) + rdx_47 + 1 + rdi_4)).q f* zmm1
        zmm0.q = zmm0.q f- zmm7.q
        double zmm0_4 = sub_142a4b9c0(zmm0.q, zmm6.q)
        
        if (not(0.0 <= zmm0_4))
            zmm0_4 = zmm0_4 f+ zmm6.q
        
        sub_142a6c1a0(arg1, zmm0_4 f+ zmm7.q, arg4)
    case 0xa, 0xb
        uint128_t zmm0_1 = sub_142a6a540(arg1, arg4)
        int32_t rbx_2 = *(arg1 + (rbp_1 << 2) + 0xc)
        int32_t rax_10 = (*(*arg1 + 0x70))(arg1, zx.q(rbp_1.d))
        int32_t rdx_9 = mods.dp.d(sx.q(rbx_2 + r15_1), rax_10 + 1)
        
        if (rdx_9 s< 0)
            rdx_9 = rdx_9 + 1 + rax_10
        
        sub_142a6c1a0(arg1, _mm_cvtepi32_pd(zx.q((rdx_9 - rbx_2) * 0x36ee80)).q f+ zmm0_1.q, arg4)
    case 0xf, 0x10
        *arg4 = 1
    case 0x13
        rdx_16 = 0x13
        r8_12 = arg1[0xb].d + r15_1
    label_142a6bb4a:
        sub_142a6c030(arg1, rdx_16, r8_12)
        (*(*arg1 + 0x158))(arg1, 2, arg4)
        (*(*arg1 + 0x158))(arg1, 5, arg4)
    case 0x14
        sub_142a6c030(arg1, 0x14, *(arg1 + 0x5c) + r15_1)
