// 函数: sub_14111f960
// 地址: 0x14111f960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2f8
int64_t rax_1 = __security_cookie ^ &var_2f8
int64_t rdi = sx.q(*(arg3 + 0x18f0))
int64_t* rcx_1 = *(arg7 + 0xc0)
int64_t result = (*(*rcx_1 + 0x10))(rcx_1)

if (data_1439b5c04 != 0)
    int64_t* rcx_2 = data_143f0f180
    result = (*(*rcx_2 + 0x6d8))(rcx_2, zx.q(*(result + 0x2c)))
    
    if (result.b != 0 && rdi.d s> 0)
        int64_t rcx_3 = sx.q(*(arg3 + 8))
        result = sub_14110e330(rcx_3.d, (*U"1111")[rcx_3])
        
        if (result.b != 0)
            int32_t rbx_1 = (*U"1111")[sx.q(*(arg3 + 8))]
            result = sub_141132080(rbx_1)
            
            if (result.b == 0 && rbx_1 != 0x30)
                int32_t r8 = 0
                int64_t* rdx_2 = nullptr
                int32_t r9 = 0
                int128_t zmm13 = arg5
                int128_t var_148_1 = zx.o(0)
                int32_t var_138_1 = data_142e1c940.d
                int32_t var_128_1 = 0
                int64_t var_120 = 0
                int32_t var_118_1 = 0
                int32_t var_f4_1 = 0x80
                int64_t var_110
                __builtin_memset(&var_110, 0, 0x1c)
                int32_t var_f0_1 = 0xffffffff
                int32_t var_ec_1 = 0
                void* var_e0_1 = nullptr
                int32_t var_d8_1 = 0
                int64_t var_298
                int32_t var_290
                int64_t* var_288
                uint64_t var_240
                int32_t var_238
                uint128_t zmm2
                
                if (rdi.d s> 0)
                    uint128_t zmm6
                    uint128_t var_48_1 = zmm6
                    int64_t rsi_1 = 0
                    int128_t zmm7
                    int128_t var_58_1 = zmm7
                    uint128_t zmm8
                    uint128_t var_68_1 = zmm8
                    uint128_t zmm9
                    uint128_t var_78_1 = zmm9
                    
                    do
                        int64_t* rcx_6 = *(*(*(arg3 + 0x18e8) + (rsi_1 << 3)) + 8)
                        uint128_t zmm0 = rcx_6[0x14].d
                        zmm6 = rcx_6[0x15].d
                        uint128_t zmm1 = *(rcx_6 + 0xa4)
                        int32_t var_260_1 = zmm0.d
                        int32_t var_25c_1 = zmm1.d
                        zmm0.d = zmm0.d f* zmm0.d
                        zmm1.d = zmm1.d f* zmm1.d
                        zmm1.d = zmm1.d f+ zmm0.d
                        zmm0.d = zmm6.d f* zmm6.d
                        zmm1.d = zmm1.d f+ zmm0.d
                        int32_t var_268
                        uint128_t zmm3
                        uint128_t zmm4_1
                        uint128_t zmm5_1
                        
                        if (not(zmm1.d f!= 1f))
                            var_238 = zmm6.d
                            zmm6 = var_238
                            var_240 = var_260_1.q
                        else if (zmm1.d f>= 9.99999994e-09f)
                            zmm5_1.d = 0x3f000000
                            zmm4_1 = _mm_rsqrt_ss(zmm1.d, zmm1.d)
                            zmm3.d = zmm1.d f* 0.5f
                            zmm0.d = zmm4_1.d f* zmm4_1.d
                            zmm1.d = zmm3.d f* zmm0.d
                            zmm2.d = zmm5_1.d f- zmm1.d
                            zmm0.d = zmm4_1.d f* zmm2.d
                            zmm4_1.d = zmm4_1.d f+ zmm0.d
                            zmm1.d = zmm4_1.d f* zmm4_1.d
                            zmm3.d = zmm3.d f* zmm1.d
                            zmm5_1.d = 0.5f f- zmm3.d
                            zmm0.d = zmm4_1.d f* zmm5_1.d
                            zmm4_1.d = zmm4_1.d f+ zmm0.d
                            var_268 = zmm4_1.d
                            zmm6.d = zmm6.d f* zmm4_1.d
                        else
                            zmm6 = data_143dbb200
                        
                        zmm2 = rcx_6[0x18].d
                        zmm1 = *(rcx_6 + 0xd4)
                        zmm3 = *(rcx_6 + 0xcc)
                        zmm4_1 = rcx_6[0x19].d
                        zmm8.d = zmm2.d f- zmm3.d
                        zmm0 = rcx_6[0x1a].d
                        zmm5_1.d = zmm1.d f+ zmm4_1.d
                        zmm7 = *(rcx_6 + 0xc4)
                        zmm3.d = zmm3.d f+ zmm2.d
                        zmm6.d = zmm6.d f* zmm13.d
                        zmm4_1.d = zmm4_1.d f- zmm1.d
                        zmm9.d = zmm0.d f+ zmm7.d
                        zmm5_1.d = zmm5_1.d f+ zmm6.d
                        zmm7.d = zmm7.d f- zmm0.d
                        zmm4_1.d = zmm4_1.d f- zmm6.d
                        uint64_t rax_6
                        
                        if (zmm3.d f< *arg9 || zmm8.d f> arg9[3] || zmm9.d f< arg9[1]
                                || zmm7.d f> arg9[4] || zmm5_1.d f< arg9[2] || zmm4_1.d f> arg9[5])
                            rax_6.b = 0
                        else
                            rax_6.b = 1
                        
                        if (rax_6.b != 0)
                            var_268.q = 0
                            int64_t* var_250 = nullptr
                            var_298 = 0
                            uint128_t var_218
                            __builtin_memset(&var_218, 0, 0x20)
                            uint128_t var_1f8_1 = *(rcx_6 + 0x80)
                            uint128_t var_1e8_1 = *(rcx_6 + 0x90)
                            uint128_t var_1d8_1 = *(rcx_6 + 0xa0)
                            uint128_t var_1c8_1 = *(rcx_6 + 0xb0)
                            uint128_t var_198_1 = zx.o(0)
                            int64_t var_1b8
                            __builtin_memset(&var_1b8, 0, 0x1c)
                            int32_t var_188_1 = 0xffffffff
                            (*(*rcx_6 + 0xa0))(zx.o(0), &var_268, &var_250, &var_298, &var_218)
                            void* r8_2 = var_268.q
                            
                            if (r8_2 != 0 && *(*(r8_2 + 0x78) + 0x10) != 0)
                                int32_t rdx_4 = var_148_1:0xc.d
                                int32_t r10_1 = var_148_1:8.d
                                int32_t r9_2 = var_148_1:4.d
                                int32_t r11_1 = var_148_1.d
                                int64_t var_1b0
                                int32_t rax_11 = var_1b0.d
                                int64_t var_1a8
                                int32_t rax_14
                                
                                if ((rdx_4 - r9_2) * (r10_1 - r11_1) != 0)
                                    if (r11_1 s<= rax_11)
                                        rax_11 = r11_1
                                    
                                    var_148_1.d = rax_11
                                    int32_t rax_15 = var_1b0:4.d
                                    
                                    if (r9_2 s<= rax_15)
                                        rax_15 = r9_2
                                    
                                    var_148_1:4.d = rax_15
                                    int32_t rax_16 = var_1a8.d
                                    
                                    if (r10_1 s>= rax_16)
                                        rax_16 = r10_1
                                    
                                    var_148_1:8.d = rax_16
                                    rax_14 = var_1a8:4.d
                                    
                                    if (rdx_4 s>= rax_14)
                                        rax_14 = rdx_4
                                else
                                    var_148_1.d = rax_11
                                    var_148_1:4.d = var_1b0:4.d
                                    var_148_1:8.d = var_1a8.d
                                    rax_14 = var_1a8:4.d
                                
                                int64_t* r10_2 = var_250
                                int64_t r11_2 = var_298
                                var_148_1:0xc.d = rax_14
                                uint32_t rcx_11 = (r8_2 u>> 4).d
                                var_290.q = r8_2
                                var_288 = r10_2
                                int32_t rdx_6 = (0x9e3779b9 - rcx_11) ^ rcx_11 << 8
                                int32_t var_280
                                var_280.q = r11_2
                                int32_t rbx_4 = neg.d(rdx_6 + rcx_11) ^ rdx_6 u>> 0xd
                                int32_t rcx_14 = (rcx_11 - rdx_6 - rbx_4) ^ rbx_4 u>> 0xc
                                int32_t rdx_9 = (rdx_6 - rcx_14 - rbx_4) ^ rcx_14 << 0x10
                                int32_t rbx_7 = (rbx_4 - rdx_9 - rcx_14) ^ rdx_9 u>> 5
                                int32_t rcx_17 = (rcx_14 - rdx_9 - rbx_7) ^ rbx_7 u>> 3
                                int32_t rdx_12 = (rdx_9 - rcx_17 - rbx_7) ^ rcx_17 << 0xa
                                int32_t rbx_10 = (rbx_7 - rdx_12 - rcx_17) ^ rdx_12 u>> 0xf
                                void* rbx_11
                                
                                if (var_118_1 == var_ec_1)
                                label_14111fefe:
                                    rbx_11 = sub_141113a70(&var_120, rbx_10, &var_290)
                                else
                                    void var_e8
                                    void* rcx_18 = &var_e8
                                    
                                    if (var_e0_1 != 0)
                                        rcx_18 = var_e0_1
                                    
                                    int32_t rax_36 =
                                        *(rcx_18 + ((sx.q(var_d8_1 - 1) & sx.q(rbx_10)) << 2))
                                    
                                    if (rax_36 == 0xffffffff)
                                    label_14111fefe_1:
                                        rbx_11 = sub_141113a70(&var_120, rbx_10, &var_290)
                                    else
                                        int64_t* rcx_22
                                        
                                        while (true)
                                            rcx_22 = sx.q(rax_36) * 0x30 + var_120
                                            
                                            if (*rcx_22 == r8_2 && rcx_22[1] == r10_2
                                                    && rcx_22[2] == r11_2)
                                                break
                                            
                                            rax_36 = rcx_22[5].d
                                            
                                            if (rax_36 == 0xffffffff)
                                                goto label_14111fefe_2
                                        
                                        if (rax_36 == 0xffffffff || rcx_22 == 0)
                                        label_14111fefe_2:
                                            rbx_11 = sub_141113a70(&var_120, rbx_10, &var_290)
                                        else
                                            rbx_11 = &rcx_22[3]
                                
                                int64_t rdi_1 = sx.q(*(rbx_11 + 8))
                                int32_t rcx_24 = (rdi_1 + 1).d
                                *(rbx_11 + 8) = rcx_24
                                
                                if (rcx_24 s> *(rbx_11 + 0xc))
                                    sub_140775640(rbx_11)
                                
                                uint128_t* rdx_20 = rdi_1 * 0xa0 + *rbx_11
                                *rdx_20 = var_218
                                uint128_t var_208
                                rdx_20[1] = var_208
                                rdx_20[2] = var_1f8_1
                                rdx_20[3] = var_1e8_1
                                rdx_20[4] = var_1d8_1
                                rdx_20[5] = var_1c8_1
                                rdx_20[6] = var_1b8.o
                                rdx_20[7] = var_1a8.o
                                rdx_20[8] = var_198_1
                                rdx_20[9] = var_188_1.o
                            
                            r8 = 0
                        
                        rsi_1 += 1
                    while (rsi_1 s< rdi)
                    
                    int32_t var_f8
                    r9 = var_f8
                    int64_t* var_100
                    rdx_2 = var_100
                
                if (var_118_1 - var_ec_1 s> 0)
                    int32_t var_28c_1 = 1
                    int32_t rcx_26 = 0
                    var_290 = 0
                    var_288 = &var_110
                    int32_t var_280_1 = 0xffffffff
                    int64_t var_27c_1 = 0
                    
                    if (r9 != 0)
                        int64_t* r10_3 = &var_110
                        
                        if (rdx_2 != 0)
                            r10_3 = rdx_2
                        
                        int32_t temp0_2
                        int32_t temp1_1
                        temp0_2:temp1_1 = sx.q(r9 - 1)
                        int32_t rdx_23 = *r10_3
                        
                        if (rdx_23 != 0)
                        label_14112006a:
                            int32_t rax_46 = neg.d(rdx_23) & rdx_23
                            uint64_t rflags_1
                            int32_t temp0_3
                            temp0_3, rflags_1 = _bit_scan_reverse(rax_46)
                            int32_t var_28c_2 = rax_46
                            int32_t rax_47
                            
                            if (rax_46 == 0)
                                rax_47 = 0x20
                            else
                                rax_47 = 0x1f - temp0_3
                            
                            int32_t rax_48 = r8 - rax_47 + 0x1f
                            
                            if (rax_48 s> r9)
                                rax_48 = r9
                            
                            var_27c_1.d = rax_48
                        else
                            while (true)
                                int64_t rdx_24 = sx.q(rcx_26)
                                r8 += 0x20
                                rcx_26 += 1
                                var_27c_1:4.d = r8
                                var_290 = rcx_26
                                
                                if (rdx_24.d s>= (temp1_1 + (temp0_2 & 0x1f)) s>> 5)
                                    var_27c_1.d = r9
                                    break
                                
                                rdx_23 = *(r10_3 + (rdx_24 << 2) + 4)
                                var_280_1 = 0xffffffff
                                
                                if (rdx_23 != 0)
                                    goto label_14112006a
                    
                    zmm2 = var_280_1.o
                    uint128_t var_170_1 = var_290.o
                    uint128_t var_160_1 = zmm2
                    var_290.o = (&var_120).o
                    uint64_t var_270_1 = (_mm_unpackhi_pd(zmm2, zmm2.q)).q
                    var_280_1.o = var_170_1
                    
                    if ((zmm2.q u>> 0x20).d s< r9)
                        int32_t i_1
                        int32_t i = i_1
                        
                        do
                            void** rdi_2 = var_290.q
                            void* rsi_3 = *rdi_2 + sx.q(i) * 0x30
                            
                            if (*(rsi_3 + 0x20) s> 0)
                                zmm2.d = 1f f/ _mm_cvtepi32_ps(zx.o(var_138_1)).d
                                sub_1411fc2d0(rsi_3 + 0x18, 
                                    _mm_unpacklo_ps(0x3f800000, 0x3f800000).q, zmm2)
                                int64_t* rax_52 = *rdi_2
                                int64_t r12_1 = rax_52[sx.q(i) * 6]
                                int64_t* rcx_30 = *(arg4 + 0x5150)
                                var_298 = rax_52[sx.q(i) * 6 + 2]
                                sub_1419a2ec0(rcx_30, &var_240, &data_143e58870, 0)
                                uint64_t r14_2 = var_240
                                void* rdi_3 = nullptr
                                
                                if (r14_2 != 0)
                                    int64_t rdx_27 = sx.q(*(r14_2 + 0x10c))
                                    int64_t* rbx_14 = *(var_238.q + 0x10)
                                    int64_t rax_55 = rbx_14[3]
                                    
                                    if (*(rax_55 + (rdx_27 << 3)) == 0)
                                        sub_1419ccf30(rbx_14, rdx_27.d)
                                        rax_55 = rbx_14[3]
                                    
                                    rdi_3 = *(rax_55 + (rdx_27 << 3))
                                
                                *(arg2 + 0x1b0) = rdi_3
                                sub_14198aa60(rdi_3)
                                void*** rcx_35 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                void* rax_56 = &rcx_35[3]
                                
                                if (rax_56 u> *(arg2 + 0x38))
                                    sub_140b0e3d0(arg2 + 0x30, 0x20)
                                    rcx_35 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                    rax_56 = &rcx_35[3]
                                
                                *(arg2 + 0x30) = rax_56
                                void**** rax_57 = *(arg2 + 8)
                                *(arg2 + 0x14) += 1
                                *rax_57 = rcx_35
                                *(arg2 + 8) = &rcx_35[1]
                                rcx_35[1] = 0
                                *rcx_35 = &data_142dd5b40
                                rcx_35[2] = rdi_3
                                int32_t var_2a0_1 = *(rsi_3 + 0x20)
                                int64_t var_2a8_1 = var_298
                                int64_t var_2b0_1 = r12_1
                                float* var_2b8_1 = arg9
                                int128_t* var_2d8
                                var_2d8.d = zmm13.d
                                sub_141143c50(r14_2, arg2, arg3, arg4, var_2d8, arg6, arg7, arg8)
                                var_2d8.d = 1
                                int32_t temp2_1
                                int32_t temp3_1
                                temp2_1:temp3_1 = sx.q(arg9[8] i+ 7)
                                int32_t temp4_1
                                int32_t temp5_1
                                temp4_1:temp5_1 = sx.q(arg9[7] i+ 7)
                                sub_1419cd1c0(arg2, r14_2, ((temp4_1 & 7) + temp5_1) s>> 3, 
                                    ((temp2_1 & 7) + temp3_1) s>> 3, var_2d8.d)
                                sub_14077cfd0(r14_2 + 0x156, arg2, *(arg2 + 0x1b0))
                                int64_t* rdi_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                int64_t rcx_42 = *(*(arg7 + 0xc0) + 0x18)
                                var_298 = rcx_42
                                void* rax_70 = &rdi_8[1]
                                
                                if (rax_70 u> *(arg2 + 0x38))
                                    sub_140b0e3d0(arg2 + 0x30, 0x10)
                                    rcx_42 = var_298
                                    rdi_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                    rax_70 = &rdi_8[1]
                                
                                *(arg2 + 0x30) = rax_70
                                *rdi_8 = rcx_42
                                void*** rcx_46 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                void* rax_71 = &rcx_46[6]
                                
                                if (rax_71 u> *(arg2 + 0x38))
                                    sub_140b0e3d0(arg2 + 0x30, 0x38)
                                    rcx_46 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                    rax_71 = &rcx_46[6]
                                
                                *(arg2 + 0x30) = rax_71
                                void**** rax_72 = *(arg2 + 8)
                                *(arg2 + 0x14) += 1
                                *rax_72 = rcx_46
                                *(arg2 + 8) = &rcx_46[1]
                                rcx_46[1] = 0
                                *rcx_46 = &data_142da7798
                                rcx_46[2].d = 1
                                rcx_46[3] = rdi_8
                                rcx_46[4].d = 0
                                *(rcx_46 + 0x24) = 1
                                rcx_46[5] = 0
                            
                            var_27c_1:4.d &= not.d(var_288:4.d)
                            sub_14059bdd0(&var_288)
                            i = i_1
                        while (i s< *(var_280_1.q + 0x18))
                
                int32_t var_d8_2 = 0
                
                if (var_e0_1 != 0)
                    sub_140a74f90(var_e0_1)
                
                result = sub_14100e4f0(&var_120)

__security_check_cookie(rax_1 ^ &var_2f8)
return result
