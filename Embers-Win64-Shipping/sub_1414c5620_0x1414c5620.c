// 函数: sub_1414c5620
// 地址: 0x1414c5620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x1030)
void var_1048
int64_t rax_1 = __security_cookie ^ &var_1048
void* r12 = arg1
char result = sub_1414e09c0(*(arg1 + 8), arg1 + 0x10)

if (result != 0)
    sub_140b33630("VolumetricFog")
    int128_t* rdi_1 = *(*(r12 + 8) + 0x1c18)
    int128_t* var_fe8_1 = rdi_1
    void var_918
    sub_1419928d0(&var_918, arg2)
    int32_t i_1 = 0
    
    if (*(r12 + 0xa8) s> 0)
        int64_t r8_1 = 0
        TEB* gsbase
        void* rax_4 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
        uint128_t zmm13
        uint128_t var_b8_1 = zmm13
        int128_t zmm14 = 0x3f800000
        uint128_t zmm15 = 0xbf000000
        int64_t var_fa0_1 = 0
        int32_t i
        
        do
            int32_t rbx_1 = *(arg2 + 0x8c)
            int64_t* r14_2 = r8_1 * 0x5240 + *(r12 + 0xa0)
            int32_t rax_5 = r14_2[0x15b].d
            
            if (rbx_1 != rax_5)
                bool cond:0_1 = *(arg2 + 0x14) u> 0
                *(arg2 + 0x8c) = rax_5
                
                if (cond:0_1)
                    void*** rdx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_6 = &rdx_4[3]
                    
                    if (rax_6 u> *(arg2 + 0x38))
                        sub_140b0e3d0(arg2 + 0x30, 0x20)
                        rdx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_6 = &rdx_4[3]
                    
                    rdi_1 = var_fe8_1
                    *(arg2 + 0x30) = rax_6
                    int64_t* rax_7 = *(arg2 + 8)
                    *(arg2 + 0x14) += 1
                    *rax_7 = rdx_4
                    int32_t rax_8 = *(arg2 + 0x8c)
                    *(arg2 + 8) = &rdx_4[1]
                    rdx_4[1] = 0
                    *rdx_4 = &data_142f11588
                    rdx_4[2].d = rax_8
                else
                    *(arg2 + 0x90) = rax_5
            
            int32_t r8_2 = data_1439b706c
            int32_t r10_2 = r14_2[0x2b4].d - r14_2[0x2b3].d
            int32_t r9_2 = *(r14_2 + 0x15a4) - *(r14_2 + 0x159c)
            int32_t rcx_5 = data_1439c7a88
            int32_t r12_1 = divs.dp.d(sx.q(r8_2 - 1 + r10_2), r8_2)
            int32_t r15_1
            int32_t temp0_2
            
            if (r12_1 s<= rcx_5)
                temp0_2 = divs.dp.d(sx.q(r8_2 - 1 + r9_2), r8_2)
                r15_1 = temp0_2
            
            if (r12_1 s> rcx_5 || temp0_2 s> rcx_5)
                float zmm2 = zmm14.d f/ _mm_cvtepi32_ps(zx.o(rcx_5)).d
                uint128_t zmm1_1
                zmm1_1.d = _mm_cvtepi32_ps(zx.o(r9_2)).d f* zmm2
                uint128_t zmm3
                zmm3.d = _mm_cvtepi32_ps(zx.o(r10_2)).d f* zmm2
                zmm1_1.d = zmm1_1.d f+ zmm1_1.d
                zmm3.d = zmm3.d f+ zmm3.d
                uint128_t zmm0_1
                zmm0_1.d = zmm15.d f- zmm1_1.d
                int32_t rcx_7 = int.d(zmm0_1.d) s>> 1
                zmm0_1.d = zmm15.d f- zmm3.d
                int32_t rcx_8 = neg.d(rcx_7)
                int32_t rax_19 = neg.d(int.d(zmm0_1.d) s>> 1)
                
                if (rax_19 s>= rcx_8)
                    rcx_8 = rax_19
                
                r12_1 = divs.dp.d(sx.q(rcx_8 - 1 + r10_2), rcx_8)
                r15_1 = divs.dp.d(sx.q(rcx_8 - 1 + r9_2), rcx_8)
            
            int32_t rax_28 = data_1439b7070
            int32_t var_ecc_1 = r15_1
            int64_t var_ec0
            sub_1414cd150(&var_ec0, r14_2[0x1a6].d.q, *(rdi_1 + 0x98), rax_28)
            char var_a78 = 0
            void* var_968_1 = nullptr
            int32_t var_954_1 = 0x10
            int32_t var_958_1 = 0x10
            void var_a68
            memset(&var_a68, 0, 0x100)
            void var_cd8
            int32_t* rax_30 = sub_1414e85e0(&var_cd8, *(*r14_2 + 0x3c))
            int32_t var_f0c_1 = 0x3f800000
            void* rcx_12 = &var_a68
            int32_t j = 1
            int32_t zmm1_2 = rax_30[1]
            float var_f18[0x4]
            var_f18[0] = *rax_30
            int32_t zmm3_1 = rax_30[2]
            float zmm2_1[0x4] = _mm_shuffle_ps(var_f18, var_f18, 0xe1)
            zmm2_1[0] = zmm1_2
            zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xc6)
            
            if (var_968_1 != 0)
                rcx_12 = var_968_1
            
            zmm2_1[0] = zmm3_1
            zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xc9)
            var_f18 = zmm2_1
            *rcx_12 = zmm2_1
            
            if (data_1439b7080 s> 1)
                int32_t var_efc_1 = 0x3f800000
                int64_t rsi_1 = 0x10
                
                do
                    void var_ccc
                    int32_t* rax_33 = sub_1414e85e0(&var_ccc, *(*r14_2 + 0x3c) - j)
                    void* rcx_14 = &var_a68
                    rsi_1 += 0x10
                    int32_t zmm1_3 = rax_33[1]
                    float var_f08[0x4]
                    var_f08[0] = *rax_33
                    int32_t zmm3_2 = rax_33[2]
                    float zmm2_2[0x4] = _mm_shuffle_ps(var_f08, var_f08, 0xe1)
                    zmm2_2[0] = zmm1_3
                    
                    if (var_968_1 != 0)
                        rcx_14 = var_968_1
                    
                    zmm2_2 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xc6)
                    zmm2_2[0] = zmm3_2
                    j += 1
                    zmm2_2 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xc9)
                    var_f08 = zmm2_2
                    *(rcx_14 + rsi_1 - 0x10) = zmm2_2
                while (j s< data_1439b7080)
            
            void* rax_35
            
            if (data_1439b7074 != 0)
                rax_35 = r14_2[0x2b5]
            
            char var_ff8_1
            void* rsi_2
            
            if (data_1439b7074 == 0 || rax_35 == 0)
                rsi_2 = arg1
                var_ff8_1 = 0
                var_a78 = 0
            else
                rsi_2 = arg1
                var_ff8_1 = 1
                
                if (*(r14_2 + 0xd64) != 0 || (*(r14_2 + 0x497c) & 8) != 0 || *(rsi_2 + 0x51) == 0
                        || *(rax_35 + 0xd38) == 0)
                    var_a78 = 0
                else
                    var_a78 = 1
            
            if (data_143eedc60 s> *(rax_4 + 0x14))
                _Init_thread_header(&data_143eedc60)
                
                if (data_143eedc60 == 0xffffffff)
                    sub_140b58170(&data_143eedc58, "ComputeVolumetricFog", 1)
                    _Init_thread_footer(&data_143eedc60)
            
            void* rax_38 = r14_2[0x2b5]
            int32_t rcx_15
            
            if (rax_38 == 0)
                rcx_15 = rax_38.d
            else
                rcx_15 = *(rax_38 + 0x28)
            
            int64_t* rdi_2 = data_1439b70c0
            int32_t var_f94_1 = rcx_15
            int64_t var_6a8_1 = data_143eedc58.q
            int32_t var_fc0
            int64_t var_858
            sub_140865c40(&var_858, &var_fc0, rdi_2)
            int64_t rax_41 = sx.q(var_fc0)
            void* const rcx_17
            
            if (rax_41.d == 0xffffffff)
                rcx_17 = nullptr
            else
                rcx_17 = var_858 + rax_41 * 0x18
            
            int64_t* rax_43 = rcx_17 + 8
            
            if (rcx_17 == 0)
                rax_43 = nullptr
            
            int64_t* var_910
            void var_8f8
            void*** rcx_18
            
            if (rax_43 == 0)
                int128_t* rax_45 = (*(*rdi_2 + 0x10))(rdi_2)
                void*** rax_46 = sub_14081d830(0x88, var_910, 1, 0)
                void*** rcx_20 = rax_46
                
                if (rax_46 == 0)
                    rcx_20 = rax_46
                else
                    rcx_20[1] = u"External"
                    rcx_20[2] = 0
                    rcx_20[3].b = 0
                    *(rcx_20 + 0x1c) = 0
                    rcx_20[4] = 0
                    rcx_20[5].w = 0x200
                    *rcx_20 = &data_142f11960
                    *(rcx_20 + 0x30) = *rax_45
                    *(rcx_20 + 0x40) = rax_45[1]
                    *(rcx_20 + 0x50) = rax_45[2]
                    *(rcx_20 + 0x60) = rax_45[3]
                    int128_t zmm0_3 = rax_45[4]
                    rcx_20[0x10] = 0
                    *(rcx_20 + 0x70) = zmm0_3
                
                int64_t rax_47 = data_1439b70c0
                void*** var_fc8 = rcx_20
                rcx_20[0x10] = rax_47
                var_fc8[2] = *(data_1439b70c0 + 0x10)
                void**** var_e10 = &var_fc8
                int64_t* var_e08_1 = &data_1439b70c0
                void var_e18
                sub_14107bc20(&var_8f8, &var_e18, &var_e10, nullptr)
                int64_t var_ee0 = data_1439b70c0
                int64_t* var_e00 = &var_ee0
                void**** var_df8_1 = &var_fc8
                void var_ef8
                sub_14107baa0(&var_858, &var_ef8, &var_e00, nullptr)
                rcx_18 = var_fc8
            else
                rcx_18 = *rax_43
            
            int32_t var_e60_1 = rax_28
            void*** var_f78 = rcx_18
            char var_ff7
            char* var_1010_1 = &var_ff7
            uint64_t var_e68 = r12_1.q
            int128_t var_cb8
            int512_t zmm6_1
            zmm6_1, zmm13, zmm14, zmm15 = sub_14150ede0(rsi_2, &var_918, r14_2, &var_e68, 
                *(var_fe8_1 + 0x98), &var_cb8, &var_f78, var_1010_1)
            int32_t rax_53 = data_1439c7ae8
            int128_t zmm8_1 = data_1439c7ad8
            int32_t var_f54_1 = r12_1
            wchar16 const* const var_f28_1 = u"UnknownTextureVolume"
            int32_t var_f50_1 = r15_1
            int64_t var_f3c_1 = 0xa
            int16_t var_f30_1 = 0
            int32_t var_f34_1 = 0x40010009
            int128_t zmm12_1 = var_f3c_1:4.o
            int128_t var_cf8_1 = zmm12_1
            var_cf8_1.d = data_143ed33e0
            zmm6_1.o = var_cf8_1
            int16_t var_f1f_1 = 0
            char var_f20_1 = 0
            int128_t zmm11_1 = var_f28_1.o
            int32_t var_f4c_1 = rax_28
            int128_t zmm9_1 = rax_53.o
            int32_t var_f48_1 = 1
            int32_t var_f44_1 = 0x10000
            int16_t var_f40_1 = 1
            int128_t zmm10_1 = var_f48_1.o
            int128_t var_b78_1 = zmm11_1
            var_b78_1.q = u"VBufferA"
            int128_t var_d28 = zmm8_1
            int128_t var_d18_1 = zmm9_1
            int128_t var_d08_1 = zmm10_1
            int128_t var_ce8_1 = zmm11_1
            void*** rax_55
            int128_t zmm6_2
            rax_55, zmm6_2 = sub_14081d830(0x88, var_910, 1, 0)
            
            if (rax_55 == 0)
                rax_55 = nullptr
            else
                rax_55[1] = u"VBufferA"
                rax_55[2] = 0
                rax_55[3].b = 0
                *(rax_55 + 0x1c) = 0
                rax_55[4] = 0
                rax_55[5].w = 0x200
                *(rax_55 + 0x30) = zmm8_1
                *rax_55 = &data_142f11960
                *(rax_55 + 0x40) = zmm9_1
                rax_55[0x10] = 0
                *(rax_55 + 0x50) = zmm10_1
                *(rax_55 + 0x60) = zmm6_2
                *(rax_55 + 0x70) = var_b78_1
            
            int128_t var_b28_1 = zmm11_1
            var_b28_1.q = u"VBufferB"
            void*** rax_56
            int128_t zmm6_3
            rax_56, zmm6_3 = sub_14081d830(0x88, var_910, 1, 0)
            
            if (rax_56 == 0)
                rax_56 = nullptr
            else
                rax_56[1] = u"VBufferB"
                rax_56[2] = 0
                rax_56[3].b = 0
                *(rax_56 + 0x1c) = 0
                rax_56[4] = 0
                rax_56[5].w = 0x200
                *(rax_56 + 0x30) = zmm8_1
                *rax_56 = &data_142f11960
                *(rax_56 + 0x40) = zmm9_1
                rax_56[0x10] = 0
                *(rax_56 + 0x50) = zmm10_1
                *(rax_56 + 0x60) = zmm6_3
                *(rax_56 + 0x70) = var_b28_1
            
            int16_t var_e50_1 = 0
            void*** rax_57 = sub_14081d830(0x28, var_910, 1, 0)
            
            if (rax_57 == 0)
                rax_57 = nullptr
            else
                rax_57[1] = rax_55[1]
                *rax_57 = &data_142f285c0
                rax_57[2] = 0
                *(rax_57 + 0x18) = rax_55.o
            
            int16_t var_e40_1 = 0
            void*** rax_58 = sub_14081d830(0x28, var_910, 1, 0)
            
            if (rax_58 == 0)
                rax_58 = nullptr
            else
                rax_58[1] = rax_56[1]
                *rax_58 = &data_142f285c0
                rax_58[2] = 0
                *(rax_58 + 0x18) = rax_56.o
            
            int128_t* rax_59
            int512_t zmm1_5
            rax_59, zmm1_5 = sub_14081d830(0x50, var_910, 1, 0)
            int128_t* rdi_6 = rax_59
            
            if (rax_59 == 0)
                rdi_6 = nullptr
            else
                __builtin_memset(rax_59 + 0x28, 0, 0x20)
            
            memset(rdi_6, 0, 0x50)
            *rdi_6 = *(var_fe8_1 + 0x74)
            rdi_6[1] = *(var_fe8_1 + 0x84)
            rdi_6[2].d = *(var_fe8_1 + 0x94)
            zmm1_5.o = data_142d3f660
            *(rdi_6 + 0x38) = rax_57
            rdi_6[4].q = rax_58
            int128_t var_c58
            __builtin_memcpy(&var_c58, 
                "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x"
            "00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
            "00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00"
            "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00"
            "00\x00\x00\x00\x00\x00\x00\x80\x3f", 
                0x60)
            int128_t var_bd8
            __builtin_memset(&var_bd8, 0, 0x20)
            sub_1411463f0(r14_2, &var_c58)
            int64_t* rcx_29 = data_143f0f180
            int128_t* var_1020_1
            var_1020_1.d = 1
            void* var_f90
            (*(*rcx_29 + 0xf8))(rcx_29, &var_f90, &var_c58, &data_143e58180, 0, var_1020_1)
            void* rax_64 = var_f90
            void* var_f88 = rax_64
            
            if (rax_64 != 0)
                *(rax_64 + 8) += 1
                zmm11_1 = var_f28_1.o
                zmm12_1 = var_f3c_1:4.o
                zmm10_1 = var_f48_1.o
                zmm9_1 = rax_53.o
            
            sub_1405d1550(&var_f90)
            sub_1405d1600(rdi_6 + 0x28, &var_f88)
            sub_1405d1550(&var_f88)
            sub_1405d16e0(&rdi_6[3], r14_2[2])
            int128_t var_d98
            char rcx_35 = sub_1419a2ec0(r14_2[0xa2a], &var_d98, &data_143ee9670, 0)
            int128_t zmm7_1 = var_d98
            int128_t var_c78_1 = zx.o(0)
            int128_t var_d88_1 = sub_1414cc950(rcx_35)
            sub_141998c50(zmm7_1.q, &data_143eed350, rdi_6)
            uint64_t var_3f8_1 = zmm13.q
            void var_3e8
            sub_1414c05a0(&var_3e8, &var_a78)
            void*** rax_65
            char rcx_38
            rax_65, rcx_38 = sub_14081d830(0x1d0, var_910, 1, 0)
            void*** rsi_3 = rax_65
            
            if (rax_65 == 0)
                rsi_3 = rax_65
            else
                sub_1414cc950(rcx_38)
                void* var_de0_1 = &data_143eed380
                int128_t var_d78 = rdi_6.o
                void var_ff0
                sub_141992bd0(rsi_3, &var_ff0, &var_d78, 2)
                *rsi_3 = &data_142fb8220
                rsi_3[8] = rdi_6
                rsi_3[9] = r14_2
                rsi_3[0xa] = var_3f8_1
                rsi_3[0xb].d = rax_28
                sub_1414c0490(&rsi_3[0xc], &var_3e8)
                *(rsi_3 + 0x1c0) = zmm7_1
            
            sub_1419968d0(&var_918, rsi_3)
            int64_t var_2d8
            
            if (var_2d8 != 0)
                sub_140a74f90(var_2d8)
            
            r12 = arg1
            void**** var_1018_1
            var_1018_1.d = *(var_fe8_1 + 0x98)
            int64_t var_ea8
            int64_t* var_1020_2 = &var_ea8
            int32_t var_1028_2
            uint64_t var_e98
            var_1028_2.q = &var_e98
            var_ea8 = var_ec0
            int32_t var_eb8
            int32_t var_ea0_1 = var_eb8
            var_e98 = zmm13.q
            int32_t var_e90_1 = rax_28
            int64_t zmm6_6 =
                sub_14151d9f0(r12, &var_918, r14_2, &var_a78, var_1028_2, var_1020_2, var_1018_1.d)
            int64_t* rdi_7 = data_1439b7160
            int32_t var_fbc
            sub_140865c40(&var_858, &var_fbc, rdi_7)
            int64_t rax_69 = sx.q(var_fbc)
            void* const rcx_45
            
            if (rax_69.d == 0xffffffff)
                rcx_45 = nullptr
            else
                rcx_45 = var_858 + rax_69 * 0x18
            
            int64_t* rax_71 = rcx_45 + 8
            
            if (rcx_45 == 0)
                rax_71 = nullptr
            
            void*** rcx_46
            
            if (rax_71 == 0)
                int128_t* rax_73 = (*(*rdi_7 + 0x10))(rdi_7)
                void*** rax_74 = sub_14081d830(0x88, var_910, 1, 0)
                void*** rcx_48 = rax_74
                
                if (rax_74 == 0)
                    rcx_48 = rax_74
                else
                    rcx_48[1] = u"External"
                    rcx_48[2] = 0
                    rcx_48[3].b = 0
                    *(rcx_48 + 0x1c) = 0
                    rcx_48[4] = 0
                    rcx_48[5].w = 0x200
                    *rcx_48 = &data_142f11960
                    *(rcx_48 + 0x30) = *rax_73
                    *(rcx_48 + 0x40) = rax_73[1]
                    *(rcx_48 + 0x50) = rax_73[2]
                    *(rcx_48 + 0x60) = rax_73[3]
                    int128_t zmm0_13 = rax_73[4]
                    rcx_48[0x10] = 0
                    *(rcx_48 + 0x70) = zmm0_13
                
                int64_t rax_75 = data_1439b7160
                void*** var_fd0 = rcx_48
                rcx_48[0x10] = rax_75
                var_fd0[2] = *(data_1439b7160 + 0x10)
                void**** var_dd8 = &var_fd0
                int64_t* var_dd0_1 = &data_1439b7160
                void var_ef4
                sub_14107bc20(&var_8f8, &var_ef4, &var_dd8, nullptr)
                int64_t var_ed8 = data_1439b7160
                int64_t* var_dc8 = &var_ed8
                void**** var_dc0_1 = &var_fd0
                void var_ef0
                zmm6_6 = sub_14107baa0(&var_858, &var_ef0, &var_dc8, nullptr)
                rcx_46 = var_fd0
            else
                rcx_46 = *rax_71
            
            void*** var_f80
            int64_t* var_1000_1 = &var_f80
            var_f80 = rcx_46
            void**** var_1008_1 = &var_d28
            int64_t var_e88 = zmm6_6
            int128_t* var_1010_2 = &var_e88
            int32_t var_e80_1 = var_eb8
            uint64_t var_e78
            int64_t* var_1018_2 = &var_e78
            int64_t* var_1020_3 = var_fe8_1
            var_1028_2.q = &var_a78
            var_e78 = zmm13.q
            int32_t var_e70_1 = rax_28
            sub_1414d76c0(r12, &var_918, r14_2, zx.q(var_ff8_1), var_1028_2, var_1020_3, 
                var_1018_2, var_1010_2, var_1008_1)
            int128_t var_ad8_1 = zmm11_1
            var_ad8_1.q = u"LightScattering"
            uint64_t rax_80 = sub_14081d830(0x88, var_910, 1, 0)
            uint64_t rdi_9 = rax_80
            
            if (rax_80 == 0)
                rdi_9 = 0
            else
                *(rax_80 + 8) = u"LightScattering"
                *(rax_80 + 0x10) = 0
                *(rax_80 + 0x1c) = 0
                *(rax_80 + 0x18) = 2
                *(rax_80 + 0x20) = 0
                *(rax_80 + 0x28) = 0x200
                *(rdi_9 + 0x30) = zmm8_1
                *rdi_9 = &data_142f11960
                *(rdi_9 + 0x40) = zmm9_1
                *(rdi_9 + 0x80) = 0
                *(rdi_9 + 0x50) = zmm10_1
                *(rdi_9 + 0x60) = zmm12_1
                *(rdi_9 + 0x70) = var_ad8_1
            
            uint64_t var_928_1 = rdi_9
            int16_t var_e30_1 = 0
            void*** rax_81 = sub_14081d830(0x28, var_910, 1, 0)
            
            if (rax_81 == 0)
                rax_81 = nullptr
            else
                rax_81[1] = *(rdi_9 + 8)
                *rax_81 = &data_142f285c0
                rax_81[2] = 0
                *(rax_81 + 0x18) = rdi_9.o
            
            void** rax_82 = sub_14081d830(0x30, var_910, 1, 0)
            void** rsi_5 = rax_82
            
            if (rax_82 == 0)
                rsi_5 = nullptr
            else
                __builtin_memset(rax_82, 0, 0x28)
            
            __builtin_memset(rsi_5, 0, 0x30)
            *rsi_5 = rax_55
            rsi_5[1] = rax_56
            rsi_5[2] = var_f80
            rsi_5[3] = var_f78
            rsi_5[4] = rax_81
            char r15_3
            
            if (data_1439b5c30 == 0 || *(*(r12 + 8) + 0x18b0) s<= 0)
                r15_3 = 0
            else
                r15_3 = 1
            
            if ((*(r12 + 0x38) & 0x100) == 0)
                rdi_9.b = 0
            else
                void* rcx_54 = *(*(r12 + 8) + 0xf80)
                
                if (rcx_54 == 0 || (*(rcx_54 + 0x20) & 9) != 9)
                    rdi_9.b = 0
                else if (sub_141108e80(r12) == 0)
                    rdi_9.b = 0
                else if (sub_14110e330(r14_2[0x2a9].d, sub_1422e5a30(r14_2)) == 0 || r15_3 == 0
                        || *(r12 + 0xa8) != 1 || zmm14.d f<= *(r14_2 + 0x2bc))
                    rdi_9.b = 0
                else
                    rdi_9.b = 1
            
            uint32_t r15_4 = zx.d(var_ff8_1)
            uint128_t var_d68
            char rcx_60 = sub_1419a2ec0(r14_2[0xa2a], &var_d68, &data_143ee9970, 
                data_1439b7080 - 1 + ((r15_4 + (zx.d(rdi_9.b) << 1)) << 4))
            uint128_t zmm7_2 = var_d68
            int128_t var_c68_1 = zx.o(0)
            int128_t var_d58_1 = sub_1414ccc30(rcx_60)
            sub_141998c50(zmm7_2.q, &data_143eed6e0, rsi_5)
            uint128_t var_670_1 = *var_fe8_1
            int128_t var_660_1 = var_fe8_1[1]
            uint128_t var_650_1 = var_fe8_1[2]
            int128_t var_640_1 = var_fe8_1[3]
            uint128_t var_630_1 = var_fe8_1[4]
            int128_t var_620_1 = var_fe8_1[5]
            uint128_t var_610_1 = var_fe8_1[6]
            uint128_t zmm0_16 = var_fe8_1[8]
            int128_t var_600_1 = var_fe8_1[7]
            int64_t rax_95 = var_fe8_1[0xa].q
            int128_t var_5e0_1 = var_fe8_1[9]
            char var_5c8_1 = r15_4.b
            uint64_t var_5c4_1 = zmm13.q
            void var_5b8
            sub_1414c05a0(&var_5b8, &var_a78)
            char rax_97 = var_ff7
            int128_t var_448_1 = var_cb8
            char var_457_1 = rdi_9.b
            void*** rax_98
            char rcx_63
            rax_98, rcx_63 = sub_14081d830(0x2d0, var_910, 1, 0)
            void*** rdi_10 = rax_98
            
            if (rax_98 == 0)
                rdi_10 = nullptr
            else
                sub_1414ccc30(rcx_63)
                void* var_db0_1 = &data_143eed710
                int128_t var_d48 = rsi_5.o
                void var_fef
                sub_141992bd0(rdi_10, &var_fef, &var_d48, 2)
                *rdi_10 = &data_142fb8230
                rdi_10[8] = rsi_5
                *(rdi_10 + 0x48) = zmm7_2
                rdi_10[0xb] = r14_2
                rdi_10[0xc] = r12
                *(rdi_10 + 0x68) = var_670_1
                *(rdi_10 + 0x78) = var_660_1
                *(rdi_10 + 0x88) = var_650_1
                *(rdi_10 + 0x98) = var_640_1
                *(rdi_10 + 0xa8) = var_630_1
                *(rdi_10 + 0xb8) = var_620_1
                *(rdi_10 + 0xc8) = var_610_1
                *(rdi_10 + 0xd8) = var_600_1
                *(rdi_10 + 0xe8) = zmm0_16
                *(rdi_10 + 0xf8) = var_5e0_1
                rdi_10[0x21] = rax_95
                rdi_10[0x22].b = var_5c8_1
                *(rdi_10 + 0x114) = var_5c4_1
                *(rdi_10 + 0x11c) = rax_28
                sub_1414c0490(&rdi_10[0x24], &var_5b8)
                rdi_10[0x50].b = rax_97
                *(rdi_10 + 0x281) = var_457_1
                *(rdi_10 + 0x290) = var_448_1
                int128_t var_ca8
                *(rdi_10 + 0x2a0) = var_ca8
                int128_t var_c98
                *(rdi_10 + 0x2b0) = var_c98
                int128_t var_c88
                *(rdi_10 + 0x2c0) = var_c88
            
            sub_1419968d0(&var_918, rdi_10)
            int64_t var_4a8
            
            if (var_4a8 != 0)
                sub_140a74f90(var_4a8)
            
            int128_t var_a88_1 = zmm11_1
            var_a88_1.q = u"IntegratedLightScattering"
            void*** rax_107 = sub_14081d830(0x88, var_910, 1, 0)
            void*** rdi_11 = rax_107
            
            if (rax_107 == 0)
                rdi_11 = nullptr
            else
                rdi_11[1] = u"IntegratedLightScattering"
                rdi_11[2] = 0
                rdi_11[3].b = 0
                *(rdi_11 + 0x1c) = 0
                rdi_11[4] = 0
                rdi_11[5].w = 0x200
                *(rdi_11 + 0x30) = zmm8_1
                *rdi_11 = &data_142f11960
                *(rdi_11 + 0x40) = zmm9_1
                rdi_11[0x10] = 0
                *(rdi_11 + 0x50) = zmm10_1
                *(rdi_11 + 0x60) = zmm12_1
                *(rdi_11 + 0x70) = var_a88_1
            
            int16_t var_e20_1 = 0
            void*** rax_108 = sub_14081d830(0x28, var_910, 1, 0)
            void*** rsi_6 = rax_108
            
            if (rax_108 == 0)
                rsi_6 = nullptr
            else
                rax_108[1] = rdi_11[1]
                rax_108[2] = 0
                *rsi_6 = &data_142f285c0
                *(rsi_6 + 0x18) = rdi_11.o
            
            uint64_t* rax_109 = sub_14081d830(0x10, var_910, 1, 0)
            uint64_t* r15_5 = rax_109
            
            if (rax_109 == 0)
                r15_5 = rax_109
            else
                *r15_5 = 0
                r15_5[1] = 0
            
            *r15_5 = 0
            r15_5[1] = 0
            *r15_5 = var_928_1
            r15_5[1] = rsi_6
            uint64_t var_268_1 = zmm13.q
            void var_258
            sub_1414c05a0(&var_258, &var_a78)
            void*** rax_112
            char rcx_70
            rax_112, rcx_70 = sub_14081d830(0x1d0, var_910, 1, 0)
            void*** rsi_7 = rax_112
            
            if (rax_112 == 0)
                rsi_7 = rax_112
            else
                sub_1414cc7e0(rcx_70)
                void* var_da0_1 = &data_143eedb50
                int128_t var_d38 = r15_5.o
                void var_fee
                sub_141992bd0(rsi_7, &var_fee, &var_d38, 2)
                *rsi_7 = &data_142fb8240
                rsi_7[8] = r15_5
                rsi_7[9] = r14_2
                rsi_7[0xa] = var_268_1
                rsi_7[0xb].d = rax_28
                sub_1414c0490(&rsi_7[0xc], &var_258)
                rsi_7[0x38] = r12
            
            sub_1419968d0(&var_918, rsi_7)
            int64_t var_148
            
            if (var_148 != 0)
                sub_140a74f90(var_148)
            
            int32_t var_7b0
            int64_t rdi_12 = sx.q(var_7b0)
            void* var_fb0_1 = &r14_2[0xa10]
            char var_fa8_1 = 1
            int32_t rax_118 = (rdi_12 + 1).d
            var_7b0 = rax_118
            int64_t var_7b8
            int32_t var_7ac
            
            if (rax_118 s> var_7ac)
                sub_14119a720(&var_7b8, rdi_12.d)
            
            int64_t rcx_76 = rdi_12 * 3
            int64_t rax_119 = var_7b8
            *(rax_119 + (rcx_76 << 3)) = rdi_11.o
            *(rax_119 + (rcx_76 << 3) + 0x10) = var_fa8_1.q
            
            if (var_ff8_1 == 0)
                void* rax_125 = r14_2[0x2b5]
                
                if (rax_125 != 0)
                    int64_t* rcx_84 = *(rax_125 + 0xd38)
                    *(rax_125 + 0xd38) = 0
                    
                    if (rcx_84 != 0)
                        (*(*rcx_84 + 0x38))(rcx_84)
            else
                int64_t rdi_13 = sx.q(var_7b0)
                char var_fa8_2 = 1
                int64_t var_fb0_2 = r14_2[0x2b5] + 0xd38
                int32_t rax_123 = (rdi_13 + 1).d
                var_7b0 = rax_123
                
                if (rax_123 s> var_7ac)
                    sub_14119a720(&var_7b8, rdi_13.d)
                
                int64_t rax_124 = var_7b8
                int64_t rcx_78 = rdi_13 * 3
                *(rax_124 + (rcx_78 << 3)) = var_928_1.o
                *(rax_124 + (rcx_78 << 3) + 0x10) = var_fa8_2.q
            
            if (var_968_1 != 0)
                sub_140a74f90(var_968_1)
            
            if (*(arg2 + 0x8c) != rbx_1)
                bool cond:7_1 = *(arg2 + 0x14) u> 0
                *(arg2 + 0x8c) = rbx_1
                
                if (cond:7_1)
                    void*** rdx_70 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_127 = &rdx_70[3]
                    
                    if (rax_127 u> *(arg2 + 0x38))
                        sub_140b0e3d0(arg2 + 0x30, 0x20)
                        rdx_70 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_127 = &rdx_70[3]
                    
                    *(arg2 + 0x30) = rax_127
                    int64_t* rax_128 = *(arg2 + 8)
                    *(arg2 + 0x14) += 1
                    *rax_128 = rdx_70
                    int32_t rax_129 = *(arg2 + 0x8c)
                    *(arg2 + 8) = &rdx_70[1]
                    rdx_70[1] = 0
                    *rdx_70 = &data_142f11588
                    rdx_70[2].d = rax_129
                else
                    *(arg2 + 0x90) = rbx_1
            
            i = i_1 + 1
            rdi_1 = var_fe8_1
            r8_1 = var_fa0_1 + 1
            i_1 = i
            var_fa0_1 = r8_1
        while (i s< *(r12 + 0xa8))
    
    sub_14199ef00(&var_918)
    sub_1410eb9e0(&var_918)
    result = sub_140b37f60("VolumetricFog")

__security_check_cookie(rax_1 ^ &var_1048)
return result
