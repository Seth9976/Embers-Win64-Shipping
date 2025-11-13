// 函数: sub_141b6af30
// 地址: 0x141b6af30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_288
int64_t rax_1 = __security_cookie ^ &var_288
uint64_t r13
r13.b = 0
int64_t* r15 = *(arg5 + 0x28)
int32_t* var_230 = arg3
int64_t* var_228 = arg7
char var_258 = 0

if (r15 != *arg8 || arg14 != 0)
    if (r15 == 0)
        void*** rcx_119 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_97 = &rcx_119[5]
        
        if (rax_97 u> *(arg1 + 0x38))
            sub_140b0e3d0(arg1 + 0x30, 0x30)
            rcx_119 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_97 = &rcx_119[5]
        
        *(arg1 + 0x30) = rax_97
        int64_t* rax_98 = *(arg1 + 8)
        *(arg1 + 0x14) += 1
        *rax_98 = rcx_119
        *(arg1 + 8) = &rcx_119[1]
        rcx_119[1] = 0
        *rcx_119 = &data_142f18bc8
        rcx_119[2].b = 0
        *(rcx_119 + 0x14) = 0
        *(rcx_119 + 0x1c) = 0
        *(arg11 + 0x40) = data_14395d9e8
        *arg2 = 0
    else
        int32_t r14_1 = 0
        int128_t zmm6
        int128_t var_58_1 = zmm6
        void* rdx_30
        int64_t var_250
        float var_248
        float var_240
        float var_238
        int64_t var_1d8
        void var_1c0
        int64_t var_d0
        uint128_t zmm1
        float zmm2
        uint128_t zmm3
        
        if (*(r15 + 0x34) == 0)
            int64_t rdx_7 = sx.q(r15[1].d)
            int32_t rcx_27 = *arg3
            float zmm7[0x4]
            float var_68_1[0x4] = zmm7
            int64_t* rbx
            void** rsi_2
            
            if (rcx_27 + rdx_7.d u> 0xff)
                *arg3 = 0
            label_141b6b408:
                rsi_2 = arg1 + 0x30
                void* rcx_30 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_22 = rcx_30 + 0x28
                
                if (rax_22 u> rsi_2[1])
                    sub_140b0e3d0(rsi_2, 0x30)
                    rcx_30 = (*rsi_2 + 7) & 0xfffffffffffffff8
                    rax_22 = rcx_30 + 0x28
                
                *rsi_2 = rax_22
                rbx.b = 2
                void** rax_23 = *(arg1 + 8)
                *(arg1 + 0x14) += 1
                *rax_23 = rcx_30
                *(arg1 + 8) = rcx_30 + 8
                *(rcx_30 + 8) = 0
                *rcx_30 = &data_142f18bc8
                *(rcx_30 + 0x10) = 0
                *(rcx_30 + 0x14) = 0
                *(rcx_30 + 0x1c) = 0
                goto label_141b6b7fe
            
            if (rcx_27 == 0)
                goto label_141b6b408
            
            int64_t var_218
            int32_t* rax_27 = sub_140da32d0(*r15 - 0x24 + rdx_7 * 0x24, &var_218)
            float zmm9[0x4] = rax_27[2]
            zmm7 = *rax_27
            zmm9[0] = zmm9[0] + 0.5f
            float zmm6_1[0x4] = rax_27[1]
            int32_t rcx_36 = int.d(zmm9[0])
            
            if (rcx_36 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_36)).d f== zmm9[0]))
                zmm9 = _mm_cvtepi32_ps(zx.o(rcx_36
                    - (_mm_movemask_ps(_mm_unpacklo_ps(zmm9, zmm9[0].q)) & 1)))
            
            float zmm8_1[0x4] = rax_27[3]
            zmm8_1[0] = zmm8_1[0] + 0.5f
            int32_t rcx_38 = int.d(zmm8_1[0])
            
            if (rcx_38 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_38)).d f== zmm8_1[0]))
                zmm8_1 = _mm_cvtepi32_ps(zx.o(rcx_38
                    - (_mm_movemask_ps(_mm_unpacklo_ps(zmm8_1, zmm8_1[0].q)) & 1)))
            
            (*(*arg4 + 0x18))(arg4, &var_238)
            zmm7[0] = zmm7[0] + 0.5f
            uint128_t zmm11 = _mm_cvtepi32_ps(zx.o(var_238))
            float zmm5_1 = *arg9
            int32_t rcx_41 = int.d(zmm7[0])
            int32_t var_234
            zmm1 = _mm_cvtepi32_ps(zx.o(var_234))
            
            if (rcx_41 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_41)).d f== zmm7[0]))
                zmm7 = _mm_cvtepi32_ps(zx.o(rcx_41
                    - (_mm_movemask_ps(_mm_unpacklo_ps(zmm7, zmm7[0].q)) & 1)))
            
            zmm3 = *(arg9 + 4)
            zmm6_1[0] = zmm6_1[0] + 0.5f
            zmm7[0] = zmm7[0] + zmm5_1
            int32_t rcx_43 = int.d(zmm6_1[0])
            
            if (rcx_43 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_43)).d f== zmm6_1[0]))
                zmm6_1 = _mm_cvtepi32_ps(zx.o(rcx_43
                    - (_mm_movemask_ps(_mm_unpacklo_ps(zmm6_1, zmm6_1[0].q)) & 1)))
            
            zmm6_1[0] = zmm6_1[0] f+ zmm3.d
            var_240 = zmm7[0]
            var_248.q = 0
            float var_23c_3 = zmm6_1[0]
            
            if (zmm7[0] < 0f || zmm6_1[0] < 0f)
                rcx_43.b = 0
            else
                rcx_43.b = 1
            
            float* rax_37 = &var_240
            
            if (rcx_43.b == 0)
                rax_37 = &var_248
            
            uint128_t zmm0_1 = *rax_37
            float zmm4_2 = rax_37[1]
            var_248 = zmm11.d
            int32_t var_244_3 = zmm1.d
            var_240 = zmm0_1.d
            float var_23c_4 = zmm4_2
            
            if (zmm0_1.d f> zmm11.d || zmm4_2 f> zmm1.d)
                rcx_43.b = 0
            else
                rcx_43.b = 1
            
            zmm5_1 = zmm5_1 + zmm9[0]
            var_218 = 0
            zmm3.d = zmm3.d f+ zmm8_1[0]
            float* rax_38 = &var_240
            
            if (rcx_43.b == 0)
                rax_38 = &var_248
            
            var_250.d = zmm5_1
            zmm4_2 = rax_38[1]
            var_250:4.d = zmm3.d
            char rdx_12
            
            if (zmm5_1 < 0f || zmm3.d f< 0f)
                rdx_12 = 0
            else
                rdx_12 = 1
            
            int128_t* rcx_44 = &var_250
            
            if (rdx_12 == 0)
                rcx_44 = &var_218
            
            zmm0_1 = *rcx_44
            zmm2 = *(rcx_44 + 4)
            var_250.d = zmm11.d
            var_250:4.d = zmm1.d
            var_218.d = zmm0_1.d
            var_218:4.d = zmm2
            
            if (zmm0_1.d f> zmm11.d || zmm2 f> zmm1.d)
                rdx_12 = 0
            else
                rdx_12 = 1
            
            int32_t r12_3 = (int.q(fconvert.t(*rax_38))).d
            float* rcx_45 = &var_218
            
            if (rdx_12 == 0)
                rcx_45 = &var_250
            
            rsi_2 = arg1 + 0x30
            zmm2 = rcx_45[1]
            rbx = int.q(fconvert.t(*rcx_45))
            void* rcx_48 = (*rsi_2 + 7) & 0xfffffffffffffff8
            
            if (arg10 == 0)
                var_218 = int.q(zmm4_2)
                void* rax_45 = rcx_48 + 0x28
                
                if (rax_45 u> rsi_2[1])
                    sub_140b0e3d0(rsi_2, 0x30)
                    rcx_48 = (*rsi_2 + 7) & 0xfffffffffffffff8
                    rax_45 = rcx_48 + 0x28
                
                *rsi_2 = rax_45
                void** rax_46 = *(arg1 + 8)
                *(arg1 + 0x14) += 1
                *rax_46 = rcx_48
                *(arg1 + 8) = rcx_48 + 8
                *(rcx_48 + 8) = 0
                *rcx_48 = &data_142f18bc8
                *(rcx_48 + 0x18) = var_218.d
                *(rcx_48 + 0x20) = (int.q(zmm2)).d
            else
                zmm0_1 = zmm1
                zmm1.d = zmm1.d f- zmm4_2
                zmm0_1.d = zmm0_1.d f- zmm2
                var_250.d = int.d(zmm1.d)
                void* rax_40 = rcx_48 + 0x28
                
                if (rax_40 u> rsi_2[1])
                    sub_140b0e3d0(rsi_2, 0x30)
                    rcx_48 = (*rsi_2 + 7) & 0xfffffffffffffff8
                    rax_40 = rcx_48 + 0x28
                
                *rsi_2 = rax_40
                void** rax_41 = *(arg1 + 8)
                *(arg1 + 0x14) += 1
                *rax_41 = rcx_48
                *(arg1 + 8) = rcx_48 + 8
                *(rcx_48 + 8) = 0
                *rcx_48 = &data_142f18bc8
                *(rcx_48 + 0x20) = var_250.d
                *(rcx_48 + 0x18) = int.d(zmm0_1.d)
            
            *(rcx_48 + 0x1c) = rbx.d
            rbx.b = 1
            *(rcx_48 + 0x14) = r12_3
            *(rcx_48 + 0x10) = 1
            
            if (arg14 != 0)
            label_141b6b7fe:
                sub_141096650(arg1)
                int128_t zmm1_2 = data_142d3f5a0
                int32_t var_100_2 = 0
                int64_t rcx_56 = *arg6
                var_1d8 = rcx_56
                int32_t var_fc_1
                __builtin_memset(&var_fc_1, 0xff, 0x14)
                int128_t var_e8_2 = zmm1_2
                int64_t var_d8_1
                __builtin_memset(&var_d8_1, 0, 0x19)
                int64_t var_1d0_2 = 0
                int32_t var_1c8 = 0xffffffff
                int16_t var_1c4_2 = 0x500
                int64_t var_110_2 = 0
                var_258 = 1
                bool var_bf_2 = *(rcx_56 + 0x38) u> 1
                memset(&var_1c0, 0, 0xa8)
                rbx.b <<= 2
                rbx.b |= 1
                int32_t var_104_2 = 0x20
                char var_108_2 = rbx.b
                int64_t var_118_2 = *var_228
                void* rbx_8 = (*rsi_2 + 1) & 0xfffffffffffffffe
                void* rax_52 = rbx_8 + 0x48
                
                if (rax_52 u> rsi_2[1])
                    sub_140b0e3d0(rsi_2, 0x4a)
                    rbx_8 = (*rsi_2 + 1) & 0xfffffffffffffffe
                    rax_52 = rbx_8 + 0x48
                
                wchar16 const* const rcx_59 = u"SlateUpdateScissorRect_ClearStencil"
                *rsi_2 = rax_52
                wchar16 const i
                
                do
                    i = *rcx_59
                    *(rcx_59 + rbx_8 - u"SlateUpdateScissorRect_ClearStencil") = i
                    rcx_59 = &rcx_59[1]
                while (i != 0)
                void*** rcx_62 = (*rsi_2 + 7) & 0xfffffffffffffff8
                void* rax_53 = &rcx_62[0x27]
                
                if (rax_53 u> rsi_2[1])
                    sub_140b0e3d0(rsi_2, 0x140)
                    rcx_62 = (*rsi_2 + 7) & 0xfffffffffffffff8
                    rax_53 = &rcx_62[0x27]
                
                *rsi_2 = rax_53
                void**** rax_54 = *(arg1 + 8)
                *(arg1 + 0x14) += 1
                *rax_54 = rcx_62
                *(arg1 + 8) = &rcx_62[1]
                sub_1405d11b0(rcx_62, &var_1d8, rbx_8)
                *(arg1 + 0x1c4) = 1
                sub_1405d19b0(arg1, &var_1d8)
                int64_t var_c8_1
                *(arg1 + 0x178) = var_c8_1:7.b
                *(arg1 + 0x179) = 0
                *(arg1 + 0x1c4) = 1
                sub_1405d1550(&var_d0)
            
            int64_t* rax_58 = std::_Get_future_error_what((*U"1111")[sx.q(data_1439c7a08)])
            sub_1419a2ec0(rax_58, &var_218, &data_143f2da40, 0)
            int64_t r13_6 = var_218
            var_248.q = r13_6
            sub_1419a2ec0(rax_58, &var_228, &data_143f2db40, 0)
            int64_t var_17c
            __builtin_memset(&var_17c, 0, 0x43)
            __builtin_memset(&var_1d8, 0, 0x30)
            uint128_t var_190_1 = zx.o(0)
            int16_t var_138_1 = 0
            sub_140fdc870(arg1, &var_1d8)
            int64_t var_1a8_1 = data_1439b59c0
            int64_t var_1a0_1 = data_14395da18
            int64_t var_198_1 = data_1439ec2f0
            var_1d8 = data_1439ec2d8
            int64_t rax_63 = 0
            
            if (r13_6 != 0)
                int64_t rdx_20 = sx.q(*(r13_6 + 0x10c))
                void* var_210
                int64_t* rbx_12 = *(var_210 + 0x10)
                int64_t rax_65 = rbx_12[3]
                
                if (*(rax_65 + (rdx_20 << 3)) == 0)
                    sub_1419ccf30(rbx_12, rdx_20.d)
                    rax_65 = rbx_12[3]
                
                rax_63 = *(rax_65 + (rdx_20 << 3))
            
            int64_t var_1d0_3 = rax_63
            int64_t rcx_73 = 0
            int64_t* rax_66 = var_228
            
            if (rax_66 != 0)
                int64_t rdx_21 = sx.q(*(rax_66 + 0x10c))
                void* var_220
                int64_t* rbx_13 = *(var_220 + 0x10)
                int64_t rax_68 = rbx_13[3]
                
                if (*(rax_68 + (rdx_21 << 3)) == 0)
                    sub_1419ccf30(rbx_13, rdx_21.d)
                    rax_68 = rbx_13[3]
                
                rcx_73 = *(rax_68 + (rdx_21 << 3))
            
            int128_t var_1b8
            var_1b8.q = rcx_73
            int32_t var_180_1 = 1
            sub_1419870b0(arg1, &var_1d8, 2)
            var_228 = *(arg1 + 0x188)
            sub_1405eb5d0(arg1, &var_228, r13_6 + 0x11e, arg13, 0)
            int32_t zmm0_2
            
            zmm0_2 = arg10 == 0 ? 0x3f800000 : -0x40800000
            
            var_228 = *(arg1 + 0x188)
            var_250.d = zmm0_2
            sub_1405eb490(arg1, &var_228, r13_6 + 0x124, &var_250, 0)
            int64_t* rbx_14 = *r15
            void* rcx_80 = (*rsi_2 + 7) & 0xfffffffffffffff8
            int32_t r12_7 = *var_230 + 1
            void* rax_72 = rcx_80 + 0x18
            
            if (rax_72 u> rsi_2[1])
                sub_140b0e3d0(rsi_2, 0x20)
                rcx_80 = (*rsi_2 + 7) & 0xfffffffffffffff8
                rax_72 = rcx_80 + 0x18
            
            *rsi_2 = rax_72
            void** rax_73 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_73 = rcx_80
            *(arg1 + 8) = rcx_80 + 8
            *(rcx_80 + 0x10) = r12_7
            int64_t r12_8 = r13_6
            *(rcx_80 + 8) = 0
            *rcx_80 = &data_142f18bb8
            int32_t var_268_2
            var_268_2.q = &rbx_14[2]
            sub_141b65970(r13_6, arg1, rbx_14, &rbx_14[1], var_268_2, &rbx_14[3])
            void* rcx_88 = (*rsi_2 + 7) & 0xfffffffffffffff8
            int64_t rbx_16 = *(arg12 + 0x10)
            void* rax_76 = rcx_88 + 0x28
            
            if (rax_76 u> rsi_2[1])
                sub_140b0e3d0(rsi_2, 0x30)
                rcx_88 = (*rsi_2 + 7) & 0xfffffffffffffff8
                rax_76 = rcx_88 + 0x28
            
            *rsi_2 = rax_76
            void** rax_77 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_77 = rcx_88
            *(arg1 + 8) = rcx_88 + 8
            *(rcx_88 + 8) = 0
            *rcx_88 = &data_142d56618
            *(rcx_88 + 0x10) = 0
            *(rcx_88 + 0x18) = rbx_16
            *(rcx_88 + 0x20) = 0
            void* rcx_94 = (*rsi_2 + 7) & 0xfffffffffffffff8
            void* rax_79 = rcx_94 + 0x20
            
            if (rax_79 u> rsi_2[1])
                sub_140b0e3d0(rsi_2, 0x28)
                rcx_94 = (*rsi_2 + 7) & 0xfffffffffffffff8
                rax_79 = rcx_94 + 0x20
            
            *rsi_2 = rax_79
            void** rax_80 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_80 = rcx_94
            *(arg1 + 8) = rcx_94 + 8
            *(rcx_94 + 8) = 0
            *rcx_94 = &data_142d54988
            *(rcx_94 + 0x10) = 0
            *(rcx_94 + 0x14) = 2
            *(rcx_94 + 0x18) = 1
            int64_t var_198_2 = data_1439ec308
            sub_1419870b0(arg1, &var_1d8, 2)
            var_228 = *(arg1 + 0x188)
            int32_t zmm6_2 = sub_1405eb5d0(arg1, &var_228, r13_6 + 0x11e, arg13, 0)
            
            if (arg10 == 0)
                zmm6_2 = 0x3f800000
            
            var_228 = *(arg1 + 0x188)
            var_250.d = zmm6_2
            sub_1405eb490(arg1, &var_228, r13_6 + 0x124, &var_250, 0)
            int32_t* r13_7 = var_230
            int32_t i_1 = 1
            *r13_7 += r15[1].d
            
            if (r15[1].d s> 1)
                do
                    int64_t* r8_7 = *r15 + sx.q(i_1) * 0x24
                    int32_t var_268_4
                    var_268_4.q = &r8_7[2]
                    sub_141b65970(r12_8, arg1, r8_7, &r8_7[1], var_268_4, &r8_7[3])
                    int64_t r12_9 = *(arg12 + 0x10)
                    void* rcx_106 = (*rsi_2 + 7) & 0xfffffffffffffff8
                    void* rax_89 = rcx_106 + 0x28
                    
                    if (rax_89 u> rsi_2[1])
                        sub_140b0e3d0(rsi_2, 0x30)
                        rcx_106 = (*rsi_2 + 7) & 0xfffffffffffffff8
                        rax_89 = rcx_106 + 0x28
                    
                    *rsi_2 = rax_89
                    void** rax_90 = *(arg1 + 8)
                    *(arg1 + 0x14) += 1
                    *rax_90 = rcx_106
                    *(arg1 + 8) = rcx_106 + 8
                    *(rcx_106 + 8) = 0
                    *rcx_106 = &data_142d56618
                    *(rcx_106 + 0x10) = 0
                    *(rcx_106 + 0x18) = r12_9
                    *(rcx_106 + 0x20) = 0
                    void* rcx_112 = (*rsi_2 + 7) & 0xfffffffffffffff8
                    void* rax_92 = rcx_112 + 0x20
                    
                    if (rax_92 u> rsi_2[1])
                        sub_140b0e3d0(rsi_2, 0x28)
                        rcx_112 = (*rsi_2 + 7) & 0xfffffffffffffff8
                        rax_92 = rcx_112 + 0x20
                    
                    *rsi_2 = rax_92
                    i_1 += 1
                    void** rax_93 = *(arg1 + 8)
                    *(arg1 + 0x14) += 1
                    r12_8 = var_248.q
                    *rax_93 = rcx_112
                    *(arg1 + 8) = rcx_112 + 8
                    *(rcx_112 + 8) = 0
                    *rcx_112 = &data_142d54988
                    *(rcx_112 + 0x10) = 0
                    *(rcx_112 + 0x14) = 2
                    *(rcx_112 + 0x18) = 1
                while (i_1 s< r15[1].d)
                
                r13_7 = var_230
            
            rdx_30 = arg11
            *(rdx_30 + 0x40) = data_1439ec320
            r14_1 = *r13_7
        else
            if (arg14 != 0 && *arg3 u> 0)
                sub_141096650(arg1)
                int128_t zmm1_1 = data_142d3f5a0
                int32_t var_100_1 = 0
                int64_t rcx_2 = *arg6
                var_1d8 = rcx_2
                int32_t var_fc
                __builtin_memset(&var_fc, 0xff, 0x14)
                int128_t var_e8_1 = zmm1_1
                int64_t var_d8
                __builtin_memset(&var_d8, 0, 0x19)
                int64_t var_1d0_1 = 0
                int32_t var_1c8_1 = 0xffffffff
                int16_t var_1c4_1 = 0x500
                int64_t var_110_1 = 0
                var_258 = 1
                bool var_bf_1 = *(rcx_2 + 0x38) u> 1
                memset(&var_1c0, 0, 0xa8)
                int64_t var_118_1 = *arg7
                int64_t rbx_3 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
                char var_108_1 = 5
                int32_t var_104_1 = 0x20
                int64_t rax_7 = rbx_3 + 0x2e
                
                if (rax_7 u> *(arg1 + 0x38))
                    sub_140b0e3d0(arg1 + 0x30, 0x30)
                    rbx_3 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
                    rax_7 = rbx_3 + 0x2e
                
                wchar16 const* const rcx_5 = u"SlateUpdateScissorRect"
                *(arg1 + 0x30) = rax_7
                wchar16 const i_2
                
                do
                    i_2 = *rcx_5
                    *(rcx_5 + rbx_3 - u"SlateUpdateScissorRect") = i_2
                    rcx_5 = &rcx_5[1]
                while (i_2 != 0)
                void*** rcx_8 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_8 = &rcx_8[0x27]
                
                if (rax_8 u> *(arg1 + 0x38))
                    sub_140b0e3d0(arg1 + 0x30, 0x140)
                    rcx_8 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_8 = &rcx_8[0x27]
                
                *(arg1 + 0x30) = rax_8
                void**** rax_9 = *(arg1 + 8)
                *(arg1 + 0x14) += 1
                *rax_9 = rcx_8
                *(arg1 + 8) = &rcx_8[1]
                sub_1405d11b0(rcx_8, &var_1d8, rbx_3)
                *(arg1 + 0x1c4) = 1
                sub_1405d19b0(arg1, &var_1d8)
                int64_t var_c8
                *(arg1 + 0x178) = var_c8:7.b
                *(arg1 + 0x179) = 0
                *(arg1 + 0x1c4) = 1
                sub_1405d1550(&var_d0)
            
            (*(*arg4 + 0x18))(arg4, &var_230)
            zmm1 = zx.o(var_230:4.d)
            zmm3 = _mm_cvtepi32_ps(zx.o(var_230.d))
            var_250 = 0
            zmm6 = *arg9
            zmm2 = *(arg9 + 4)
            float zmm0 = zmm6.d f+ r15[2].d
            float zmm4_1 = zmm2 f+ *(r15 + 0x14)
            zmm1 = _mm_cvtepi32_ps(zmm1)
            var_248 = zmm0
            float var_244_1 = zmm4_1
            char rcx_15
            
            if (zmm0 < 0f || zmm4_1 < 0f)
                rcx_15 = 0
            else
                rcx_15 = 1
            
            float* rax_14 = &var_248
            
            if (rcx_15 == 0)
                rax_14 = &var_250
            
            zmm0 = *rax_14
            zmm4_1 = rax_14[1]
            var_250.d = zmm3.d
            var_250:4.d = zmm1.d
            var_248 = zmm0
            float var_244_2 = zmm4_1
            
            if (zmm0 f> zmm3.d || zmm4_1 f> zmm1.d)
                rcx_15 = 0
            else
                rcx_15 = 1
            
            zmm6.d = zmm6.d f+ r15[5].d
            zmm2 = zmm2 f+ *(r15 + 0x2c)
            var_238.q = 0
            float* rax_15 = &var_248
            
            if (rcx_15 == 0)
                rax_15 = &var_250
            
            var_240 = zmm6.d
            zmm4_1 = rax_15[1]
            float var_23c_1 = zmm2
            char rdx_6
            
            if (zmm6.d f< 0f || zmm2 < 0f)
                rdx_6 = 0
            else
                rdx_6 = 1
            
            int32_t* rcx_16 = &var_240
            
            if (rdx_6 == 0)
                rcx_16 = &var_238
            
            zmm0 = *rcx_16
            zmm2 = rcx_16[1]
            var_240 = zmm3.d
            int32_t var_23c_2 = zmm1.d
            var_238 = zmm0
            float var_234_1 = zmm2
            
            if (zmm0 f> zmm3.d || zmm2 f> zmm1.d)
                rdx_6 = 0
            else
                rdx_6 = 1
            
            int32_t r15_1 = (int.q(fconvert.t(*rax_15))).d
            float* rcx_17 = &var_238
            
            if (rdx_6 == 0)
                rcx_17 = &var_240
            
            zmm2 = rcx_17[1]
            int32_t rsi_1 = (int.q(fconvert.t(*rcx_17))).d
            void*** rcx_20 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_16 = &rcx_20[5]
            void* rax_18
            
            if (arg10 == 0)
                if (rax_16 u> *(arg1 + 0x38))
                    sub_140b0e3d0(arg1 + 0x30, 0x30)
                    rcx_20 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_16 = &rcx_20[5]
                
                *(arg1 + 0x30) = rax_16
                void**** rax_19 = *(arg1 + 8)
                *(arg1 + 0x14) += 1
                *rax_19 = rcx_20
                rax_18 = &rcx_20[1]
                *(arg1 + 8) = rax_18
                rcx_20[3].d = (int.q(zmm4_1)).d
                rcx_20[4].d = (int.q(zmm2)).d
            else
                zmm0 = zmm1.d
                zmm1.d = zmm1.d f- zmm4_1
                
                if (rax_16 u> *(arg1 + 0x38))
                    sub_140b0e3d0(arg1 + 0x30, 0x30)
                    rcx_20 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_16 = &rcx_20[5]
                
                *(arg1 + 0x30) = rax_16
                void**** rax_17 = *(arg1 + 8)
                *(arg1 + 0x14) += 1
                *rax_17 = rcx_20
                rax_18 = &rcx_20[1]
                *(arg1 + 8) = rax_18
                rcx_20[3].d = int.d(zmm0 - zmm2)
                rcx_20[4].d = int.d(zmm1.d)
            
            rdx_30 = arg11
            *rax_18 = 0
            *(rcx_20 + 0x1c) = rsi_1
            *(rcx_20 + 0x14) = r15_1
            rcx_20[2].b = 1
            *rcx_20 = &data_142f18bc8
            *(rdx_30 + 0x40) = data_14395d9e8
        *arg2 = r14_1
        sub_140fdc870(arg1, rdx_30)
        r13 = zx.q(var_258)
    
    *arg8 = *(arg5 + 0x28)

__security_check_cookie(rax_1 ^ &var_288)
return zx.q(r13.b)
