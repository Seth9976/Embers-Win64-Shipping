// 函数: sub_1421efa40
// 地址: 0x1421efa40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_258
uint64_t result = __security_cookie ^ &var_258
uint64_t result_1 = result
void* rbx = arg2
int64_t* r15 = arg7
int64_t rdx = sx.q(arg6)
int64_t* var_1e8 = r15
int32_t var_1c0 = rdx.d

if ((*(arg1 + 0xc) & 2) != 0 && arg8 != 0)
    result = zx.q(*(arg1 + 0xe4))
    
    if (result.b == 0)
        int32_t rax_1 = sub_1422e48a0(arg4)
        int32_t rcx_1 = *(arg1 + 0xbc)
        int32_t r13_1 = *(arg1 + 0x3c)
        int64_t rdx_1 = sx.q(rax_1)
        int32_t var_1d0_1 = rdx_1.d
        int32_t var_1ec_1 = r13_1
        int64_t r14_1 = sx.q((*U"1111")[rdx_1])
        
        if (rcx_1 s>= 0)
            if (r13_1 s> rcx_1)
                r13_1 = rcx_1
            
            var_1ec_1 = r13_1
        
        int32_t rax_3 = (*(*arg1 + 0x50))(arg1)
        int64_t r8 = *arg1
        int32_t rax_4 = (*(r8 + 0x58))(arg1, arg5, r8)
        int64_t* var_208
        int64_t* var_1e0
        int64_t r15_2
        
        if (sub_1421df8c0(arg8, arg4) == 0)
            r15_2 = 0
        else
            char var_218
            char* var_1b0_1 = &var_218
            var_218 = 0
            void*** (* var_1b8)() = j_sub_140597fc0
            void*** rax_7 =
                sub_14081d830(0x18, sub_140a756e0(&var_1b8, &data_143958018) + 0x10, 1, 0)
            void*** rbx_1 = rax_7
            
            if (rax_7 == 0)
                rbx_1 = nullptr
            else
                rax_7[1] = 0
                *rbx_1 = &data_1432eeae8
                rbx_1[2] = 0
            
            int64_t r12_1 = sx.q(r15[0x18].d)
            int32_t rax_8 = (r12_1 + 1).d
            r15[0x18].d = rax_8
            
            if (rax_8 s> *(r15 + 0xc4))
                sub_14083a310(&r15[0x17], r12_1.d)
            
            *(r15[0x17] + (r12_1 << 3)) = rbx_1
            rbx_1[1] = arg8
            void* rax_11 = (*(*arg1 + 0x60))(arg1)
            int32_t rcx_8
            int32_t rdx_5
            
            if (rax_11 == 0)
                rcx_8 = 1
                rdx_5 = 1
            else
                rcx_8 = *(rax_11 + 0xac)
                rdx_5 = *(rax_11 + 0xa8)
            
            int64_t var_110_1 = 0
            float var_118 = 1f f/ _mm_cvtepi32_ps(zx.o(rdx_5)).d
            float var_114_1 = 1f f/ _mm_cvtepi32_ps(zx.o(rcx_8)).d
            int32_t rcx_9
            
            if (rax_11 == 0 || *(rax_11 + 0xa4) s<= 0)
                rcx_9 = 0
            else
                rcx_9 = 1
            
            int32_t var_108_1 = rcx_9
            char var_238
            var_238.d = 2
            int64_t* rcx_10 = data_143f0f180
            int32_t var_104_1 = 1 - rcx_9
            int32_t rax_13
            rax_13.b = arg1[0x23].d != 0
            int32_t var_100_1 = rax_13
            (*(*rcx_10 + 0xf8))(rcx_10, &var_1e0, &var_118, &data_143f4cb30, var_238, 1)
            int64_t* rax_15 = var_1e0
            var_208 = rax_15
            
            if (rax_15 != 0)
                rax_15[1].d += 1
            
            sub_1405d1550(&var_1e0)
            sub_1405d1600(&rbx_1[2], &var_208)
            uint128_t zmm6_1 = sub_1405d1550(&var_208)
            arg8[0x54] = rbx_1[2]
            
            if (var_1d0_1 s< 3)
                var_218 = 0
            else if (arg1[0x23].d != 0 || (r14_1.d u<= 0x18 && test_bit(0x100a040, r14_1.d)))
                var_218 = 1
            else
                int64_t rax_17 = *(r14_1 * 0x14 + &data_143f025f0)
                
                if (rax_17 == data_143f025b8)
                    var_218 = 1
                else if (r14_1.d u> 0x1f)
                    if (rax_17 == data_143f025b0 || r14_1.d == 2 || rax_17 == data_143f025c8)
                        var_218 = 1
                    else
                        var_218 = 0
                else if (test_bit(0xc8451800, r14_1.d) || rax_17 == data_143f025b0 || r14_1.d == 2
                        || rax_17 == data_143f025c8)
                    var_218 = 1
                else
                    var_218 = 0
            
            void* rbx_2 = arg3
            void* const r14_2 = nullptr
            bool cond:5_1 = sub_1422eb5d0(rbx_2) != 0
            int64_t* rax_19 = r15[0x1b]
            int32_t r12_2
            r12_2.b = cond:5_1
            var_208 = rax_19
            int64_t var_130
            sub_141996dc0(rax_19, &var_130, (r12_2 + 1) * rax_3 * r13_1)
            bool cond:6_1 = (arg1[5].b & 1) == 0
            int128_t zmm8 = zx.o(0)
            __builtin_memset(&var_1b8, 0, 0x14)
            int32_t var_1a8
            uint128_t zmm7
            
            if (cond:6_1)
                zmm7 = zx.o(var_1a8.q)
            else
                void var_e8
                int64_t* rax_20 = sub_141996dc0(var_208, &var_e8, (r12_2 + 1) * rax_4 * r13_1)
                zmm8 = *rax_20
                zmm7 = zx.o(rax_20[2])
                var_1b8.o = zmm8
                var_1a8.q = zmm7.q
                sub_1419a4810(var_208)
            
            int64_t* var_198
            
            if (var_218 != 0)
                void* rax_21
                rax_21, zmm6_1 = sub_14214d970(arg8, r13_1)
                r14_2 = rax_21
                
                if (rax_21 != 0 && arg1[0x23].d == 0)
                    int32_t rcx_20 = *(arg1 + 0xbc)
                    int32_t rax_22 = *(arg1 + 0x3c)
                    
                    if (rcx_20 s>= 0 && rax_22 s> rcx_20)
                        rax_22 = rcx_20
                    
                    int64_t r15_1 = sx.q(rax_22 - 1)
                    
                    if (rax_22 - 1 s>= 0)
                        void* r14_3 = r14_2 + 0x20
                        int64_t temp3_1
                        
                        do
                            var_198.o = data_14399f6e0
                            int64_t var_188
                            var_188.o = data_14399f6f0
                            int128_t var_180 = data_14399f700
                            int96_t var_168_1 = data_14399f710.12
                            var_238.q = &var_198
                            zmm6_1, zmm7, zmm8 = sub_1421f39e0(arg1, 
                                sx.q(zx.d(*(arg1[0xc] + (r15_1 << 1))) * arg1[8].d) + arg1[0xb], 
                                arg2, arg3, var_238)
                            temp3_1 = r15_1
                            r15_1 -= 1
                            r14_3 += 0x30
                            float zmm3_1[0x4] = var_198.d
                            float zmm4_1[0x4] = var_198:4.d
                            float temp0_3[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xe1)
                            temp0_3[0] = var_188.d.d
                            float temp0_4[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xe1)
                            float temp0_5[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc6)
                            temp0_4[0] = var_188:4.d.d
                            temp0_5[0] = var_180:8.d.d
                            float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x27)
                            temp0_6[0] = var_168_1.d
                            float temp0_7[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xc6)
                            temp0_7[0] = var_180:0xc.d.d
                            float temp0_8[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x39)
                            var_208.o = temp0_8
                            *(r14_3 - 0x50) = temp0_8
                            int32_t var_190
                            zmm3_1 = var_190
                            float temp0_9[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xe1)
                            temp0_9[0] = var_180.d.d
                            float temp0_10[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0x27)
                            float temp0_11[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0xc6)
                            temp0_10[0] = var_168_1:4.d
                            int32_t var_170
                            temp0_11[0] = var_170.d
                            float temp0_12[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0x27)
                            float temp0_13[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0x39)
                            temp0_12[0] = var_168_1:8.d
                            float temp0_14[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0x39)
                            *(r14_3 - 0x30) = temp0_14
                            var_208.o = temp0_13
                            *(r14_3 - 0x40) = temp0_13
                            var_208.o = temp0_14
                        while (temp3_1 - 1 s>= 0)
                        rbx_2 = arg3
                    
                    r15 = var_1e8
                    r14_2 = nullptr
            
            int64_t rdx_13 = var_130
            void*** (* r8_9)()
            
            if (rdx_13 != 0)
                r8_9 = var_1b8
            
            int32_t var_120
            
            if (rdx_13 == 0 || ((arg1[5].b & 1) != 0 && r8_9 == 0))
                rbx = arg2
            else if (*(r15 + 0xec) == 0)
                int32_t var_230_1
                var_230_1.q = rbx_2
                rbx = arg2
                var_238.q = rbx
                sub_1421f16b0(arg1, rdx_13, r8_9, r14_2, var_238, var_230_1, r12_2 + 1)
            else
                int128_t zmm0_2 = var_130.o
                void* var_190_1 = rbx_2
                rbx = arg2
                var_198 = arg1
                void* const var_150_1 = r14_2
                void*** rax_25 = sub_140a82f30(0x60, 8, r8_9)
                double zmm0_3[0x2] = var_198.o
                char var_217 = 0
                *rax_25 = &data_14306d088
                *(rax_25 + 8) = zmm0_3
                *(rax_25 + 0x18) = rbx.o
                *(rax_25 + 0x28) = _mm_unpacklo_pd(zmm0_2, var_120.q)
                *(rax_25 + 0x38) = zmm8
                double var_158[0x2]
                var_158[0] = zmm7.q
                *(rax_25 + 0x48) = var_158
                rax_25[0xb] = (r12_2 + 1).q
                void*** var_b8_1 = rax_25
                int64_t (* var_c8)(int64_t* arg1)
                int64_t (* rax_26)(int64_t* arg1) = var_c8
                
                if (rax_25 != -8)
                    rax_26 = sub_1421df840
                
                int64_t (* var_c8_1)(int64_t* arg1) = rax_26
                char* var_f0_1 = &var_217
                void*** (* var_f8)() = j_sub_140597fc0
                int64_t* rax_28
                int512_t zmm6_2
                rax_28, zmm6_2 =
                    sub_14081d830(0x40, sub_140a756e0(&var_f8, &data_143958018) + 0x10, 1, 0)
                zmm6_2.o = zmm6_1
                int64_t* r14_4 = rax_28
                int128_t var_a8
                
                if (rax_28 == 0)
                    r14_4 = nullptr
                else
                    *rax_28 = var_c8_1
                    rax_28[2] = var_b8_1
                    var_b8_1 = nullptr
                    *(rax_28 + 0x20) = var_a8
                    int128_t var_98
                    *(rax_28 + 0x30) = var_98
                    int64_t (* rax_29)(int64_t* arg1) = var_c8_1
                    
                    if (*r14_4 != 0)
                        rax_29 = nullptr
                    
                    var_c8_1 = rax_29
                
                int64_t r13_3 = sx.q(r15[0x1f].d)
                int32_t rax_30 = (r13_3 + 1).d
                r15[0x1f].d = rax_30
                
                if (rax_30 s> *(r15 + 0xfc))
                    sub_14083a310(&r15[0x1e], r13_3.d)
                
                *(r15[0x1e] + (r13_3 << 3)) = r14_4
                
                if (var_c8_1 != 0)
                    void*** rcx_29 = &var_a8
                    
                    if (var_b8_1 != 0)
                        rcx_29 = var_b8_1
                    
                    (*rcx_29)[2](rcx_29)
            
            if (var_218 != 0)
                sub_142157340(arg8)
            
            int64_t var_128
            sub_142155830(arg8, var_128, var_120, rax_3.w)
            (*(*arg1 + 0x58))(arg1)
            sub_1421556e0(arg8, var_1b0_1, var_1a8)
            sub_142208cb0(rbx)
            r15_2 = 0
            arg8[0x5a] = 0
        
        int32_t rax_36 = sub_1421f2210(arg1, rbx)
        int64_t* r14_5 = *(**(arg1[0x27] + 0x50) + (sx.q(rax_36) << 3))
        uint32_t rcx_40 = zx.d(arg8[0x52].b)
        var_1e0 = r14_5
        
        if (rax_36 != rcx_40)
            sub_1421fd0a0(arg1, arg8, r14_5, rax_36.b)
        
        result = sub_1419c6730()
        int32_t i = 0
        
        if (r14_5[6].d s> 0)
            void* result_3 = &r14_5[2]
            int64_t* rdx_21 = nullptr
            int32_t var_1c8_1
            var_1c8_1.q = result_3
            int64_t r13_4 = 0
            var_208 = nullptr
            int64_t* r14_7
            
            do
                if (i s< arg1[0x2b].d)
                    int64_t* rcx_42 = &arg1[0x28]
                    int64_t* rax_37 = rcx_42[2]
                    
                    if (rax_37 != 0)
                        rcx_42 = rax_37
                    
                    int64_t rax_38 = *(rcx_42 + rdx_21)
                    
                    if (rax_38 != 0)
                        r15_2 = rax_38
                
                result = *(result_3 + 0x18)
                void* result_2 = result_3
                
                if (result != 0)
                    result_2 = result
                
                void* r14_6 = result_2 + r13_4
                
                if (*(r14_6 + 8) != 0 && r15_2 != 0)
                    int32_t rax_39 = sub_14081f8e0(var_1e8, 1)
                    int64_t* rdi_3 =
                        zx.q(rax_39 s% 0x66) * 0xa0 + *(*var_1e8 + (sx.q(rax_39 s/ 0x66) << 3))
                    rdi_3[0xf] = arg8
                    rdi_3[0x11] = 0
                    *(rdi_3 + 0x9c) ^= (zx.d(*(rbx + 0x35)) ^ *(rdi_3 + 0x9c)) & 1
                    int32_t rax_46 = *(rdi_3 + 0x9c)
                    int32_t rbx_8 = ((zx.d(*(rbx + 0x168)) << 2 ^ rax_46) & 4) ^ rax_46
                    *(rdi_3 + 0x9c) = rbx_8
                    int64_t* rcx_49 = rdi_3
                    *(rdi_3 + 0x9c) =
                        ((zx.d(sub_14082c3b0(arg2, arg3)) << 0xd ^ rbx_8) & 0xe000) ^ rbx_8
                    int64_t* rax_53 = rdi_3[0xd]
                    
                    if (rax_53 != 0)
                        rcx_49 = rax_53
                    
                    *rcx_49 = *(arg2 + 0x360)
                    rcx_49[8].d = *(r14_6 + 4)
                    rcx_49[0xa].d = *(r14_6 + 0xc)
                    *(rcx_49 + 0x54) = *(r14_6 + 0x10)
                    rcx_49[9].d = var_1ec_1
                    *(rdi_3 + 0x9c) &= 0xffffe07f
                    int64_t* rax_59 = var_1e0
                    rdi_3[0x10] = r15_2
                    rcx_49[2] = &rax_59[0x2f]
                    rcx_49[8].d = *(r14_6 + 4)
                    *(rcx_49 + 0x44) = *(r14_6 + 8)
                    *(rdi_3 + 0x9c) |= 0x10000
                    *(rdi_3 + 0x9c) =
                        zx.d(sub_14076deb0(arg2)) << 0x11 | (*(rdi_3 + 0x9c) & 0xfffdffff)
                    result = sub_1422dd2a0(var_1e8, var_1c0, rdi_3)
                    rdx_21 = var_208
                    rbx = arg2
                    result_3 = var_1c8_1.q
                
                r14_7 = var_1e0
                rdx_21 = &rdx_21[1]
                i += 1
                var_208 = rdx_21
                r13_4 += 0x18
                r15_2 = 0
            while (i s< r14_7[6].d)
    else if (result.b == 1)
        char var_238_1 = 0
    label_1421f03fe:
        void* rax_67 = r15[0xc]
        void* rcx_52 = &r15[0xa]
        
        if (rax_67 != 0)
            rcx_52 = rax_67
        
        result = (*(*arg1 + 0x70))(arg1, rbx, *(rcx_52 + (rdx << 3)))
    else if (result.b == 2)
        char var_238_2 = 1
        goto label_1421f03fe

if (*(arg1 + 0x169) != 0)
    int64_t r10_2 = sx.q(arg1[2].d)
    
    if (r10_2.d s< *(rbx + 0x158))
        int64_t rdi_4 = *(rbx + 0x150)
        int32_t r14_8 = arg1[0x2e].d
        
        if (*(rdi_4 + (r10_2 << 2)) != r14_8)
            void* rax_68 = *(rbx + 0x3d0)
            void* rdx_30 = rbx + 0x3c0
            
            if (rax_68 != 0)
                rdx_30 = rax_68
            
            void* r8_19 = (sx.q(*(rbx + 0x3d8)) << 4) + rdx_30
            
            if (rdx_30 != r8_19)
                do
                    if (r10_2.d s>= 0 && r10_2.d s< *(rdx_30 + 8))
                        void* rcx_54 = *(*rdx_30 + (r10_2 << 3))
                        
                        if (rcx_54 != 0)
                            *(rcx_54 + 0x149) = 1
                    
                    rdx_30 += 0x10
                while (rdx_30 != r8_19)
                
                r10_2 = zx.q(arg1[2].d)
                rdi_4 = *(rbx + 0x150)
                r14_8 = arg1[0x2e].d
        
        result = sx.q(r10_2.d)
        *(rdi_4 + (result << 2)) = r14_8

__security_check_cookie(result_1 ^ &var_258)
return result
