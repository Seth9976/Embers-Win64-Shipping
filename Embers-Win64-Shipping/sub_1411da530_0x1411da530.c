// 函数: sub_1411da530
// 地址: 0x1411da530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_338
uint64_t result = __security_cookie ^ &var_338
uint64_t result_1 = result
int32_t r15 = arg2[0x2a9].d

if (data_1439b6100 != 0 && arg2[1] != 0 && data_143e5102c != 0)
    result = sub_1422e5a30(arg2)
    
    if (r15 s>= 3 && result.d == 0)
        result = *(arg4 + 0x20)
        
        if (*(result + 0x13c) == 0 && (*(result + 0x138) & 0x10) != 0)
            result = zx.q(*(arg1 + 0x30) - *(arg1 + 0x5c))
            
            if (result.d s> 0)
                void* rcx_1 = *(arg2[1] + 0xb10)
                uint128_t zmm9 = 0x3f800000
                int64_t rbx_1 = *(rcx_1 + 0x38)
                uint128_t zmm0
                zmm0.d = 1f f/ _mm_cvtepi32_ps(zx.o(rbx_1.d)).d
                int32_t var_2b8_1 = zmm0.d
                void* rax_5 = *(rcx_1 + 0x30)
                zmm0 = _mm_cvtepi32_ps(zx.o((rbx_1 u>> 0x20).d))
                int64_t rcx_2 = *(rax_5 + 8)
                int64_t var_1a8 = rcx_2
                int32_t var_d0_1 = 0
                uint128_t zmm1
                zmm1.d = 1f f/ zmm0.d
                int32_t var_cc
                __builtin_memset(&var_cc, 0xff, 0x14)
                int64_t var_a8
                __builtin_memset(&var_a8, 0, 0x19)
                int64_t var_1a0_1 = 0
                int32_t var_198_1 = 0xffffffff
                int16_t var_194_1 = 0x900
                int64_t var_e8
                __builtin_memset(&var_e8, 0, 0x11)
                int32_t var_d4_1 = 0
                int32_t var_2b4_1 = zmm1.d
                uint128_t var_b8_1 = data_142d3f5a0
                bool var_8f_1 = *(rcx_2 + 0x38) u> 1
                void var_190
                memset(&var_190, 0, 0xa8)
                int64_t r14_3 = (*(arg3 + 0x30) + 1) & 0xfffffffffffffffe
                int64_t rax_6 = r14_3 + 0x36
                uint128_t zmm6
                
                if (rax_6 u> *(arg3 + 0x38))
                    zmm6 = sub_140b0e3d0(arg3 + 0x30, 0x38)
                    r14_3 = (*(arg3 + 0x30) + 1) & 0xfffffffffffffffe
                    rax_6 = r14_3 + 0x36
                
                wchar16 const* const rcx_5 = u"ComputeHeightfieldLighting"
                *(arg3 + 0x30) = rax_6
                wchar16 const i
                
                do
                    i = *rcx_5
                    *(rcx_5 + r14_3 - u"ComputeHeightfieldLighting") = i
                    rcx_5 = &rcx_5[1]
                while (i != 0)
                void*** rcx_8 = (*(arg3 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_7 = &rcx_8[0x27]
                
                if (rax_7 u> *(arg3 + 0x38))
                    zmm6 = sub_140b0e3d0(arg3 + 0x30, 0x140)
                    rcx_8 = (*(arg3 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_7 = &rcx_8[0x27]
                
                *(arg3 + 0x30) = rax_7
                void**** rax_8 = *(arg3 + 8)
                *(arg3 + 0x14) += 1
                *rax_8 = rcx_8
                *(arg3 + 8) = &rcx_8[1]
                sub_1405d11b0(rcx_8, &var_1a8, r14_3)
                *(arg3 + 0x1c4) = 1
                sub_1405d19b0(arg3, &var_1a8)
                int64_t var_98
                *(arg3 + 0x178) = var_98:7.b
                *(arg3 + 0x179) = 0
                *(arg3 + 0x1c4) = 1
                void* var_2f8
                int64_t* r13_1
                uint128_t zmm7
                int128_t zmm8
                
                if ((*(*arg2 + 0x28) & 0x10000000) == 0)
                label_1411da834:
                    int64_t* rax_17
                    rax_17, zmm6, zmm7, zmm8, zmm9 = sub_14210f630(2)
                    int64_t rdx_6 = *rax_17
                    r13_1 = (*(rdx_6 + 0x280))(rax_17, rdx_6)
                else
                    int64_t* rcx_13 = *(*(arg4 + 0x20) + 0x128)
                    
                    if (rcx_13 == 0)
                        goto label_1411da834
                    
                    int64_t rax_13 = *rcx_13
                    var_2f8 = nullptr
                    int64_t* rax_14 = (*(rax_13 + 0x40))(rcx_13, zx.q(r15), &var_2f8)
                    int64_t rdx_5 = *rax_14
                    
                    if ((*(rdx_5 + 0x90))(rax_14, rdx_5) == 0)
                        goto label_1411da834
                    
                    r13_1 = *(*(arg4 + 0x20) + 0x128)
                
                void* rdx_7 = *arg2
                int128_t var_68_1 = zmm8
                void* r14_6 = *(rdx_7 + 0x20)
                
                if (sub_141108e00(r14_6, rdx_7) == 0)
                    zmm8 = zx.o(0)
                else
                    zmm8 = *(*(r14_6 + 0xf80) + 0x28)
                
                int64_t rax_20 = *r13_1
                var_2f8 = nullptr
                int64_t* rax_21 = (*(rax_20 + 0x40))(r13_1, zx.q(r15), &var_2f8)
                int64_t rdx_9 = *rax_21
                
                if ((*(rdx_9 + 0x90))(rax_21, rdx_9) != 0)
                    uint128_t var_48_1 = zmm6
                    void*** rcx_22 = (*(arg3 + 0x30) + 7) & 0xfffffffffffffff8
                    uint128_t var_58_1 = zmm7
                    zmm6 = _mm_cvtepi32_ps(zx.o(rbx_1:4.d))
                    void* rax_23 = &rcx_22[5]
                    zmm7 = _mm_cvtepi32_ps(zx.o(rbx_1.d))
                    
                    if (rax_23 u> *(arg3 + 0x38))
                        zmm6 = sub_140b0e3d0(arg3 + 0x30, 0x30)
                        rcx_22 = (*(arg3 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_23 = &rcx_22[5]
                    
                    *(arg3 + 0x30) = rax_23
                    void**** rax_24 = *(arg3 + 8)
                    *(arg3 + 0x14) += 1
                    *rax_24 = rcx_22
                    *(arg3 + 8) = &rcx_22[1]
                    rcx_22[1] = 0
                    *rcx_22 = &data_142d54998
                    *(rcx_22 + 0x1c) = zmm7.d
                    rcx_22[4].d = zmm6.d
                    rcx_22[2] = 0
                    rcx_22[3].d = 0
                    *(rcx_22 + 0x24) = 0x3f800000
                    int128_t var_258
                    __builtin_memset(&var_258, 0, 0x30)
                    int64_t var_1fc
                    __builtin_memset(&var_1fc, 0, 0x43)
                    uint128_t var_210_1 = zx.o(0)
                    int16_t var_1b8_1 = 0
                    sub_140fdc870(arg3, &var_258)
                    int64_t rbx_2 = data_1439b6268
                    void*** rcx_29 = (*(arg3 + 0x30) + 7) & 0xfffffffffffffff8
                    int64_t var_220_1 = data_14395da18
                    int64_t var_218_1 = data_14395d9e8
                    int64_t var_228_1 = data_14395da00
                    void* rax_29 = &rcx_29[5]
                    
                    if (rax_29 u> *(arg3 + 0x38))
                        sub_140b0e3d0(arg3 + 0x30, 0x30)
                        rcx_29 = (*(arg3 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_29 = &rcx_29[5]
                    
                    *(arg3 + 0x30) = rax_29
                    int64_t* rax_30 = *(arg3 + 8)
                    *(arg3 + 0x14) += 1
                    *rax_30 = rcx_29
                    *(arg3 + 8) = &rcx_29[1]
                    rcx_29[1] = 0
                    *rcx_29 = &data_142d56618
                    rcx_29[2].d = 0
                    rcx_29[3] = rbx_2
                    rcx_29[4].d = 0
                    void* var_290
                    sub_1419a2ec0(arg2[0xa2a], &var_290, &data_143e79e50, 0)
                    void* rbx_3 = var_290
                    int64_t rax_33 = *r13_1
                    void* var_2e8_2 = rbx_3
                    var_2f8 = nullptr
                    void* rax_35 = sub_1405948b0((*(rax_33 + 0x40))(r13_1, zx.q(r15), &var_2f8))
                    var_2f8 = rax_35
                    void* r15_1 = rax_35
                    void* rax_36 = sub_1419cec70(*(rax_35 + 0x28), &data_143e7a178, 0)
                    void* r10_1 = arg1
                    int32_t var_2e0_1 = 0
                    int32_t rcx_37 = 0
                    int32_t var_2dc_1 = 1
                    int32_t var_2d0_1 = 0xffffffff
                    int32_t r8_4 = 0
                    int64_t var_2cc_1 = 0
                    int32_t r11_1 = *(r10_1 + 0x50)
                    void* r9 = r10_1 + 0x38
                    void* var_2d8 = r9
                    
                    if (r11_1 != 0)
                        void* rax_37 = *(r9 + 0x10)
                        
                        if (rax_37 != 0)
                            r9 = rax_37
                        
                        int32_t temp0_5
                        int32_t temp1_1
                        temp0_5:temp1_1 = sx.q(r11_1 - 1)
                        int32_t rdx_15 = *r9
                        
                        if (rdx_15 != 0)
                        label_1411dab1b:
                            int32_t rax_44 = neg.d(rdx_15) & rdx_15
                            uint64_t rflags_1
                            int32_t temp0_6
                            temp0_6, rflags_1 = _bit_scan_reverse(rax_44)
                            int32_t var_2dc_2 = rax_44
                            int32_t rax_45
                            
                            if (rax_44 == 0)
                                rax_45 = 0x20
                            else
                                rax_45 = 0x1f - temp0_6
                            
                            var_2cc_1.d = r8_4 - rax_45 + 0x1f
                            
                            if (r8_4 - rax_45 + 0x1f s> r11_1)
                                var_2cc_1.d = r11_1
                        else
                            while (true)
                                int64_t rdx_16 = sx.q(rcx_37)
                                r8_4 += 0x20
                                rcx_37 += 1
                                var_2cc_1:4.d = r8_4
                                var_2e0_1 = rcx_37
                                
                                if (rdx_16.d s>= (temp1_1 + (temp0_5 & 0x1f)) s>> 5)
                                    break
                                
                                rdx_15 = *(r9 + (rdx_16 << 2) + 4)
                                var_2d0_1 = 0xffffffff
                                
                                if (rdx_15 != 0)
                                    goto label_1411dab1b
                            
                            var_2cc_1.d = r11_1
                    
                    uint128_t zmm2 = var_2d0_1.o
                    uint128_t var_268_1 = zmm2
                    uint128_t var_278_1 = var_2e0_1.o
                    var_2e0_1.o = (r10_1 + 0x28).o
                    uint64_t var_2c0_1 = (_mm_unpackhi_pd(zmm2, zmm2.q)).q
                    var_2d0_1.o = var_278_1
                    
                    if ((zmm2.q u>> 0x20).d s< r11_1)
                        zmm6 = zx.o(var_2b8_1.q)
                        int32_t i_2
                        int32_t i_1 = i_2
                        
                        do
                            void* r14_10 = sx.q(i_1) * 0x30 + *var_2e0_1.q
                            
                            if (*(r14_10 + 0x20) s> 0)
                                zmm2.d = zmm9.d f/ _mm_cvtepi32_ps(zx.o(*(r10_1 + 0x10))).d
                                sub_1411fc2d0(r14_10 + 0x18, zmm6.q, zmm2)
                                var_258.q = data_143a2fe60
                                int64_t rax_52 = 0
                                
                                if (rbx_3 != 0)
                                    int64_t rdx_18 = sx.q(*(rbx_3 + 0x10c))
                                    void* var_288
                                    int64_t* rbx_4 = *(var_288 + 0x10)
                                    int64_t rax_54 = rbx_4[3]
                                    
                                    if (*(rax_54 + (rdx_18 << 3)) == 0)
                                        sub_1419ccf30(rbx_4, rdx_18.d)
                                        rax_54 = rbx_4[3]
                                    
                                    rax_52 = *(rax_54 + (rdx_18 << 3))
                                    r15_1 = var_2f8
                                
                                var_258:8.q = rax_52
                                int64_t rax_55 = 0
                                
                                if (rax_36 != 0)
                                    int64_t* rbx_5 = *(r15_1 + 0x10)
                                    int64_t rdx_19 = sx.q(*(rax_36 + 0x10c))
                                    int64_t rax_56 = rbx_5[3]
                                    
                                    if (*(rax_56 + (rdx_19 << 3)) == 0)
                                        sub_1419ccf30(rbx_5, rdx_19.d)
                                        rax_56 = rbx_5[3]
                                    
                                    rax_55 = *(rax_56 + (rdx_19 << 3))
                                
                                int32_t var_200_1 = 0
                                int128_t var_238_1
                                var_238_1.q = rax_55
                                sub_1419870b0(arg3, &var_258, 2)
                                *(r14_10 + 0x20)
                                sub_1411f2560(var_2e8_2, arg3, arg2)
                                int32_t var_300_1 = zmm8.d
                                void* var_308_1 = rcx_1
                                zmm6, zmm8, zmm9 =
                                    sub_1411f25d0(rax_36, arg3, arg2, arg4, r13_1, *(r14_10 + 0x20))
                                int32_t rbx_6 = *(r14_10 + 0x20)
                                void*** rcx_47 = (*(arg3 + 0x30) + 7) & 0xfffffffffffffff8
                                void* rax_60 = &rcx_47[4]
                                
                                if (rax_60 u> *(arg3 + 0x38))
                                    zmm6 = sub_140b0e3d0(arg3 + 0x30, 0x28)
                                    rcx_47 = (*(arg3 + 0x30) + 7) & 0xfffffffffffffff8
                                    rax_60 = &rcx_47[4]
                                
                                *(arg3 + 0x30) = rax_60
                                int64_t* rax_61 = *(arg3 + 8)
                                *(arg3 + 0x14) += 1
                                r15_1 = var_2f8
                                *rax_61 = rcx_47
                                *(arg3 + 8) = &rcx_47[1]
                                rcx_47[1] = 0
                                rcx_47[3].d = rbx_6
                                rbx_3 = var_2e8_2
                                *rcx_47 = &data_142d54988
                                rcx_47[2].d = 0
                                *(rcx_47 + 0x14) = 2
                            
                            var_2cc_1:4.d &= not.d(var_2d8:4.d)
                            sub_14059bdd0(&var_2d8)
                            i_1 = i_2
                            r10_1 = arg1
                        while (i_1 s< *(var_2d0_1.q + 0x18))
                
                sub_141096650(arg3)
                int64_t var_a0
                result = sub_1405d1550(&var_a0)

__security_check_cookie(result_1 ^ &var_338)
return result
