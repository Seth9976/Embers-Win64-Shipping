// 函数: sub_142601d20
// 地址: 0x142601d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
uint64_t result = __security_cookie ^ &var_198
uint64_t result_1 = result

if (*(arg1 + 0x10) != 0 && ((*(arg1 + 0x78) & 1) != 0 || *(arg1 + 0x98) != 0))
    result = zx.q(*(arg1 + 0x74))
    
    if ((result.b & 8) == 0 && (result.b & 0x10) != 0)
        int32_t zmm0_1
        int512_t zmm1_1
        zmm0_1, zmm1_1 = sub_141e6cc90(arg1)
        void* rcx = *(*(arg1 + 0x80) + 0x7b0)
        bool z_1
        
        if (0 == *(rcx + 0x1b0))
            *(rcx + 0x1b0) = 0
            z_1 = true
        else
            *(rcx + 0x1b0)
            z_1 = false
        
        if (z_1)
            *(arg1 + 0x78) |= 1
        
        if (((*(arg1 + 0x78)).b & 1) == 0)
            int64_t* rcx_2 = *(arg1 + 0x98)
            zmm1_1.o = *(arg1 + 0x38)
            int64_t rbx_1 = **(arg1 + 0x80)
            int32_t rax_8 = (*(*rcx_2 + 0xd0))(rcx_2, zmm1_1, 0)
            (*(rbx_1 + 0xa8))(*(arg1 + 0x80), u"SetFrequencyRatio", zx.q(rax_8))
            sub_141e6bbf0(arg1)
            sub_141e6bac0(arg1)
            uint128_t zmm0_2 = *(arg1 + 0x24)
            
            if (not(zmm0_2.d f== *(arg1 + 0x2c)))
                *(arg1 + 0x80)
                int32_t var_148 = 0
                zmm0_2 = sub_141e7e490()
                int64_t* rbx_2 = *(arg1 + 0x80)
                float zmm1_2 = *(arg1 + 0x24)
                int32_t var_140_1 = zmm0_2.d
                zmm0_2 = _mm_cvtepi32_ps(zx.o(*(rbx_2 + 0xc)))
                zmm1_2 = (zmm1_2 + zmm1_2) f/ zmm0_2.d
                
                if (not(zmm1_2 >= 0f))
                    int32_t var_144_1 = 0
                else if (zmm1_2 >= 1f)
                    int32_t var_144_3 = 0x3f800000
                else
                    float var_144_2 = zmm1_2
                
                int64_t* rcx_7 = *(arg1 + 0x98)
                int64_t rbx_3 = *rbx_2
                int32_t rax_10 = (*(*rcx_7 + 0x40))(rcx_7, &var_148, 0)
                (*(rbx_3 + 0xa8))(*(arg1 + 0x80), u"SetFilterParameters", zx.q(rax_10))
                *(arg1 + 0x2c) = *(arg1 + 0x24)
            
            void var_160
            (*(**(arg1 + 0x98) + 0xc8))(zmm0_2, &var_160)
            int64_t* rcx_10 = *(arg1 + 0x10)
            int32_t var_154
            *(arg1 + 0x60) = var_154
            int32_t var_134_1 = 0
            int64_t var_12c
            __builtin_memset(&var_12c, 0, 0x14)
            int64_t var_114
            __builtin_memset(&var_114, 0, 0x1c)
            int32_t var_138 = 0
            int128_t zmm0_3
            int512_t zmm6_1
            zmm0_3, zmm6_1 = sub_141e5e020(rcx_10)
            float zmm0_4[0x4] = sub_1419e3820(arg1, zmm0_3)
            zmm6_1.o = zmm0_4
            float zmm6_2[0x4] = sub_1425fed50(arg1, &var_138, zmm0_4)
            int32_t rdx_4 = *(*(arg1 + 0x18) + 0xc)
            int64_t var_124
            float zmm1_4[0x4]
            int32_t rax_17
            int64_t rbx_4
            
            if (rdx_4 == 1)
                if ((1 & (*(arg1 + 0x1ac) u>> 1).b) == 0)
                    int64_t* rax_20 = *(arg1 + 0x80)
                    int64_t* rcx_18 = *(arg1 + 0x98)
                    int128_t var_f8 = var_138.o
                    int32_t var_e8_1 = var_12c:4.d.d
                    float var_e4_1 = var_124.d[0]
                    rbx_4 = *rax_20
                    rax_17 = (*(*rcx_18 + 0x80))(rcx_18, *(arg1 + 0xb4), 1, 6, &var_f8, 0)
                    (*(rbx_4 + 0xa8))(*(arg1 + 0x80), u"SetOutputMatrix (mono)", zx.q(rax_17))
                else
                    sub_1426011c0(arg1, &var_138)
            else if (rdx_4 == 2)
                sub_1426011c0(arg1, &var_138)
            else if (rdx_4 == 4)
                int64_t* rax_15 = *(arg1 + 0x80)
                zmm1_4 = var_12c.d
                int64_t* rcx_16 = *(arg1 + 0x98)
                int32_t var_c8 = var_138.d
                int32_t var_b4_1 = var_134_1.d
                int32_t var_80_1 = var_12c:4.d.d
                int32_t var_6c_1 = var_124.d.d
                int64_t var_c4_1 = 0
                int64_t var_bc_1 = 0
                int64_t var_b0
                __builtin_memset(&var_b0, 0, 0x18)
                int64_t var_88_1 = 0
                int64_t var_7c_1 = 0
                int64_t var_74_1 = 0
                float var_98_1[0x4] = _mm_shuffle_ps(zmm1_4, zmm1_4, 0)
                rbx_4 = *rax_15
                rax_17 = (*(*rcx_16 + 0x80))(rcx_16, *(arg1 + 0xb4), 4, 6, &var_c8, 0)
                (*(rbx_4 + 0xa8))(*(arg1 + 0x80), u"SetOutputMatrix (4 channel)", zx.q(rax_17))
            else if (rdx_4 == 6)
                sub_142600f60(arg1, &var_138)
            else
                int64_t* rcx_14 = *(arg1 + 0x98)
                (*(*rcx_14 + 0x60))(rcx_14, zmm6_2, 0)
            
            if ((*(arg1 + 0x74) & 1) != 0)
                int32_t rdx_13 = *(*(arg1 + 0x18) + 0xc)
                
                if (rdx_13 == 1)
                    if ((1 & (*(arg1 + 0x1ac) u>> 1).b) == 0)
                        int64_t* rax_24 = *(arg1 + 0x80)
                        int128_t zmm0_5 = var_124:4.d
                        int64_t* rcx_23 = *(arg1 + 0x98)
                        int32_t var_168 = zmm0_5.d
                        int32_t var_164_1 = zmm0_5.d
                        int64_t rbx_5 = *rax_24
                        int32_t rax_26 =
                            (*(*rcx_23 + 0x80))(rcx_23, *(arg1 + 0xc0), 1, 2, &var_168, 0, var_168)
                        (*(rbx_5 + 0xa8))(*(arg1 + 0x80), SetOutputMatrix (Mono reverb)", 
                            zx.q(rax_26))
                    else
                        sub_142601360(arg1, &var_138)
                else if (rdx_13 == 2)
                    sub_142601360(arg1, &var_138)
            
            result = *(arg1 + 0x10)
            
            if ((*(result + 0x100) & 2) != 0)
                int32_t r8_6 = zx.d(*(arg1 + 0x74)) & 1
                int32_t rdx_18 = *(*(arg1 + 0x18) + 0xc)
                int32_t var_11c
                int32_t rax_30
                int64_t rbx_6
                
                if (rdx_18 == 1)
                    int64_t* rax_31 = *(arg1 + 0x80)
                    int64_t* rcx_27 = *(arg1 + 0x98)
                    int32_t var_d8_1 = var_11c.d
                    int64_t var_e0 = 0
                    int64_t var_d4_1 = 0
                    int32_t var_cc_1 = 0
                    rbx_6 = *rax_31
                    rax_30 = (*(*rcx_27 + 0x80))(rcx_27, *(arg1 + (sx.q(r8_6) + 0x10) * 0xc), 1, 6, 
                        &var_e0, 0)
                    result = (*(rbx_6 + 0xa8))(*(arg1 + 0x80), SetOutputMatrix (Mono radio)", 
                        zx.q(rax_30))
                else if (rdx_18 == 2)
                    int64_t* rax_27 = *(arg1 + 0x80)
                    zmm1_4 = var_11c
                    int64_t* rcx_26 = *(arg1 + 0x98)
                    float var_58_1 = zmm1_4[0]
                    float var_54_1 = zmm1_4[0]
                    int128_t var_68 = zx.o(0)
                    int128_t var_50
                    __builtin_memset(&var_50, 0, 0x18)
                    rbx_6 = *rax_27
                    rax_30 = (*(*rcx_26 + 0x80))(rcx_26, *(arg1 + (sx.q(r8_6) + 0x10) * 0xc), 2, 6, 
                        &var_68, 0)
                    result = (*(rbx_6 + 0xa8))(*(arg1 + 0x80), SetOutputMatrix (Stereo radio)", 
                        zx.q(rax_30))
        else
            int64_t* rcx_1 = **(arg1 + 0x10)
            result = (*(*rcx_1 + 0x288))(rcx_1)
            
            if (not(zmm0_1 f> *(arg1 + 0x34)))
                result = *(arg1 + 0x10)
                
                if (*(result + 0xf8) != 0)
                    *(arg1 + 0x198)
                    *(arg1 + 0x198) = 1
                else
                    *(arg1 + 0x19c)
                    *(arg1 + 0x19c) = 1

__security_check_cookie(result_1 ^ &var_198)
return result
