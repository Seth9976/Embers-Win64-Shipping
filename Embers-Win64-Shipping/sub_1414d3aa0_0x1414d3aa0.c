// 函数: sub_1414d3aa0
// 地址: 0x1414d3aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3d8
int64_t result = __security_cookie ^ &var_3d8
int64_t result_2 = result
int64_t i_3 = sx.q(arg3[1].d)
int64_t rbx = sx.q(arg5)
void* r13 = arg4
int64_t* r12 = arg3
int32_t var_380 = rbx.d
int32_t result_3 = 0

if (i_3 s> 0)
    int64_t rcx_1 = *arg3 + 0x18
    int64_t i
    
    do
        bool cond:0_1 = *rcx_1 == 0
        result = zx.q(result_3 + 1)
        rcx_1 += 0x1c
        
        if (cond:0_1)
            result = zx.q(result_3)
        
        result_3 = result.d
        i = i_3
        i_3 -= 1
    while (i != 1)
    
    if (result.d s> 0)
        int64_t rdx = 0
        uint32_t i_2 = 0
        int64_t var_350_1 = 0
        void* r8 = &data_143ec4da8
        void* r9 = &data_143ec4dd0
        void* var_2f8_1 = &data_143ec4da8
        result = rbx * 3
        void* var_2f0_1 = &data_143ec4dd0
        int64_t result_1 = result
        uint32_t i_1
        
        do
            void* rcx_3 = *(r8 + 0x18)
            int64_t rdx_1 = rdx + result
            int128_t zmm1 = data_142d3f5a0
            void* rax_1 = r8
            
            if (rcx_3 != 0)
                rax_1 = rcx_3
            
            void* rcx_4 = r9
            void* r8_1 = *(rax_1 + (rdx_1 << 3))
            void* rax_2 = *(r9 + 0x18)
            
            if (rax_2 != 0)
                rcx_4 = rax_2
            
            int64_t rax_3 = *(r8_1 + 8)
            void* rcx_5 = *(rcx_4 + (rdx_1 << 3))
            int64_t var_1a0_1 = *(rcx_5 + 8)
            int32_t var_e0_1 = 0
            int32_t var_dc
            __builtin_memset(&var_dc, 0xff, 0x14)
            int128_t var_c8_1 = zmm1
            int64_t var_b8
            __builtin_memset(&var_b8, 0, 0x1a)
            int64_t var_1b8 = rax_3
            int64_t var_1b0_1 = 0
            int32_t var_1a8_1 = 0xffffffff
            int16_t var_1a4_1 = 0x500
            int64_t var_198_1 = 0
            int32_t var_190_1 = 0xffffffff
            int16_t var_18c_1 = 0x500
            int64_t var_f8
            __builtin_memset(&var_f8, 0, 0x11)
            int32_t var_e4_1 = 0
            void var_188
            memset(&var_188, 0, 0x90)
            int32_t j_5 = 0
            int64_t* rax_4 = &var_1b8
            int64_t rcx_8 = 0
            uint64_t r14_1 = 0
            
            while (*rax_4 != 0)
                j_5 += 1
                rcx_8 += 1
                rax_4 = &rax_4[3]
                
                if (rcx_8 s>= 8)
                    break
            
            uint128_t var_98
            
            if (j_5 != 0)
                int128_t* rdx_2 = &var_98
                uint64_t j_4 = zx.q(j_5)
                int64_t* rax_5 = &var_1b8
                uint64_t j
                
                do
                    int64_t rcx_9 = *rax_5
                    
                    if (rcx_9 != 0)
                        r14_1 = zx.q(r14_1.d + 1)
                        *rdx_2 = rcx_9
                        rdx_2 += 8
                    
                    rax_5 = &rax_5[3]
                    j = j_4
                    j_4 -= 1
                while (j != 1)
            
            int64_t r15_1 = var_f8
            
            if (r15_1 != 0 && ((var_e4_1.b & 0xf) == 2 || (var_e4_1.b & 0xf0) == 0x20))
                void*** rcx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_8 = &rcx_12[4]
                
                if (rax_8 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x28)
                    rcx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_8 = &rcx_12[4]
                
                *(arg2 + 0x30) = rax_8
                int64_t* rax_9 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_9 = rcx_12
                *(arg2 + 8) = &rcx_12[1]
                rcx_12[1] = 0
                *rcx_12 = &data_142f115e8
                rcx_12[2].d = var_e4_1
                rcx_12[3] = r15_1
            
            uint32_t rdx_3 = (r14_1 << 3).d
            int64_t r15_2 = sx.q(rdx_3)
            int64_t* rbx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_11 = r15_2 + rbx_4
            
            if (rax_11 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, rdx_3 + 8)
                rbx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_11 = r15_2 + rbx_4
            
            *(arg2 + 0x30) = rax_11
            int64_t j_3 = sx.q(r14_1.d)
            
            if (r14_1.d s> 0)
                int64_t* rcx_17 = rbx_4
                int64_t j_1
                
                do
                    *rcx_17 = *(&var_98 - rbx_4 + rcx_17)
                    rcx_17 = &rcx_17[1]
                    j_1 = j_3
                    j_3 -= 1
                while (j_1 != 1)
            
            void*** rcx_20 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_13 = &rcx_20[5]
            
            if (rax_13 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_20 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_13 = &rcx_20[5]
            
            *(arg2 + 0x30) = rax_13
            void** rax_14 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_14 = rcx_20
            *(arg2 + 8) = &rcx_20[1]
            rcx_20[1] = 0
            rcx_20[3] = rbx_4
            *rcx_20 = &data_142d549c8
            rcx_20[2].d = r14_1.d
            rcx_20[4].d = 1
            int64_t rbx_9 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
            int64_t rax_16 = rbx_9 + 0x56
            
            if (rax_16 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x58)
                rbx_9 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
                rax_16 = rbx_9 + 0x56
            
            *(arg2 + 0x30) = rax_16
            wchar16 const* const rcx_25 = u"InjectSimpleTranslucentVolumeLightingArray"
            wchar16 const j_2
            
            do
                j_2 = *rcx_25
                *(rcx_25 + rbx_9 - u"InjectSimpleTranslucentVolumeLightingArray") = j_2
                rcx_25 = &rcx_25[1]
            while (j_2 != 0)
            void*** rcx_28 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_17 = &rcx_28[0x27]
            
            if (rax_17 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x140)
                rcx_28 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_17 = &rcx_28[0x27]
            
            *(arg2 + 0x30) = rax_17
            void**** rax_18 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_18 = rcx_28
            *(arg2 + 8) = &rcx_28[1]
            sub_1405d11b0(rcx_28, &var_1b8, rbx_9)
            *(arg2 + 0x1c4) = 1
            sub_1405d19b0(arg2, &var_1b8)
            uint128_t zmm0_1 = zx.o(0)
            int64_t var_a8
            *(arg2 + 0x178) = var_a8:7.b
            uint64_t rax_21 = zx.q(*(arg2 + 0xa0))
            int128_t zmm1_1 = zx.o(0)
            *(arg2 + 0x179) = 0
            int32_t r14_2 = 0
            *(arg2 + 0x1c4) = 1
            int64_t var_208
            __builtin_memset(&var_208, 0, 0x2c)
            int64_t var_1d8_1 = 0
            int32_t var_1d0_1 = 0
            int16_t var_1cc_1 = 0
            char var_1ca_1 = 0
            int16_t var_1c8_1 = 0
            int32_t var_20c_1 = rax_21.d
            int128_t var_268
            __builtin_memset(&var_268, 0, 0x30)
            int128_t var_220_1 = zx.o(0)
            
            if (rax_21.d != 0)
                do
                    uint64_t rbx_12 = zx.q(r14_2)
                    uint64_t r15_3 = rbx_12 * 3
                    int64_t* rcx_33 = *(arg2 + (r15_3 << 3) + 0xa8)
                    
                    if (rcx_33 == 0)
                        *(&var_208 + rbx_12) = 0
                        rax_21.b = 0
                    else
                        *(&var_208 + rbx_12) = *(rcx_33 + 0x3c)
                        int64_t var_200
                        *(&var_200 + (rbx_12 << 2)) = rcx_33[8].d
                        int64_t rax_25 = (*(*rcx_33 + 0x10))(zmm0_1, zmm1_1)
                        
                        if (rax_25 != 0)
                            var_1cc_1:1.b = 1
                        
                        if (rax_25 == 0 || *(rax_25 + 0x68) u<= 1)
                            var_1cc_1:1.b = 0
                        
                        rax_21 = zx.q(*(&var_208 + rbx_12))
                    
                    if (rax_21.b != 0)
                        var_1d0_1.w = *(*(arg2 + (r15_3 << 3) + 0xa8) + 0x38)
                    
                    r14_2 += 1
                while (r14_2 u< var_20c_1)
            
            int64_t* rcx_35 = *(arg2 + 0x168)
            int32_t var_1e0_1
            
            if (rcx_35 == 0)
                var_1e0_1 = 0
            else
                var_1e0_1 = *(rcx_35 + 0x3c)
                var_1e0_1 = rcx_35[8].d
                void* rax_29 = (*(*rcx_35 + 0x10))(zmm0_1, zmm1_1)
                
                if (rax_29 == 0 || *(rax_29 + 0x68) u<= 1)
                    var_1cc_1:1.b = 0
                else
                    var_1cc_1:1.b = 1
            
            var_1d8_1.b = *(arg2 + 0x170)
            var_1d8_1:1.b = *(arg2 + 0x171)
            var_1d8_1:2.b = *(arg2 + 0x172)
            var_1d8_1:3.b = *(arg2 + 0x173)
            var_1d8_1:4.d = *(arg2 + 0x174)
            
            if (var_1e0_1 != 0)
                var_1d0_1.w = *(*(arg2 + 0x168) + 0x38)
            
            int32_t rcx_37 = 0
            int32_t rbx_13 = r12[1].d
            var_1d0_1:2.b = *(arg2 + 0x178)
            var_1d0_1:3.b = *(arg2 + 0x179)
            char var_1ca_2 = *(arg2 + 0x17a)
            int64_t var_230_1 = data_14395da18
            int64_t var_228_1 = data_14395d9e8
            int64_t var_238_1 = data_1439b7258
            int32_t var_210_1 = 1
            int32_t var_390_1 = 0
            int128_t var_88
            
            if (rbx_13 s> 0)
                uint32_t i_5 = i_2
                int64_t* rdx_9 = nullptr
                int64_t* var_388_1 = nullptr
                int32_t* r14_3 = nullptr
                int32_t* var_358_1 = nullptr
                int32_t rax_48
                
                do
                    int64_t r8_4 = *r12
                    int64_t var_398 = r8_4
                    int64_t rax_42
                    
                    if (rbx_13 != r12[3].d)
                        int32_t rcx_38 = 0
                        int64_t rdx_10 = *(rdx_9 + r12[4])
                        
                        if ((rdx_10 u>> 0x20).d != 0)
                            rcx_38 = var_380
                        
                        rdx_9 = var_388_1
                        rax_42 = sx.q((rdx_10.d & 0x7fffffff) + rcx_38)
                    else
                        rax_42 = sx.q(rcx_37)
                    
                    int64_t* rcx_40 = r12[2] + rax_42 * 0xc
                    rax_48 = rbx_13
                    
                    if (*(r14_3 + r8_4 + 0x18) != 0)
                        int32_t rax_49 = rcx_40[1].d
                        uint64_t var_2d0 = *rcx_40
                        int32_t var_2c4_1 = (*(r14_3 + r8_4 + 0xc)).d
                        int32_t var_2c8_1 = rax_49
                        sub_1414c4670(&var_98, &var_2d0, r13, i_5, 0)
                        
                        if (var_98:0xc.d s<= var_98.d || var_88.d s<= var_98:4.d
                                || var_88:4.d s<= var_98:8.d)
                            rax_48 = rbx_13
                        else
                            void* var_2c0
                            sub_1419a2ec0(*(r13 + 0x5150), &var_2c0, &data_143f5e630, 0)
                            void var_278
                            int128_t* rax_53 =
                                sub_1419a2ec0(*(r13 + 0x5150), &var_278, &data_143f5e530, 0)
                            void* r12_1 = *rax_53
                            void* r15_4 = *(rax_53 + 8)
                            void* var_2b0
                            sub_1419a2ec0(*(r13 + 0x5150), &var_2b0, &data_143ee8960, 0)
                            void* rax_54 = var_2b0
                            void* r13_1 = var_2c0
                            var_268.q = data_143a2fe60
                            int64_t rax_56 = 0
                            
                            if (r13_1 != 0)
                                int64_t rdx_16 = sx.q(*(r13_1 + 0x10c))
                                void* var_2b8
                                int64_t* rbx_14 = *(var_2b8 + 0x10)
                                int64_t rax_58 = rbx_14[3]
                                
                                if (*(rax_58 + (rdx_16 << 3)) == 0)
                                    sub_1419ccf30(rbx_14, rdx_16.d)
                                    rax_58 = rbx_14[3]
                                
                                rax_56 = *(rax_58 + (rdx_16 << 3))
                            
                            var_268:8.q = rax_56
                            int64_t rax_59 = 0
                            
                            if (r12_1 != 0)
                                int64_t rdx_17 = sx.q(*(r12_1 + 0x10c))
                                int64_t* rbx_15 = *(r15_4 + 0x10)
                                int64_t rax_60 = rbx_15[3]
                                
                                if (*(rax_60 + (rdx_17 << 3)) == 0)
                                    sub_1419ccf30(rbx_15, rdx_17.d)
                                    rax_60 = rbx_15[3]
                                
                                rax_59 = *(rax_60 + (rdx_17 << 3))
                            
                            int128_t var_248_1
                            var_248_1:8.q = rax_59
                            int64_t rax_61 = 0
                            
                            if (rax_54 != 0)
                                int64_t rdx_18 = sx.q(*(rax_54 + 0x10c))
                                void* var_2a8
                                int64_t* rbx_16 = *(var_2a8 + 0x10)
                                int64_t rax_63 = rbx_16[3]
                                
                                if (*(rax_63 + (rdx_18 << 3)) == 0)
                                    sub_1419ccf30(rbx_16, rdx_18.d)
                                    rax_63 = rbx_16[3]
                                
                                rax_61 = *(rax_63 + (rdx_18 << 3))
                            
                            var_248_1.q = rax_61
                            float zmm6_1 = sub_1419870b0(arg2, &var_268, 2)
                            int32_t rax_64 = sub_1414ccda0()
                            int32_t rdx_20 = var_98.d
                            int32_t rcx_50 = var_98:4.d
                            uint64_t r14_7 = zx.q(*(r13_1 + 0x11c))
                            int32_t var_2dc_1 = rax_64
                            float zmm3_1 = zmm6_1 f/ _mm_cvtepi32_ps(zx.o(rax_64)).d
                            int32_t rax_67 = var_98:0xc.d
                            float zmm2_1 = zmm6_1 f/ _mm_cvtepi32_ps(zx.o((rax_64.q u>> 0x20).d)).d
                            uint128_t zmm1_2
                            zmm1_2.d = _mm_cvtepi32_ps(zx.o(rdx_20)).d f* zmm3_1
                            uint128_t zmm0_2
                            zmm0_2.d = _mm_cvtepi32_ps(zx.o(rax_67 - rdx_20)).d f* zmm3_1
                            int32_t var_340_1 = zmm1_2.d
                            int32_t var_348 = zmm0_2.d
                            zmm0_2 = _mm_cvtepi32_ps(zx.o(var_88.d - rcx_50))
                            
                            if (r14_7.d u>= 0x10)
                                r14_7 = 0x10
                            
                            zmm0_2.d = zmm0_2.d f* zmm2_1
                            int32_t var_344_1 = zmm0_2.d
                            zmm0_2.d = _mm_cvtepi32_ps(zx.o(rcx_50)).d f* zmm2_1
                            int32_t var_33c_1 = zmm0_2.d
                            uint32_t i_4
                            
                            if (r14_7.d != 0)
                                uint32_t r12_2 = zx.d(*(r13_1 + 0x11a))
                                int64_t rbx_19 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
                                i_4 = zx.d(*(r13_1 + 0x118))
                                int64_t rax_72 = *(arg2 + 0x188)
                                int64_t rax_73 = rbx_19 + r14_7
                                
                                if (rax_73 u> *(arg2 + 0x38))
                                    sub_140b0e3d0(arg2 + 0x30, (r14_7 + 0x10).d)
                                    rbx_19 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
                                    rax_73 = rbx_19 + r14_7
                                
                                *(arg2 + 0x30) = rax_73
                                memcpy(rbx_19, &var_348, r14_7.d)
                                void*** rcx_55 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                void* rax_74 = &rcx_55[6]
                                
                                if (rax_74 u> *(arg2 + 0x38))
                                    sub_140b0e3d0(arg2 + 0x30, 0x38)
                                    rcx_55 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                    rax_74 = &rcx_55[6]
                                
                                *(arg2 + 0x30) = rax_74
                                void** rax_75 = *(arg2 + 8)
                                *(arg2 + 0x14) += 1
                                *rax_75 = rcx_55
                                *(arg2 + 8) = &rcx_55[1]
                                rcx_55[1] = 0
                                *rcx_55 = &data_142d549d8
                                rcx_55[2] = rax_72
                                rcx_55[4].d = i_4
                                rcx_55[3] = rbx_19
                                *(rcx_55 + 0x24) = r12_2
                                rcx_55[5].d = r14_7.d
                            
                            uint64_t r14_8 = zx.q(*(r13_1 + 0x122))
                            
                            if (r14_8.d u>= 4)
                                r14_8 = 4
                            
                            if (r14_8.d != 0)
                                int64_t rax_79 = *(arg2 + 0x188)
                                uint32_t r12_3 = zx.d(*(r13_1 + 0x120))
                                uint32_t r13_2 = zx.d(*(r13_1 + 0x11e))
                                int64_t rbx_24 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
                                int64_t rax_80 = r14_8 + rbx_24
                                
                                if (rax_80 u> *(arg2 + 0x38))
                                    sub_140b0e3d0(arg2 + 0x30, (r14_8 + 0x10).d)
                                    rbx_24 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
                                    rax_80 = r14_8 + rbx_24
                                
                                *(arg2 + 0x30) = rax_80
                                memcpy(rbx_24, &var_98:8, r14_8.d)
                                void*** rcx_63 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                void* rax_81 = &rcx_63[6]
                                
                                if (rax_81 u> *(arg2 + 0x38))
                                    sub_140b0e3d0(arg2 + 0x30, 0x38)
                                    rcx_63 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                    rax_81 = &rcx_63[6]
                                
                                *(arg2 + 0x30) = rax_81
                                void**** rax_82 = *(arg2 + 8)
                                *(arg2 + 0x14) += 1
                                *rax_82 = rcx_63
                                *(arg2 + 8) = &rcx_63[1]
                                rcx_63[1] = 0
                                *rcx_63 = &data_142d549d8
                                rcx_63[2] = rax_79
                                rcx_63[3] = rbx_24
                                rcx_63[4].d = r13_2
                                *(rcx_63 + 0x24) = r12_3
                                rcx_63[5].d = r14_8.d
                            
                            if (r12_1 != 0)
                                uint64_t r14_9 = zx.q(*(r12_1 + 0x11c))
                                i_4 = var_98:8.d
                                
                                if (r14_9.d u>= 4)
                                    r14_9 = 4
                                
                                if (r14_9.d != 0)
                                    int64_t rax_86 = *(arg2 + 0x1a8)
                                    uint32_t r12_4 = zx.d(*(r12_1 + 0x11a))
                                    uint32_t r13_3 = zx.d(*(r12_1 + 0x118))
                                    int64_t rbx_29 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
                                    int64_t rax_87 = r14_9 + rbx_29
                                    
                                    if (rax_87 u> *(arg2 + 0x38))
                                        sub_140b0e3d0(arg2 + 0x30, (r14_9 + 0x10).d)
                                        rbx_29 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
                                        rax_87 = r14_9 + rbx_29
                                    
                                    *(arg2 + 0x30) = rax_87
                                    memcpy(rbx_29, &i_4, r14_9.d)
                                    void*** rcx_72 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                    void* rax_88 = &rcx_72[6]
                                    
                                    if (rax_88 u> *(arg2 + 0x38))
                                        sub_140b0e3d0(arg2 + 0x30, 0x38)
                                        rcx_72 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                        rax_88 = &rcx_72[6]
                                    
                                    *(arg2 + 0x30) = rax_88
                                    void**** rax_89 = *(arg2 + 8)
                                    *(arg2 + 0x14) += 1
                                    *rax_89 = rcx_72
                                    *(arg2 + 8) = &rcx_72[1]
                                    rcx_72[1] = 0
                                    *rcx_72 = &data_142d549d8
                                    rcx_72[2] = rax_86
                                    rcx_72[3] = rbx_29
                                    rcx_72[4].d = r13_3
                                    *(rcx_72 + 0x24) = r12_4
                                    rcx_72[5].d = r14_9.d
                            
                            r13 = arg4
                            int64_t r8_9 = *(arg2 + 0x1a0)
                            i_4 = i_2
                            sub_141080ac0(rax_54, arg2, r8_9, *(r13 + 0x10))
                            int64_t r15_5 = var_398
                            r14_3 = var_358_1
                            int32_t zmm1_3 = *(rcx_40 + 4)
                            int32_t var_338 = *rcx_40
                            int32_t zmm0_3 = rcx_40[1].d
                            int32_t var_334_1 = zmm1_3
                            zmm1_3 = *(r14_3 + r15_5 + 0xc)
                            var_398 = *(arg2 + 0x1a0)
                            int32_t var_330_1 = zmm0_3
                            int32_t var_32c_1 = zmm1_3
                            char var_3b8_1
                            var_3b8_1.d = 0
                            sub_1405eb490(arg2, &var_398, rax_54 + 0x118, &i_4, var_3b8_1)
                            var_398 = *(arg2 + 0x1a0)
                            var_3b8_1.d = 0
                            sub_1405d0e10(arg2, &var_398, rax_54 + 0x11e, &var_338, var_3b8_1)
                            int32_t zmm1_4 = *(r14_3 + r15_5 + 4)
                            int64_t rax_96 = *(arg2 + 0x1a0)
                            int32_t var_328 = *(r14_3 + r15_5)
                            int32_t var_324_1 = zmm1_4
                            int32_t var_320_1 = *(r14_3 + r15_5 + 8)
                            int32_t var_31c_1 = *(r14_3 + r15_5 + 0x10)
                            var_398 = rax_96
                            var_3b8_1.d = 0
                            sub_1405d0e10(arg2, &var_398, rax_54 + 0x124, &var_328, var_3b8_1)
                            uint128_t var_298 = var_98
                            int64_t var_288_1 = var_88.q
                            sub_14243f510(arg2, &var_298)
                            r12 = arg3
                            i_5 = i_2
                            rax_48 = r12[1].d
                        
                        rdx_9 = var_388_1
                    
                    r14_3 = &r14_3[7]
                    rcx_37 = var_390_1 + 1
                    var_358_1 = r14_3
                    rdx_9 = &rdx_9[1]
                    var_390_1 = rcx_37
                    var_388_1 = rdx_9
                    rbx_13 = rax_48
                while (rcx_37 s< rax_48)
            
            void*** rcx_84 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_97 = &rcx_84[2]
            
            if (rax_97 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x18)
                rcx_84 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_97 = &rcx_84[2]
            
            *(arg2 + 0x30) = rax_97
            *(arg2 + 0x14) += 1
            int64_t* rax_98 = *(arg2 + 8)
            zmm1_1 = data_142d3f800
            var_98 = data_142d57d10
            *rax_98 = rcx_84
            zmm0_1 = data_142d57920
            *(arg2 + 8) = &rcx_84[1]
            rcx_84[1] = 0
            *rcx_84 = &data_142d549b8
            *(arg2 + 0x1c4) = 0
            *(arg2 + 0x178) = 0
            int64_t r15_6 = *(r8_1 + 0x10)
            int64_t* r14_11 = *(r8_1 + 8)
            void*** rbx_35 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            int128_t var_88_1 = zmm1_1
            void* rax_100 = &rbx_35[0xa]
            
            if (rax_100 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x58)
                rbx_35 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_100 = &rbx_35[0xa]
            
            *(arg2 + 0x30) = rax_100
            int64_t* rax_101 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_101 = rbx_35
            *(arg2 + 8) = &rbx_35[1]
            rbx_35[1] = 0
            *rbx_35 = &data_142d56628
            rbx_35[2].d = var_98.d
            *(rbx_35 + 0x14) = var_98:4.d
            rbx_35[3].d = var_98:8.d
            *(rbx_35 + 0x1c) = var_98:0xc.d
            __builtin_memset(&rbx_35[4], 0xff, 0x14)
            *(rbx_35 + 0x34) = zmm0_1:4.d
            rbx_35[7].d = zmm0_1:8.d
            *(rbx_35 + 0x3c) = zmm0_1:0xc.d
            rbx_35[8] = r14_11
            rbx_35[9] = r15_6
            
            if ((*(*r14_11 + 8))(r14_11) == 0)
                int64_t* rcx_90 = rbx_35[8]
                
                if ((*(*rcx_90 + 0x18))(rcx_90) == 0)
                    int64_t* rcx_91 = rbx_35[8]
                    
                    if ((*(*rcx_91 + 0x20))(rcx_91) == 0)
                        int64_t* rcx_92 = rbx_35[8]
                        (*(*rcx_92 + 0x10))(rcx_92)
            
            int64_t* rcx_93 = rbx_35[9]
            
            if ((*(*rcx_93 + 8))(rcx_93) == 0)
                int64_t* rcx_94 = rbx_35[9]
                
                if ((*(*rcx_94 + 0x18))(rcx_94) == 0)
                    int64_t* rcx_95 = rbx_35[9]
                    
                    if ((*(*rcx_95 + 0x20))(rcx_95) == 0)
                        int64_t* rcx_96 = rbx_35[9]
                        (*(*rcx_96 + 0x10))(rcx_96)
            
            zmm1_1 = data_142d3f800
            int64_t r15_7 = *(rcx_5 + 0x10)
            void*** rbx_40 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            int64_t* r14_13 = *(rcx_5 + 8)
            var_98 = data_142d57d10
            zmm0_1 = data_142d57920
            void* rax_124 = &rbx_40[0xa]
            var_88 = zmm1_1
            
            if (rax_124 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x58)
                rbx_40 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_124 = &rbx_40[0xa]
            
            *(arg2 + 0x30) = rax_124
            int64_t* rax_125 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_125 = rbx_40
            *(arg2 + 8) = &rbx_40[1]
            rbx_40[1] = 0
            *rbx_40 = &data_142d56628
            rbx_40[2].d = var_98.d
            *(rbx_40 + 0x14) = var_98:4.d
            rbx_40[3].d = var_98:8.d
            *(rbx_40 + 0x1c) = var_98:0xc.d
            __builtin_memset(&rbx_40[4], 0xff, 0x14)
            *(rbx_40 + 0x34) = zmm0_1:4.d
            rbx_40[7].d = zmm0_1:8.d
            *(rbx_40 + 0x3c) = zmm0_1:0xc.d
            rbx_40[8] = r14_13
            rbx_40[9] = r15_7
            
            if ((*(*r14_13 + 8))(r14_13) == 0)
                int64_t* rcx_99 = rbx_40[8]
                
                if ((*(*rcx_99 + 0x18))(rcx_99) == 0)
                    int64_t* rcx_100 = rbx_40[8]
                    
                    if ((*(*rcx_100 + 0x20))(rcx_100) == 0)
                        int64_t* rcx_101 = rbx_40[8]
                        (*(*rcx_101 + 0x10))(rcx_101)
            
            int64_t* rcx_102 = rbx_40[9]
            
            if ((*(*rcx_102 + 8))(rcx_102) == 0)
                int64_t* rcx_103 = rbx_40[9]
                
                if ((*(*rcx_103 + 0x18))(rcx_103) == 0)
                    int64_t* rcx_104 = rbx_40[9]
                    
                    if ((*(*rcx_104 + 0x20))(rcx_104) == 0)
                        int64_t* rcx_105 = rbx_40[9]
                        (*(*rcx_105 + 0x10))(rcx_105)
            
            int64_t var_b0
            sub_1405d1550(&var_b0)
            rdx = var_350_1 + 1
            r8 = var_2f8_1
            i_1 = i_2 + 1
            r9 = var_2f0_1
            result = result_1
            i_2 = i_1
            var_350_1 = rdx
        while (i_1 s< 2)

__security_check_cookie(result_2 ^ &var_3d8)
return result
