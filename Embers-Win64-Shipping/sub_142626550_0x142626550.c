// 函数: sub_142626550
// 地址: 0x142626550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d98
int64_t rax_1 = __security_cookie ^ &var_d98
int32_t* r13 = arg7
float zmm9[0x4] = arg4
float zmm7[0x4] = arg3
int32_t* r15 = arg8
float zmm6[0x4] = arg2
int64_t* r14 = arg1
int32_t* var_c80 = r13
int32_t* var_cc0 = r15
uint64_t result

if (r13[1] == 0 || r13[2] == 0)
    result = 0x40000000
else
    int32_t rsi_1 = 0
    uint64_t rdi_1 = zx.q(*r13)
    void* r12_1 = *arg6
    int32_t var_d08_1 = rdi_1.d
    void* var_cb8_1 = r12_1
    int64_t var_cd8
    __builtin_memset(&var_cd8, 0, 0x18)
    int64_t var_c90 = 0
    int64_t var_c88_1 = 0
    sub_142616290(&var_c90, 0x40)
    char* var_ce8 = nullptr
    int32_t var_ce0_1 = 0
    sub_142616290(&var_ce8, 0x200)
    int64_t var_ca0 = 0
    int64_t var_c98_1 = 0
    sub_142616290(&var_ca0, 0x200)
    int64_t var_cb0 = 0
    int64_t var_ca8_1 = 0
    sub_142616290(&var_cb0, 0x200)
    int32_t rbx_1 = 0
    int32_t var_d38_1 = 0
    int32_t* rax_4 = (*(*r14 + 0x10))(r14, zx.q(r13[2] << 4))
    int32_t result_1
    
    if (rax_4 != 0)
        int128_t zmm8
        int128_t var_58_1 = zmm8
        int32_t* rax_6 = (*(*r14 + 0x10))(r14, zx.q((rdi_1 * 3).d << 2))
        
        if (rax_6 == 0)
        label_1426270a3:
            result_1 = -0x7ffffffc
        label_1426270a8:
            r14 = arg1
        else
            int32_t i = 0
            int32_t i_13
            
            if (r13[2] s> 0)
                uint32_t* r9_1 = rax_4
                uint32_t r15_1 = (rdi_1 * 2).d
                int64_t* r11_1 = arg6
                int32_t i_14 = 0
                i_13 = 0
                int32_t r12_2 = 0
                
                do
                    int16_t* r10_1 = *(r13 + 0x18) + (sx.q(i_14) << 1)
                    *r9_1 = zx.d(*(*r11_1 + 0x30))
                    r9_1[1] = 0
                    int32_t j = 0
                    r9_1[2] = zx.d(*(*r11_1 + 0x32))
                    r9_1[3] = 0
                    
                    if (rdi_1.d s> 0)
                        do
                            int16_t rax_10 = *r10_1
                            
                            if (rax_10 == 0xffff)
                                break
                            
                            int64_t rdx_5 = *(r13 + 0x10)
                            uint64_t r8_1 = zx.q(rax_10) * 3
                            uint32_t rcx_9 = zx.d(*(rdx_5 + (r8_1 << 1)))
                            
                            if (*r9_1 s< rcx_9)
                                rcx_9 = *r9_1
                            
                            *r9_1 = rcx_9
                            uint32_t rcx_10 = zx.d(*(rdx_5 + (r8_1 << 1)))
                            
                            if (r9_1[1] s> rcx_10)
                                rcx_10 = r9_1[1]
                            
                            r9_1[1] = rcx_10
                            uint32_t rcx_11 = zx.d(*(rdx_5 + (r8_1 << 1) + 4))
                            
                            if (r9_1[2] s< rcx_11)
                                rcx_11 = r9_1[2]
                            
                            r9_1[2] = rcx_11
                            uint32_t rcx_12 = zx.d(*(rdx_5 + (r8_1 << 1) + 4))
                            uint32_t rax_12 = r9_1[3]
                            
                            if (rax_12 s> rcx_12)
                                rcx_12 = rax_12
                            
                            rbx_1 += 1
                            j += 1
                            r9_1[3] = rcx_12
                            r10_1 = &r10_1[1]
                        while (j s< rdi_1.d)
                        
                        i_14 = i_13
                        r15_1 = (rdi_1 * 2).d
                    
                    uint32_t rax_13 = *r9_1
                    r11_1 = arg6
                    uint32_t rax_14 = rax_13 - 1
                    
                    if (rax_13 - 1 s< 0)
                        rax_14 = 0
                    
                    *r9_1 = rax_14
                    uint32_t rdx_7 = r9_1[1] + 1
                    uint32_t rcx_13 = zx.d(*(*r11_1 + 0x30))
                    
                    if (rcx_13 s< rdx_7)
                        rdx_7 = rcx_13
                    
                    r9_1[1] = rdx_7
                    int32_t rax_16 = r9_1[2]
                    int32_t rax_17 = rax_16 - 1
                    
                    if (rax_16 - 1 s< 0)
                        rax_17 = 0
                    
                    r9_1[2] = rax_17
                    uint32_t rdx_9 = r9_1[3] + 1
                    uint32_t rcx_14 = zx.d(*(*r11_1 + 0x32))
                    
                    if (rcx_14 s< rdx_9)
                        rdx_9 = rcx_14
                    
                    r9_1[3] = rdx_9
                    int32_t rax_19 = r9_1[1]
                    uint32_t r10_2 = *r9_1
                    
                    if (r10_2 s< rax_19)
                        int32_t rcx_15 = r9_1[2]
                        
                        if (rcx_15 s< rdx_9)
                            int32_t rax_20 = rax_19 - r10_2
                            
                            if (r12_2 s> rax_20)
                                rax_20 = r12_2
                            
                            int32_t rdx_10 = rdx_9 - rcx_15
                            r12_2 = rax_20
                            
                            if (rsi_1 s> rdx_10)
                                rdx_10 = rsi_1
                            
                            rsi_1 = rdx_10
                    
                    i_14 += r15_1
                    i += 1
                    r9_1 = &r9_1[4]
                    i_13 = i_14
                while (i s< r13[2])
                
                r15 = var_cc0
                var_d38_1 = r12_2
                r12_1 = var_cb8_1
            
            int64_t rax_21 = j_sub_1426075c0(zx.q(rsi_1 * var_d38_1 * 2), 1)
            var_cd8 = rax_21
            
            if (rax_21 == 0)
                goto label_1426270a3
            
            int32_t rdx_11 = r13[2]
            r14 = arg1
            *r15 = rdx_11
            *(r15 + 4) = 0
            int64_t rax_23 = (*(*r14 + 0x10))(r14, zx.q(rdx_11 << 4))
            *(r15 + 0x10) = rax_23
            
            if (rax_23 == 0)
                goto label_1426270a3
            
            r15[1] = 0
            int64_t r8_2 = *r14
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(rbx_1)
            uint64_t rax_28 = zx.q(((temp1_1 - temp0_1) s>> 1) + rbx_1)
            int32_t var_d18_1 = rax_28.d
            uint32_t rbx_2 = (rax_28 * 2).d
            uint32_t var_d14_1 = rbx_2
            int64_t rax_29 = (*(r8_2 + 0x10))(r14, zx.q((rax_28 * 3).d << 2), r8_2)
            *(r15 + 0x18) = rax_29
            
            if (rax_29 == 0)
                goto label_1426270a3
            
            r15[2] = 0
            int64_t rax_31 = (*(*r14 + 0x10))(r14, zx.q(rbx_2 << 5))
            *(r15 + 0x20) = rax_31
            
            if (rax_31 == 0)
                goto label_1426270a3
            
            int32_t var_d10_1 = 0
            
            if (r13[2] s> 0)
                zmm8 = arg5
                void* r14_1 = nullptr
                int32_t* var_cf8_1 = nullptr
                int32_t rax_32 = 0
                int32_t var_d0c_1 = 0
                
                while (true)
                    int32_t rsi_3 = 0
                    int32_t i_1 = 0
                    int32_t var_d38_2 = 0
                    int64_t r9_2 = 0
                    int16_t* r11_2 = *(r13 + 0x18) + (sx.q(rax_32) << 1)
                    uint128_t zmm0_1
                    
                    if (rdi_1.d s>= 4)
                        int32_t* r8_3 = rax_6
                        
                        do
                            int16_t rax_34 = r11_2[r9_2]
                            
                            if (rax_34 == 0xffff)
                                goto label_142626b42
                            
                            int64_t rcx_21 = *(r13 + 0x10)
                            uint64_t rdx_18 = zx.q(rax_34) * 3
                            zmm0_1.d = _mm_cvtepi32_ps(zx.o(*(rcx_21 + (rdx_18 << 1)))).d f* zmm6[0]
                            *r8_3 = zmm0_1.d
                            arg2.d =
                                _mm_cvtepi32_ps(zx.o(*(rcx_21 + (rdx_18 << 1) + 2))).d f* zmm7[0]
                            r8_3[1] = arg2.d
                            zmm0_1.d =
                                _mm_cvtepi32_ps(zx.o(*(rcx_21 + (rdx_18 << 1) + 4))).d f* zmm6[0]
                            r8_3[2] = zmm0_1.d
                            int16_t rax_39 = r11_2[r9_2 + 1]
                            
                            if (rax_39 == 0xffff)
                                rsi_3 += 1
                                goto label_142626b37
                            
                            int64_t rcx_22 = *(r13 + 0x10)
                            uint64_t rdx_19 = zx.q(rax_39) * 3
                            zmm0_1.d = _mm_cvtepi32_ps(zx.o(*(rcx_22 + (rdx_19 << 1)))).d f* zmm6[0]
                            r8_3[3] = zmm0_1.d
                            arg2.d =
                                _mm_cvtepi32_ps(zx.o(*(rcx_22 + (rdx_19 << 1) + 2))).d f* zmm7[0]
                            r8_3[4] = arg2.d
                            zmm0_1.d =
                                _mm_cvtepi32_ps(zx.o(*(rcx_22 + (rdx_19 << 1) + 4))).d f* zmm6[0]
                            r8_3[5] = zmm0_1.d
                            int16_t rax_44 = r11_2[r9_2 + 2]
                            
                            if (rax_44 == 0xffff)
                                rsi_3 += 2
                                goto label_142626b37
                            
                            int64_t rcx_23 = *(r13 + 0x10)
                            uint64_t rdx_20 = zx.q(rax_44) * 3
                            zmm0_1.d = _mm_cvtepi32_ps(zx.o(*(rcx_23 + (rdx_20 << 1)))).d f* zmm6[0]
                            r8_3[6] = zmm0_1.d
                            arg2.d =
                                _mm_cvtepi32_ps(zx.o(*(rcx_23 + (rdx_20 << 1) + 2))).d f* zmm7[0]
                            r8_3[7] = arg2.d
                            zmm0_1.d =
                                _mm_cvtepi32_ps(zx.o(*(rcx_23 + (rdx_20 << 1) + 4))).d f* zmm6[0]
                            r8_3[8] = zmm0_1.d
                            int16_t rax_49 = r11_2[r9_2 + 3]
                            
                            if (rax_49 == 0xffff)
                                rsi_3 += 3
                                goto label_142626b37
                            
                            int64_t rcx_24 = *(r13 + 0x10)
                            rsi_3 += 4
                            r9_2 += 4
                            i_1 += 4
                            var_d38_2 = rsi_3
                            uint64_t rdx_21 = zx.q(rax_49) * 3
                            zmm0_1.d = _mm_cvtepi32_ps(zx.o(*(rcx_24 + (rdx_21 << 1)))).d f* zmm6[0]
                            r8_3[9] = zmm0_1.d
                            arg2.d =
                                _mm_cvtepi32_ps(zx.o(*(rcx_24 + (rdx_21 << 1) + 2))).d f* zmm7[0]
                            r8_3[0xa] = arg2.d
                            zmm0_1.d =
                                _mm_cvtepi32_ps(zx.o(*(rcx_24 + (rdx_21 << 1) + 4))).d f* zmm6[0]
                            r8_3[0xb] = zmm0_1.d
                            r8_3 = &r8_3[0xc]
                        while (i_1 s< (rdi_1 - 3).d)
                    
                    if (i_1 s< rdi_1.d)
                        int16_t* rbx_3 = &r11_2[r9_2]
                        void* r8_6 = &rax_6[2 + r9_2 * 3]
                        
                        do
                            int16_t rax_56 = *rbx_3
                            
                            if (rax_56 == 0xffff)
                                break
                            
                            int64_t rcx_25 = *(r13 + 0x10)
                            rbx_3 = &rbx_3[1]
                            rsi_3 += 1
                            i_1 += 1
                            uint64_t rdx_22 = zx.q(rax_56) * 3
                            zmm0_1.d = _mm_cvtepi32_ps(zx.o(*(rcx_25 + (rdx_22 << 1)))).d f* zmm6[0]
                            *(r8_6 - 8) = zmm0_1.d
                            arg2.d =
                                _mm_cvtepi32_ps(zx.o(*(rcx_25 + (rdx_22 << 1) + 2))).d f* zmm7[0]
                            *(r8_6 - 4) = arg2.d
                            zmm0_1.d =
                                _mm_cvtepi32_ps(zx.o(*(rcx_25 + (rdx_22 << 1) + 4))).d f* zmm6[0]
                            *r8_6 = zmm0_1.d
                            r8_6 += 0xc
                        while (i_1 s< rdi_1.d)
                        
                        r15 = var_cc0
                    label_142626b37:
                        var_d38_2 = rsi_3
                    
                label_142626b42:
                    int32_t rcx_26 = *(rax_4 + r14_1)
                    int32_t r8_7 = *(rax_4 + r14_1 + 8)
                    int128_t var_cd0_1
                    var_cd0_1.d = rcx_26
                    var_cd0_1:8.d = *(rax_4 + r14_1 + 4) - rcx_26
                    var_cd0_1:4.d = r8_7
                    var_cd0_1:0xc.d = *(rax_4 + r14_1 + 0xc) - r8_7
                    sub_14262c020(arg6, r11_2, *(r13 + 0x10), rsi_3, &var_cd8, &var_ca0)
                    int128_t* r14_2 = rax_6
                    int64_t* var_d40_1 = &var_cb0
                    i_13 = 0
                    int64_t* var_d70_1
                    var_d70_1.d = zmm8.d
                    int64_t* var_d78_1
                    var_d78_1.d = zmm9[0]
                    void var_c78
                    char rax_65
                    uint128_t zmm10
                    rax_65, zmm6, zmm7, zmm8, zmm9, zmm10 = sub_142620ee0(r14_2, rsi_3, zmm6, zmm7, 
                        zmm10, var_d78_1.d, var_d70_1.d, &var_cd8, &var_c78, &i_13, &var_ce8, 
                        &var_c90, var_d40_1)
                    
                    if (rax_65 == 0)
                        result_1 = -0x80000000
                        goto label_1426270a8
                    
                    uint64_t i_12 = zx.q(i_13)
                    void var_c74
                    
                    if (i_12.d s> 0)
                        arg4 = *(r12_1 + 0x14)
                        void* rax_66 = &var_c74
                        uint128_t zmm4_1 = *(r12_1 + 0x1c)
                        zmm7[0] = zmm7[0] f+ *(r12_1 + 0x18)
                        uint64_t i_7 = zx.q(i_12.d)
                        uint64_t i_2
                        
                        do
                            zmm0_1.d = arg4.d f+ *(rax_66 - 4)
                            arg2.d = zmm7.d f+ *rax_66
                            *(rax_66 - 4) = zmm0_1.d
                            zmm0_1.d = zmm4_1.d f+ *(rax_66 + 4)
                            *rax_66 = arg2.d
                            *(rax_66 + 4) = zmm0_1.d
                            rax_66 += 0xc
                            i_2 = i_7
                            i_7 -= 1
                        while (i_2 != 1)
                    
                    int64_t rdx_26 = sx.q(rsi_3)
                    int64_t r8_9 = 0
                    
                    if (rdx_26 s>= 4)
                        void* rax_67 = r14_2 + 8
                        int64_t i_8 = ((rdx_26 - 4) u>> 2) + 1
                        r8_9 = i_8 << 2
                        int64_t i_3
                        
                        do
                            zmm0_1.d = (*(rax_67 - 8)).d f+ *(r12_1 + 0x14)
                            *(rax_67 - 8) = zmm0_1.d
                            arg2.d = (*(r12_1 + 0x18)).d f+ *(rax_67 - 4)
                            *(rax_67 - 4) = arg2.d
                            zmm0_1.d = (*rax_67).d f+ *(r12_1 + 0x1c)
                            *rax_67 = zmm0_1.d
                            arg2.d = (*(rax_67 + 4)).d f+ *(r12_1 + 0x14)
                            *(rax_67 + 4) = arg2.d
                            zmm0_1.d = (*(r12_1 + 0x18)).d f+ *(rax_67 + 8)
                            *(rax_67 + 8) = zmm0_1.d
                            arg2.d = (*(r12_1 + 0x1c)).d f+ *(rax_67 + 0xc)
                            *(rax_67 + 0xc) = arg2.d
                            zmm0_1.d = (*(r12_1 + 0x14)).d f+ *(rax_67 + 0x10)
                            *(rax_67 + 0x10) = zmm0_1.d
                            arg2.d = (*(r12_1 + 0x18)).d f+ *(rax_67 + 0x14)
                            *(rax_67 + 0x14) = arg2.d
                            zmm0_1.d = (*(rax_67 + 0x18)).d f+ *(r12_1 + 0x1c)
                            *(rax_67 + 0x18) = zmm0_1.d
                            arg2.d = (*(r12_1 + 0x14)).d f+ *(rax_67 + 0x1c)
                            *(rax_67 + 0x1c) = arg2.d
                            zmm0_1.d = (*(r12_1 + 0x18)).d f+ *(rax_67 + 0x20)
                            *(rax_67 + 0x20) = zmm0_1.d
                            arg2.d = (*(rax_67 + 0x24)).d f+ *(r12_1 + 0x1c)
                            *(rax_67 + 0x24) = arg2.d
                            rax_67 += 0x30
                            i_3 = i_8
                            i_8 -= 1
                        while (i_3 != 1)
                    
                    if (r8_9 s< rdx_26)
                        int64_t i_9 = rdx_26 - r8_9
                        void* rcx_33 = r14_2 + ((r8_9 + ((r8_9 + 1) << 1)) << 2)
                        int64_t i_4
                        
                        do
                            zmm0_1.d = (*(r12_1 + 0x14)).d f+ *(rcx_33 - 8)
                            *(rcx_33 - 8) = zmm0_1.d
                            arg2.d = (*(r12_1 + 0x18)).d f+ *(rcx_33 - 4)
                            *(rcx_33 - 4) = arg2.d
                            zmm0_1.d = (*rcx_33).d f+ *(r12_1 + 0x1c)
                            *rcx_33 = zmm0_1.d
                            rcx_33 += 0xc
                            i_4 = i_9
                            i_9 -= 1
                        while (i_4 != 1)
                    
                    int32_t rcx_34 = r15[1]
                    int32_t temp5_1
                    int32_t temp6_1
                    temp5_1:temp6_1 = sx.q(var_ce0_1)
                    int64_t rdx_29 = *(r15 + 0x10)
                    int32_t i_15 = ((temp5_1 & 3) + temp6_1) s>> 2
                    i_13 = i_15
                    *(var_cf8_1 + rdx_29) = rcx_34
                    *(var_cf8_1 + *(r15 + 0x10) + 4) = i_12.d
                    *(var_cf8_1 + *(r15 + 0x10) + 8) = r15[2]
                    *(var_cf8_1 + *(r15 + 0x10) + 0xc) = i_15
                    int32_t rdx_32 = r15[1] + i_12.d
                    
                    if (rdx_32 s> var_d18_1)
                        uint64_t r8_12 =
                            zx.q(var_d18_1 + 0x100 + ((rdx_32 - var_d18_1 - 1) & 0xffffff00))
                        var_d18_1 = r8_12.d
                        int64_t rax_72 = (*(*arg1 + 0x10))(arg1, zx.q((r8_12 * 3).d << 2))
                        
                        if (rax_72 == 0)
                            goto label_1426270a3
                        
                        int64_t rax_73 = sx.q(r15[1])
                        
                        if (rax_73.d != 0)
                            memcpy(rax_72, *(r15 + 0x18), (rax_73 * 0xc).d)
                        
                        (*(*arg1 + 0x18))(arg1, *(r15 + 0x18))
                        *(r15 + 0x18) = rax_72
                        i_15 = i_13
                    
                    if (i_12.d s> 0)
                        void* r8_15 = &var_c74
                        uint64_t i_10 = i_12
                        uint64_t i_5
                        
                        do
                            r8_15 += 0xc
                            *(*(r15 + 0x18) + (sx.q(r15[1] * 3) << 2)) = *(r8_15 - 0x10)
                            *(*(r15 + 0x18) + (sx.q(r15[1] * 3) << 2) + 4) = *(r8_15 - 0xc)
                            *(*(r15 + 0x18) + (sx.q(r15[1] * 3) << 2) + 8) = *(r8_15 - 8)
                            r15[1] += 1
                            i_5 = i_10
                            i_10 -= 1
                        while (i_5 != 1)
                    
                    int32_t rcx_48 = r15[2] + i_15
                    
                    if (rcx_48 s> var_d14_1)
                        uint64_t rdx_45 =
                            zx.q(var_d14_1 + 0x100 + ((rcx_48 - var_d14_1 - 1) & 0xffffff00))
                        var_d14_1 = rdx_45.d
                        int64_t rax_82 = (*(*arg1 + 0x10))(arg1, zx.q((rdx_45 << 2).d))
                        
                        if (rax_82 == 0)
                            goto label_1426270a3
                        
                        int64_t rax_83 = sx.q(r15[2])
                        
                        if (rax_83.d != 0)
                            memcpy(rax_82, *(r15 + 0x20), (rax_83 << 2).d)
                        
                        (*(*arg1 + 0x18))(arg1, *(r15 + 0x20))
                        *(r15 + 0x20) = rax_82
                    
                    i_13.q = sx.q(i_15)
                    
                    if (i_15 s> 0)
                        int64_t i_11 = i_13.q
                        int64_t r13_1 = 0
                        int64_t i_6
                        
                        do
                            char* r8_18 = var_ce8
                            *(sx.q(r15[2] << 2) + *(r15 + 0x20)) = r8_18[r13_1]
                            *(sx.q(r15[2] << 2) + *(r15 + 0x20) + 1) = r8_18[r13_1 + 4]
                            *(sx.q(r15[2] << 2) + *(r15 + 0x20) + 2) = r8_18[r13_1 + 8]
                            int32_t* r14_5 = &var_c78 + (sx.q(*(r8_18 + r13_1 + 8) * 3) << 2)
                            int128_t* rbx_5 = &var_c78 + (sx.q(*(r8_18 + r13_1 + 4) * 3) << 2)
                            void* rdi_2 = &var_c78 + (sx.q(*(r8_18 + r13_1) * 3) << 2)
                            char rsi_4 = sub_14262bad0(rdi_2, rbx_5, rax_6, rsi_3)
                                | sub_14262bad0(rbx_5, r14_5, rax_6, var_d38_2) << 2
                            char rax_106
                            rax_106, zmm6, zmm7, zmm8, zmm9, zmm10 =
                                sub_14262bad0(r14_5, rdi_2, rax_6, var_d38_2)
                            r13_1 += 0x10
                            *(sx.q(r15[2] << 2) + *(r15 + 0x20) + 3) = rsi_4 | rax_106 << 4
                            r15[2] += 1
                            rsi_3 = var_d38_2
                            i_6 = i_11
                            i_11 -= 1
                        while (i_6 != 1)
                        r12_1 = var_cb8_1
                        r13 = var_c80
                        rdi_1 = zx.q(var_d08_1)
                    
                    int32_t rdx_56 = var_d10_1 + 1
                    r14_1 = &var_cf8_1[4]
                    var_d10_1 = rdx_56
                    rax_32 = var_d0c_1 + (rdi_1 << 1).d
                    var_cf8_1 = r14_1
                    var_d0c_1 = rax_32
                    
                    if (rdx_56 s>= r13[2])
                        r14 = arg1
                        break
            
            result_1 = 0x40000000
        
        (*(*r14 + 0x18))(r14, rax_6)
    else
        result_1 = -0x7ffffffc
    
    int64_t r8_22 = *r14
    (*(r8_22 + 0x18))(r14, rax_4, r8_22)
    sub_142609160(var_cb0)
    sub_142609160(var_ca0)
    sub_142609160(var_ce8)
    sub_142609160(var_c90)
    sub_142609160(var_cd8)
    result = zx.q(result_1)

__security_check_cookie(rax_1 ^ &var_d98)
return result
