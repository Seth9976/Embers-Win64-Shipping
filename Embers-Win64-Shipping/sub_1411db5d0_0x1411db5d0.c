// 函数: sub_1411db5d0
// 地址: 0x1411db5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_328
int64_t rax_1 = __security_cookie ^ &var_328
uint64_t result = arg7
uint64_t result_1 = result

if (data_1439b6100 != 0 && *(arg2 + 8) != 0 && data_143e5102c != 0)
    int32_t rbx_1 = *(arg2 + 0x1548)
    result = sub_1422e5a30(arg2)
    
    if (rbx_1 s>= 3 && result.d == 0)
        result = zx.q(*(arg1 + 0x30) - *(arg1 + 0x5c))
        
        if (result.d s> 0)
            result = zx.q(*(arg4 + 0x570))
            
            if ((result.b & 0x40) != 0 && *(arg4 + 0x534) s>= 0 && (result.b & 0x10) != 0
                    && *(arg4 + 0x48) == arg2 && test_bit(result.d, 9))
                uint128_t var_48_1 = arg5
                void* rcx_1 = *(*(arg2 + 8) + 0xb10)
                int128_t zmm8 = 0x3f800000
                int64_t rbx_2 = *(rcx_1 + 0x38)
                uint128_t zmm0
                zmm0.d = 1f f/ _mm_cvtepi32_ps(zx.o(rbx_2.d)).d
                int32_t var_2b8_1 = zmm0.d
                void* rax_7 = *(rcx_1 + 0x28)
                zmm0 = _mm_cvtepi32_ps(zx.o((rbx_2 u>> 0x20).d))
                int64_t rcx_2 = *(rax_7 + 8)
                int64_t var_198 = rcx_2
                int32_t var_c0_1 = 0
                uint128_t zmm1
                zmm1.d = 1f f/ zmm0.d
                int32_t var_bc
                __builtin_memset(&var_bc, 0xff, 0x14)
                int64_t var_98
                __builtin_memset(&var_98, 0, 0x19)
                int64_t var_190_1 = 0
                int32_t var_188_1 = 0xffffffff
                int16_t var_184_1 = 0x500
                int64_t var_d8
                __builtin_memset(&var_d8, 0, 0x11)
                int32_t var_c4_1 = 0
                int32_t var_2b4_1 = zmm1.d
                uint128_t var_a8_1 = data_142d3f5a0
                bool var_7f_1 = *(rcx_2 + 0x38) u> 1
                void var_180
                memset(&var_180, 0, 0xa8)
                int64_t r14_3 = (*(arg3 + 0x30) + 1) & 0xfffffffffffffffe
                int64_t rax_8 = r14_3 + 0x34
                
                if (rax_8 u> *(arg3 + 0x38))
                    sub_140b0e3d0(arg3 + 0x30, 0x36)
                    r14_3 = (*(arg3 + 0x30) + 1) & 0xfffffffffffffffe
                    rax_8 = r14_3 + 0x34
                
                wchar16 const* const rcx_5 = u"ComputeRayTracedShadowing"
                *(arg3 + 0x30) = rax_8
                wchar16 const i
                
                do
                    i = *rcx_5
                    *(rcx_5 + r14_3 - u"ComputeRayTracedShadowing") = i
                    rcx_5 = &rcx_5[1]
                while (i != 0)
                void*** rcx_8 = (*(arg3 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_9 = &rcx_8[0x27]
                
                if (rax_9 u> *(arg3 + 0x38))
                    sub_140b0e3d0(arg3 + 0x30, 0x140)
                    rcx_8 = (*(arg3 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_9 = &rcx_8[0x27]
                
                *(arg3 + 0x30) = rax_9
                void**** rax_10 = *(arg3 + 8)
                *(arg3 + 0x14) += 1
                *rax_10 = rcx_8
                *(arg3 + 8) = &rcx_8[1]
                sub_1405d11b0(rcx_8, &var_198, r14_3)
                *(arg3 + 0x1c4) = 1
                sub_1405d19b0(arg3, &var_198)
                int64_t var_88
                *(arg3 + 0x178) = var_88:7.b
                *(arg3 + 0x179) = 0
                *(arg3 + 0x1c4) = 1
                int64_t var_1ec
                __builtin_memset(&var_1ec, 0, 0x43)
                int128_t var_248
                __builtin_memset(&var_248, 0, 0x30)
                int128_t var_200_1 = zx.o(0)
                int16_t var_1a8_1 = 0
                sub_140fdc870(arg3, &var_248)
                void*** rcx_16 = (*(arg3 + 0x30) + 7) & 0xfffffffffffffff8
                arg5 = _mm_cvtepi32_ps(zx.o(rbx_2:4.d))
                void* rax_13 = &rcx_16[5]
                uint128_t zmm7 = _mm_cvtepi32_ps(zx.o(rbx_2.d))
                
                if (rax_13 u> *(arg3 + 0x38))
                    arg5 = sub_140b0e3d0(arg3 + 0x30, 0x30)
                    rcx_16 = (*(arg3 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_13 = &rcx_16[5]
                
                *(arg3 + 0x30) = rax_13
                *(arg3 + 0x14) += 1
                **(arg3 + 8) = rcx_16
                *(arg3 + 8) = &rcx_16[1]
                *(rcx_16 + 0x1c) = zmm7.d
                rcx_16[1] = 0
                *rcx_16 = &data_142d54998
                rcx_16[4].d = arg5.d
                rcx_16[2] = 0
                rcx_16[3].d = 0
                *(rcx_16 + 0x24) = 0x3f800000
                int64_t rbx_3 = data_1439b6268
                int64_t var_210_1 = data_14395da18
                void*** rcx_22 = (*(arg3 + 0x30) + 7) & 0xfffffffffffffff8
                int64_t var_208_1 = data_14395d9e8
                int64_t var_218_1 = data_1439b62b0
                void* rax_19 = &rcx_22[5]
                
                if (rax_19 u> *(arg3 + 0x38))
                    sub_140b0e3d0(arg3 + 0x30, 0x30)
                    rcx_22 = (*(arg3 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_19 = &rcx_22[5]
                
                *(arg3 + 0x30) = rax_19
                int64_t* rax_20 = *(arg3 + 8)
                *(arg3 + 0x14) += 1
                *rax_20 = rcx_22
                *(arg3 + 8) = &rcx_22[1]
                rcx_22[1] = 0
                *rcx_22 = &data_142d56618
                rcx_22[2].d = 0
                rcx_22[3] = rbx_3
                rcx_22[4].d = 0
                void* var_290
                sub_1419a2ec0(*(arg2 + 0x5150), &var_290, &data_143e79e50, 0)
                void* rbx_4 = var_290
                void* var_280
                sub_1419a2ec0(*(arg2 + 0x5150), &var_280, &data_143e7a050, 0)
                void* r14_6 = var_280
                var_248.q = data_143a2fe60
                int64_t rax_23 = 0
                void* var_2e8_2 = r14_6
                
                if (rbx_4 != 0)
                    int64_t rdx_7 = sx.q(*(rbx_4 + 0x10c))
                    void* var_288
                    int64_t* rbx_5 = *(var_288 + 0x10)
                    int64_t rax_25 = rbx_5[3]
                    
                    if (*(rax_25 + (rdx_7 << 3)) == 0)
                        sub_1419ccf30(rbx_5, rdx_7.d)
                        rax_25 = rbx_5[3]
                    
                    rax_23 = *(rax_25 + (rdx_7 << 3))
                    r14_6 = var_2e8_2
                
                var_248:8.q = rax_23
                int64_t rax_26 = 0
                
                if (r14_6 != 0)
                    int64_t rdx_8 = sx.q(*(r14_6 + 0x10c))
                    void* var_278
                    int64_t* rbx_6 = *(var_278 + 0x10)
                    int64_t rax_28 = rbx_6[3]
                    
                    if (*(rax_28 + (rdx_8 << 3)) == 0)
                        sub_1419ccf30(rbx_6, rdx_8.d)
                        rax_28 = rbx_6[3]
                    
                    rax_26 = *(rax_28 + (rdx_8 << 3))
                    r14_6 = var_2e8_2
                
                int128_t var_228
                var_228.q = rax_26
                int32_t var_1f0_1 = 0
                sub_1419870b0(arg3, &var_248, 2)
                int32_t rcx_31 = 0
                int32_t var_2dc_1 = 1
                int32_t var_2e0_1 = 0
                int32_t r10_1 = *(arg1 + 0x50)
                void* r9 = arg1 + 0x38
                int32_t r8_1 = 0
                void* var_2d8 = r9
                int32_t var_2d0_1 = 0xffffffff
                int64_t var_2cc_1 = 0
                
                if (r10_1 != 0)
                    void* rax_29 = *(r9 + 0x10)
                    
                    if (rax_29 != 0)
                        r9 = rax_29
                    
                    int32_t temp0_5
                    int32_t temp1_1
                    temp0_5:temp1_1 = sx.q(r10_1 - 1)
                    int32_t rdx_12 = *r9
                    
                    if (rdx_12 != 0)
                    label_1411dbb9b:
                        int32_t rax_36 = neg.d(rdx_12) & rdx_12
                        uint64_t rflags_1
                        int32_t temp0_6
                        temp0_6, rflags_1 = _bit_scan_reverse(rax_36)
                        int32_t var_2dc_2 = rax_36
                        int32_t rax_37
                        
                        if (rax_36 == 0)
                            rax_37 = 0x20
                        else
                            rax_37 = 0x1f - temp0_6
                        
                        var_2cc_1.d = r8_1 - rax_37 + 0x1f
                        
                        if (r8_1 - rax_37 + 0x1f s> r10_1)
                            var_2cc_1.d = r10_1
                    else
                        while (true)
                            int64_t rdx_13 = sx.q(rcx_31)
                            r8_1 += 0x20
                            rcx_31 += 1
                            var_2cc_1:4.d = r8_1
                            var_2e0_1 = rcx_31
                            
                            if (rdx_13.d s>= (temp1_1 + (temp0_5 & 0x1f)) s>> 5)
                                break
                            
                            rdx_12 = *(r9 + (rdx_13 << 2) + 4)
                            var_2d0_1 = 0xffffffff
                            
                            if (rdx_12 != 0)
                                goto label_1411dbb9b
                        
                        var_2cc_1.d = r10_1
                
                int128_t var_258_1 = 0xffffffff
                uint128_t var_268_1 = var_2e0_1.o
                var_2e0_1.o = (arg1 + 0x28).o
                uint64_t var_2c0_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
                var_2d0_1.o = var_268_1
                
                if (0 s< r10_1)
                    int64_t zmm6 = var_2b8_1.q
                    int32_t i_2
                    int32_t i_1 = i_2
                    
                    do
                        void* rbx_10 = sx.q(i_1) * 0x30 + *var_2e0_1.q
                        
                        if (*(rbx_10 + 0x20) s> 0)
                            sub_1411fc2d0(rbx_10 + 0x18, zmm6, 
                                zmm8.d f/ _mm_cvtepi32_ps(zx.o(*(arg1 + 0x10))).d)
                            *(rbx_10 + 0x20)
                            sub_1411f2560(rbx_4, arg3, arg2)
                            uint64_t result_2 = result_1
                            zmm6, zmm8 = sub_1411f2c10(r14_6, arg3, arg2, arg4, *(rbx_10 + 0x20), 
                                rcx_1, arg6)
                            int32_t rbx_11 = *(rbx_10 + 0x20)
                            void*** rcx_38 = (*(arg3 + 0x30) + 7) & 0xfffffffffffffff8
                            void* rax_45 = &rcx_38[4]
                            
                            if (rax_45 u> *(arg3 + 0x38))
                                zmm6 = sub_140b0e3d0(arg3 + 0x30, 0x28)
                                rcx_38 = (*(arg3 + 0x30) + 7) & 0xfffffffffffffff8
                                rax_45 = &rcx_38[4]
                            
                            *(arg3 + 0x30) = rax_45
                            int64_t* rax_46 = *(arg3 + 8)
                            *(arg3 + 0x14) += 1
                            *rax_46 = rcx_38
                            *(arg3 + 8) = &rcx_38[1]
                            rcx_38[1] = 0
                            *rcx_38 = &data_142d54988
                            rcx_38[2].d = 0
                            *(rcx_38 + 0x14) = 2
                            rcx_38[3].d = rbx_11
                        
                        var_2cc_1:4.d &= not.d(var_2d8:4.d)
                        sub_14059bdd0(&var_2d8)
                        i_1 = i_2
                    while (i_1 s< *(var_2d0_1.q + 0x18))
                
                sub_141096650(arg3)
                int64_t var_90
                int512_t zmm6_1
                result, zmm6_1 = sub_1405d1550(&var_90)
                zmm6_1.o = var_48_1

__security_check_cookie(rax_1 ^ &var_328)
return result
